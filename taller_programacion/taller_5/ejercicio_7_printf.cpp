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
	
	for (int i = 1; i <= 10; i++){
		printf("\n%d*%d = %d", tabla, i, (tabla*i) );
	}
	
	return 0;
}

