#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
* 10. Calcular el numero de pulsaciones que una persona debe tener por cada 10 segundos de ejercicio, si la formula es:
* num_pulsaciones = (220 - edad)/10
*/

int edad = 0;
float num_pulsaciones = 0, segundos = 10.0;

int main(int argc, char *argv[]) {
	system("color 03");
	
	printf("Hola, vamos a calcular el número de pulsaciones por cada 10seg de ejercicio.\n");
	printf("Ingrese su edad: ");
	scanf("%i", &edad);
	
	num_pulsaciones = (220 - edad)/segundos;
	
	printf("\nSu número de pulsaciones es de %.2f cada %.2f segundos", num_pulsaciones, segundos);
	
	return 0;
}

