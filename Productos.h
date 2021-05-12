/*
 * Productos.h
 *
 *  Created on: 11 may. 2021
 *      Author: Pato
 */

#ifndef PRODUCTOS_H_
#define PRODUCTOS_H_

typedef struct
{
/* idProducto (num�rico)
�       descripci�n (alfanum�rico)
�       nacionalidad (teniendo en cuenta que cada pa�s tiene su propio Id y descripci�n con su nombre)
�       tipo (teniendo en cuenta de que este puede tener m�s caracter�sticas: Id, Marca, Fabrica y tipo de tela.)
�       precio por unidad (num�rico decimal)*/
	int idProducto;
	char descripcion[50];
	char nacionalidad;
	char tipo;
	float precioPorUnidad;
}Producto;

#endif /* PRODUCTOS_H_ */
