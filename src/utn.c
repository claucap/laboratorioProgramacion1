/*
 * UTN.C
 *
 *  Created on: 16 abr. 2022
 *      Author: claudia
 */

#include "utn.h"

#include <stdio.h>
#include <stdlib.h>

int UTN_getInt(int * pNumero, char * mensaje, char * mensajeError, int maximo, int minimo){

	int auxiliarNumero;
	int retorno;

	retorno = -1;

	if(pNumero != NULL && mensajeError != NULL && maximo >= minimo){
			printf("%s", mensaje);
			scanf("%d", &auxiliarNumero);
			if(auxiliarNumero >= minimo && auxiliarNumero <= maximo){
				*pNumero = auxiliarNumero;
				retorno = 0;
			}else{
				printf("%s", mensajeError);
			}
	}
	return retorno;
}

float UTN_getFloat(float * pNumero, char * mensaje, char * mensajeError, int maximo, int minimo){

	float auxiliarNumero;
	int retorno;

	retorno = -1;

	if(pNumero != NULL && mensajeError != NULL && maximo >= minimo){
			printf("%s", mensaje);
			scanf("%f", &auxiliarNumero);
			if(auxiliarNumero >= minimo && auxiliarNumero <= maximo){
				*pNumero = auxiliarNumero;
				retorno = 0;
			}else{
				printf("%s", mensajeError);
			}
	}
	return retorno;
}

