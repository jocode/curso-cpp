#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
3. Hacer un algoritmo que llene una matriz de `7*7`. Calcular la suma de cada renglón y almacenarla en un vector, 
la suma de cada columna y almacenarla en otro vector.
*/

int main(){
	system("color 30");
	
	int filas = 2, columnas = 2;
	int matriz[2][2];
	int suma_filas[2], suma_columnas[2];
	int sum_fila = 0;
	
	printf("Ingrese los valores a la matriz: \n\n");
	for (int fila = 0; fila < filas; fila++){
		sum_fila = 0;
		for (int columna = 0; columna < columnas; columna++){
			printf("Posición [%d][%d]: ", fila, columna);
			scanf("%d", &matriz[fila][columna]);
			
			sum_fila += matriz[fila][columna];
			suma_columnas[columna] += matriz[fila][columna];
		}
		suma_filas[fila] = sum_fila;
	}
	
	
	printf("\nLa suma de cada fila es: \n");
	for (int i = 0; i < filas; i++){
		printf("[%d] = %d\n", i, suma_filas[i]);
	}
	
	printf("\nLa suma de cada columna es: \n");
	for (int i = 0; i < columnas; i++){
		printf("[%d] = %d\n", i, suma_columnas[i]);
	}
	
	return 0;
}
