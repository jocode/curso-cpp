#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
5. Hacer un algoritmo que llene una matriz de `5*5` y hacer que almacene la diagonal principal en un vector. 
Imprimir el vector resultante.
*/

int main(){
	system("color 30");
	
	int filas = 2, columnas = 2;
	int matriz[2][2];
	int diagonal[2]; // La matriz debe ser cuadrada
	
	printf("Ingrese los valores a la matriz: \n\n");
	for (int fila = 0; fila < filas; fila++){
		for (int columna = 0; columna < columnas; columna++){
			printf("Posición [%d][%d]: ", fila, columna);
			scanf("%d", &matriz[fila][columna]);
			
			if (fila == columna)
				diagonal[fila] = matriz[fila][columna];
			
		}
	}
	
	printf("\nLa diagonal principal del vector es: \n [");
	for (int i = 0; i < filas; i++){
		printf(" %d ", diagonal[i]);
	}
	printf("]");
	
	return 0;
}
