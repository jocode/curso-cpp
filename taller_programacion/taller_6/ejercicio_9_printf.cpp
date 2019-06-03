#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
9. Encontrar el mayor valor de un conjunto de n numeros dados
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad;
	float numero, mayor;
	
	printf("Ingrese la cantidad de número a ingresar: ");
	scanf("%d", &cantidad);
	
	int i = 1;
	while ( i <= cantidad ){
		printf("Ingrese el %d número: ", i);
		scanf("%f", &numero);
		
		if (i == 1){
			mayor = numero;
		}
		
		if (numero >= mayor){
			mayor = numero;
		}
		i++;
	}
	
	printf("\nEl número mayor del conjunto de números es: %.2f", mayor);
	
	return 0;
}

