#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
7. Calcular e imprimir la tabla de multiplicar de un número cualquiera.
Imprimir el multiplicando, el multiplicador y el producto.
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	int tabla;
	printf("Ingrese el numero de la tabla a multiplicar: ");
	scanf("%d", &tabla);
	
	int i = 1;
	while (i <= 10){
		printf("\n%d*%d = %d", tabla, i, (tabla*i) );
		i++;
	}
	
	return 0;
}

