/*
 * UTN.H
 *
 *  Created on: 16 abr. 2022
 *      Author: claudia
 */

#ifndef UTN_H_
#define UTN_H_

/**
 * @brief La función valida que el espacio de memoria del número flotante, del mensaje de error y del mensaje (punteros) estén vacíos para que no devuelva basura.
 * También valida que el número máximo sea mayor o igual que el mínimo.
 *
 * @param pNumero
 * @param mensaje
 * @param mensajeError
 * @param maximo
 * @param minimo
 * @return
 */
float UTN_getFloat(float * pNumero, char * mensaje, char * mensajeError, int maximo, int minimo);
/**
 * @brief La función valida que el espacio de memoria del número entero, del mensaje de error y del mensaje (punteros) estén vacíos para que no devuelva basura.
 * También valida que el número máximo sea mayor o igual que el mínimo.
 *
 * @param pNumero
 * @param mensaje
 * @param mensajeError
 * @param maximo
 * @param minimo
 * @return
 */
int UTN_getInt(int * pNumero, char * mensaje, char * mensajeError, int maximo, int minimo);

#endif /* UTN_H_ */
