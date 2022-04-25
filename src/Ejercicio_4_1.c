/*
1. Se desea hacer un programa que permita manejar una caja con ingreso y egreso de dinero.
Para ello se debe hacer un men� con las siguientes opciones:
--> Saldo actual: nn <--
1) Saldo inicial: permitir� la carga del saldo inicial
2) Ingresar dinero: deber� pedirle al usuario la cantidad e incrementar el saldo
3) Egreso de dinero: deber� pedirle al usuario la cantidad y decrementar el saldo
4) Cerrar caja: informar� el saldo final y cerrar� la aplicaci�n luego de una confirmaci�n

Usar la biblioteca UTN: funciones UTN_getInt y UTN_getFloat
- No se puede ingresar/extraer dinero si no se carg� saldo inicial
- No puedo extraer m�s de lo que tengo
- El saldo inicial s�lo se puede cargar una vez
- Los importes se deben mostrar con dos decimales
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "utn_calculos.h"

int main(void) {

	setbuf(stdout, NULL);

	int opcionesDelMenu;
	int validacionDelRetorno;
	float saldoInicial;
	float ingresoDinero;
	float acumuladorIngreso;
	float acumuladorEgreso;
	float egresoDinero;
	float saldo;

	acumuladorIngreso = 0;
	acumuladorEgreso = 0;

	do{
	printf("\n1) Saldo inicial\n");
	printf("2) Ingresar dinero\n");
	printf("3) Egreso de dinero\n");
	printf("4) Cerrar caja\n");
	printf("5) Cerrar aplicaci�n\n");

	validacionDelRetorno = UTN_getInt(&opcionesDelMenu,"Ingrese la opci�n que desee:(1,2,3,4,5)\n","Error, "
				"la opci�n ingresada no es v�lida.\n",5,1);

	if(validacionDelRetorno == 0){

			switch(opcionesDelMenu){
			case 1:
				validacionDelRetorno = UTN_getFloat(&saldoInicial,"Ingrese el saldo inicial\n" ,
					"Error, la cantidad ingresada no es v�lida.\n",100000000,0.01);
						if(validacionDelRetorno == 0){
							printf("El saldo inicial es %.2f \n", saldoInicial);
						}
			break;
			do{
				case 2:
					validacionDelRetorno = UTN_getFloat(&ingresoDinero,"Ingresar dinero\n" ,
						"Error, la cantidad ingresada no es v�lida.\n",100000000,0.01);
							if(validacionDelRetorno == 0){
								acumuladorIngreso += ingresoDinero;
								printf("el ingreso es %.2f \n" , ingresoDinero);
							}
			break;
			case 3:
					validacionDelRetorno = UTN_getFloat(&egresoDinero,"Egreso de dinero\n" ,
						"Error, la cantidad ingresada no es v�lida.\n",100000000,0.01);
							if(validacionDelRetorno == 0 && saldoInicial > egresoDinero){
								acumuladorEgreso += egresoDinero;
								printf("el egreso es %.2f \n" , egresoDinero);
							}else{
								printf("no puede egresar mas dinero del que tiene");
							}
			break;
			case 4:
				saldo = saldoInicial + acumuladorIngreso - acumuladorEgreso;
				printf("el saldo final es: %.2f \n", saldo);
			break;
			case 5:
			printf("Cerrar aplicaci�n\n");
			break;
			}while(saldoInicial > 0 && opcionesDelMenu != 1);
			}
	}
	}while(opcionesDelMenu != 5);
	return 0;
	}




