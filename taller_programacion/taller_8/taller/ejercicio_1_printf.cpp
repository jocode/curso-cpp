#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5, cant_mayores_avg = 0;
	int datos[5];
	int promedio = 0;
	
	int i = 0;
	printf("Ingrese los valores del vector: \n");
	while (i < cantidad){
		scanf("%d", &datos[i]);
		promedio += datos[i];
		i++;
	}
	
	promedio /= cantidad;
	
	printf("\nEl promedio es: %d\n", promedio);
	
	// Cantidad de numeros mayores que el promedio
	printf("\nLista de números mayores que el promedio.\n");
	i = 0;
	while (i < cantidad){
		if (datos[i] > promedio){
			printf(" * %d\n", datos[i]);
			cant_mayores_avg++;
		}
		i++;
	}
	
	printf("\nLa cantidad de números mayores que el promedio es: %d", cant_mayores_avg);
	
	return 0;
}

