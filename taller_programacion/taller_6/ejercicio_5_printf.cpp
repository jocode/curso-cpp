#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
using namespace std;

/**
5. Leer 15 numeros negativos y convertirlos a positivos e imprimir dichos numeros
*/
int main(int argc, char *argv[]) {
	system("color 30");
	float numero;
	
	int i = 1;
	while (i<=15){
		printf("\nIngrese el %d numero negativo: ", i);
		cin >> numero;
		
		while (numero >= 0){
			printf("\nEl número no es negativo. Ingreselo nuevamente\n");
			printf("Ingrese el %d numero negativo: ", i);
			scanf("%f", &numero);
		}
		
		printf("\nEl numero %.2f convetido a positivo es: %.2f \n\n", numero, abs(numero));
		i++;
	}
	
	return 0;
}

