/*
 * UTN.H
 *
 *  Created on: 16 abr. 2022
 *      Author: claudia
 */

#ifndef UTN_H_
#define UTN_H_

/**
 * @brief La funci�n valida que el espacio de memoria del n�mero flotante, del mensaje de error y del mensaje (punteros) est�n vac�os para que no devuelva basura.
 * Tambi�n valida que el n�mero m�ximo sea mayor o igual que el m�nimo.
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
 * @brief La funci�n valida que el espacio de memoria del n�mero entero, del mensaje de error y del mensaje (punteros) est�n vac�os para que no devuelva basura.
 * Tambi�n valida que el n�mero m�ximo sea mayor o igual que el m�nimo.
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
