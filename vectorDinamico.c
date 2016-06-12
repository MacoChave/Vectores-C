/*
 * vectorDinamico.c
 *
 *  Created on: 11/06/2016
 *      Author: marco
 */

#include <stdlib.h>
#include <stdio.h>

int main(void) {

	int * a = NULL;
	int talla, i, n;

	//PEDIR DIMENSIONES DEL ARREGLO
	printf("Numero de elementos: ");
	scanf("%d", &talla);

	//RESERVAR MEMORIA
	a = malloc(talla * sizeof(int));

	//LLENAR ARREGLO
	for (i = 0; i < talla; i++) {
		//a[i] = i;
		printf("Ingresa un número: ");
		scanf("%d\n", &n);
		a[i] = n;
	}

	for (i = 0; i < talla; i++) {
		printf(" -----\n");
		printf("|  %d |\n", a[i]);
		printf(" -----\n");
	}

	free(a);
	a = NULL;

	return 0;
}
