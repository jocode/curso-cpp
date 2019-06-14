#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad;
	float numero, mayor;
	
	printf("Ingrese la cantidad de números: ");
	scanf("%d", &cantidad);
	
	int i = 1;
	do {
		printf("Ingrese el %d número: ", i);
		scanf("%f", &numero);
		
		if (i == 1)
			mayor = numero;
		
		if (numero >= mayor)
			mayor = numero;
		
		i++;
	} while(i <= cantidad);
	
	printf("\nEl número mayor de la cantidad %d de números dados es: %.2f", cantidad, mayor);
	
	return 0;
}

