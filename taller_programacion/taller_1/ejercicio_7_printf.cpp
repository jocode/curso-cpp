#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
* 7. Dada una cantidad en pesos, obtener la equivalencia en dolares, asumiendo que la unidad cambiaría es un dato desconocido
*/
float pesos_per_dolares, pesos, conversion;

int main(int argc, char *argv[]) {
	system("color 02");
	
	printf("\nIngrese la cantidad de pesos colombianos a convertir: $ ");
	scanf("%f", &pesos);
	printf("Ingrese el precio del dolar en pesos colombianos: ");
	scanf("%f", &pesos_per_dolares);
	
	conversion = pesos/pesos_per_dolares;
	
	printf("\nLos $%.2f pesos equivalen a USD %.2f dolares", pesos, conversion);
	
	return 0;
}

