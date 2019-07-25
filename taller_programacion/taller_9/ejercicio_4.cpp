#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
4. Hacer un algoritmo de llene una matriz de `20*20`. 
Sumar las columnas e imprimir que columna tuvo la máxima suma y la suma de esa columna.
*/

int main(){
	system("color 30");
	
	int filas = 2, columnas = 2;
	int matriz[2][2];
	int suma_columnas[2], col_posicion = 0, suma_mayor = 0;
	
	printf("Ingrese los valores a la matriz: \n\n");
	for (int fila = 0; fila < filas; fila++){
		for (int columna = 0; columna < columnas; columna++){
			printf("Posición [%d][%d]: ", fila, columna);
			scanf("%d", &matriz[fila][columna]);
			suma_columnas[columna] += matriz[fila][columna];
		}
	}
	
	for (int i = 0; i < columnas; i++){
		if (i == 0)
			suma_mayor = suma_columnas[i];
		
		if (suma_columnas[i]  >= suma_mayor){
			suma_mayor = suma_columnas[i];
			col_posicion = i;
		}
	}
	
	printf("\nLa posición de la columna que tuvo la máxima suma es: [%d]", col_posicion);
	printf("\nLa suma de los valores es de: %d", suma_mayor);
	
	return 0;
}
