#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
1. Hacer un algoritmo que almacene numeros en una matriz de `5*6`. Imprimir la suma de los números almacenados en la matriz.
*/

int main(){
	system("color 30");
	
	int filas = 2, columnas = 2;
	int matriz[2][2];
	int suma = 0;
	
	printf("Ingrese los valores a la matriz: \n\n");
	for (int fila = 0; fila < filas; fila++){
		for (int columna = 0; columna < columnas; columna++){
			printf("Posición [%d][%d]: ", fila, columna);
			scanf("%d", &matriz[fila][columna]);
			suma += matriz[fila][columna];
		}
	}
	
	printf("\nLa suma de los números almacenados en la matriz es de: %d", suma);
	
	return 0;
}
