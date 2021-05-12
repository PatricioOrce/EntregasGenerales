/*
 * Productos.c
 *
 *  Created on: 11 may. 2021
 *      Author: Pato
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Productos.h"

int prod_new()
{
	return (Producto*)malloc(sizeof(Producto));
}

int prod_newParam(int idProducto,char* descripcion,char* nacionalidad,char* tipo,float precioPorUnidad)
{
	Producto* auxProducto = prod_new(auxProducto);
}

int prod_delete(Producto* this)
{

}

int prod_setDescripcion(Producto* this, char* descripcion)
{
	int retorno = -1;
	if(this!=NULL && prod_isDescripcion(descripcion)==0)
	{
		strcpy(this->descripcion,descripcion);
		retorno = 0;

	}
	return retorno;
}

char* prod_getDescripcion(Producto* this, int* flagError)
{
	*flagError = -1;
	char* auxDescripcion = NULL;
	if(this!=NULL && flagError!=NULL)
	{
		auxDescripcion = this->descripcion;
		*flagError = 0;
	}
	return auxDescripcion;
}

int prod_setIdProducto(Producto* this, int id)
{
	int retorno = -1;
	if(this!=NULL && prod_isValidId(id)==0)
	{
		this->idProducto = id;
		retorno = 0;

	}
	return retorno;
}

int prod_getIdProducto(Producto* this, int* flagError)
{
	*flagError = -1;
	int auxIdProducto = -1;
	if(this!=NULL && flagError!=NULL)
	{
		auxIdProducto = this->idProducto;
		*flagError = 0;
	}
	return auxIdProducto;
}


int prod_setPrecioPorUnidad(Producto* this, float precio)
{
	int retorno = -1;
	if(this!=NULL && prod_isPrecio(precio)==0)
	{
		this->precioPorUnidad = precio;
		retorno = 0;

	}
	return retorno;
}

float prod_getPrecioPorUnidad(Producto* this, int* flagError)
{
	*flagError = -1;
	float aux = -1;
	if(this!=NULL && flagError!=NULL)
	{
		aux = this->precioPorUnidad;
		*flagError = 0;
	}
	return aux;
}
















int prod_isValidId(int id)
{
	int retorno = -1;

	if(id>=0)
	{
		retorno = 0;
	}

	return retorno;
}
