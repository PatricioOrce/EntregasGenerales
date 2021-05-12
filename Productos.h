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
/* idProducto (numérico)
·       descripción (alfanumérico)
·       nacionalidad (teniendo en cuenta que cada país tiene su propio Id y descripción con su nombre)
·       tipo (teniendo en cuenta de que este puede tener más características: Id, Marca, Fabrica y tipo de tela.)
·       precio por unidad (numérico decimal)*/
	int idProducto;
	char descripcion[50];
	char nacionalidad;
	char tipo;
	float precioPorUnidad;
}Producto;

#endif /* PRODUCTOS_H_ */
