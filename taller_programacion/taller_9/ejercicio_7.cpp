#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
7. Hacer un algoritmo que llene una matriz de `6*8` y que almacene toda la matriz en un vector. Imprimir el vector resultante. 
*/

int main(){
	system("color 30");
	
	int filas = 2, columnas = 2;
	int matriz[2][2];
	int datos[2*2];
	
	cout << "Ingrese los valores a la matriz: \n\n";
	int i = 0;
	for (int fila = 0; fila < filas; fila++){
		for (int columna = 0; columna < columnas; columna++){
			cout << "Posición ["<<fila<<"]["<< columna << "]: ";
			cin >> matriz[fila][columna];
			datos[i] = matriz[fila][columna];
			i++;
		}
	}
	
	i = 0;
	cout << "\nLos datos del vector son: \n";
	for (int fila = 0; fila < filas; fila++){
		for (int columna = 0; columna < columnas; columna++){
			cout << datos[i] << " - "; 
			i++;
		}
	}
	
	return 0;
}
