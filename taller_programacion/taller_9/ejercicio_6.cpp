#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
6. Hacer un algoritmo que llene una matriz de `10*10` y que almacene en la diagonal principal unos y en las demas posiciones ceros
*/

int main(){
	system("color 30");
	
	int filas = 10, columnas = 10;
	int matriz[10][10];
	
	cout  << "Ingrese los valores a la matriz: \n\n";
	for (int fila = 0; fila < filas; fila++){
		for (int columna = 0; columna < columnas; columna++){
			if (fila == columna)
				matriz[fila][columna] = 1;
			else 
				matriz[fila][columna] = 0;
		}
	}
	
	cout << "\nLa matriz resultante es de. \n[\n";
	for (int fila = 0; fila < filas; fila++){
		for (int columna = 0; columna < columnas; columna++){
			cout << "\t" << matriz[fila][columna];
		}
		cout << endl;
	}
	cout << "]";
	
	return 0;
}
