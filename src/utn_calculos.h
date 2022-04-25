
/*
 * UTN_calculos.h
 *
 *  Created on: 16 abr. 2022
 *      Author: claudia
 */

#ifndef UTN_CALCULOS_H_
#define UTN_CALCULOS_H_

/**
 * @brief La función calcula el descuento de un número según un porcentaje.
 *
 * @param numero
 * @param porcentajeDescuento
 * @return
 */
float calcularPrecioConDescuento(float numero, int porcentajeDescuento);
/**
 * @brief La función calcula el interés de un número según un porcentaje.
 *
 * @param numero
 * @param porcentajeDescuento
 * @return
 */
float calcularPrecioConInteres(float numero, int porcentajeDescuento);
/**
 * @brief La función calcula la equivalencia de Bitcoins según la cantidad de pesos Argentinos.
 *
 * @param numero
 * @param equivalenciaPesosBitcoin
 * @return
 */
float calcularPrecioConBitcoin(float numero, int equivalenciaPesosBitcoin);
/**
 * @brief La función calcula el precio por kilometro.
 *
 * @param numero
 * @param kilometro
 * @return
 */
float calcularPrecioPorKilometro(float numero, int kilometro);
/**
 * @brief La función calcula la diferencia entre dos números.
 *
 * @param numero1
 * @param numero2
 * @return
 */
float calcularDiferenciaDePrecio(float numero1, float numero2);

int determinarNumeroParOImpar(int numero);

#endif /* UTN_CALCULOS_H_ */
