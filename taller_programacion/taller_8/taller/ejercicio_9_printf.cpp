#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad = 5, numero_buscar, posicion;
	int datos[5];
	int encontrado = false;
	
	printf("Ingrese los elementos del vector: \n");
	int i = 0;
	do {
		scanf("%d", &datos[i]);
		i++;
	} while(i<cantidad);
	
	printf("\nIngrese el número a buscar: \n");
	scanf("%d", &numero_buscar);
	
	i = 0;
	do {
		if (numero_buscar==datos[i]){
			encontrado = true;
			posicion = i;
			break;
		}
		i++;
	} while(i<cantidad);
	
	if (encontrado){
		printf("\nEl número se encuentra en el vector en la posición: %d", posicion);
	} else {
		printf("\nEl número %d no se encuentra en el vector", numero_buscar);
	}
	
	return 0;
}

