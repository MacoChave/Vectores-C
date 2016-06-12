/*
 * programa.c
 *
 *  Created on: 11/06/2016
 *      Author: marco
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define TALLA 10

int * selecciona_pares(int a[], int talla, int * numpares) {
	int i, j;
	int * pares;

	//CONTAR ELEMENTOS PARES
	*numpares = 0;
	for (i = 0; i < talla; i++)
		if (a[i] % 2 == 0)
			(*numpares)++;

	//PEDIR MEMORIA PARA LOS PARES
	pares = malloc(*numpares * sizeof(int));

	//COPIAR ELEMENTOS EN ZONA DE MEMORIA SOLICITADA
	j = 0;
	for (i = 0; i < talla; i++)
		if (a[i] % 2 == 0)
			pares[j++] = a[i];

	return pares;
}

int main(void) {
	int vector[TALLA], i;
	int * seleccion, seleccionados;

	//LLENANDO EL VECTOR DE VALORES ALEATOREOS
	//srand(time(0));
	for (i = 0; i < TALLA; i++)
		vector[i] = i * 5;

	//LLAMAR A FUNCION PARA SELECCIONAR PARES
	seleccion = selecciona_pares(vector, TALLA, &seleccionados);
	//seleccionados APUNTA A LA ZONA DE MEMORIA CON LOS ELEMENTOS PARES
	//seleccionados CONTIENE EL NÚMERO DE PARES

	//MOSTRAR EN PANTALLA
	for (i = 0; i < seleccionados; i++)
		printf("%d\n", seleccion[i]);

	//LIMPIAR SELECCION DE MEMORIA
	free(seleccion);
	//LIMPIAR VALOR DE SELECCION
	seleccion = NULL;

	return 0;
}
