/*
 * UTN_calculos.c
 *
 *  Created on: 16 abr. 2022
 *      Author: claudia
 */
#include "utn.h"
#include "utn_calculos.h"
#include <stdio.h>
#include <stdlib.h>

float calcularPrecioConDescuento(float numero, int porcentajeDescuento){
	float numeroConDescuento;
	numeroConDescuento = numero - ((numero * porcentajeDescuento)/100);

	return numeroConDescuento;
}

float calcularPrecioConInteres(float numero, int porcentajeDescuento){
	float numeroConInteres;
	numeroConInteres = numero + ((numero * porcentajeDescuento)/100);
	return numeroConInteres;
}

float calcularPrecioConBitcoin(float numero, int equivalenciaPesosBitcoin){
	float resultadoBitcoin;
	resultadoBitcoin = numero /equivalenciaPesosBitcoin;

	return resultadoBitcoin;
}

float calcularPrecioPorKilometro(float numero, int kilometro){
	float resultado;
	resultado = numero / kilometro;

	return resultado;
}

float calcularDiferenciaDePrecio(float numero1, float numero2){
	float diferenciaPrecio;
	diferenciaPrecio = numero1 - numero2;

	return diferenciaPrecio;
}
