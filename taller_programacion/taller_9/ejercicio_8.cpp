#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
8. Hacer un algoritmo que llene una matriz de `8*8` que almacene la suma de los renglones y la suma de las columnas en un vector. 
Imprimir el vector resultante.
*/

int main(){
	system("color 30");
	
	int filas = 2, columnas = 2;
	int matriz[2][2];
	int suma_filas[2], suma_columnas[2];
	int resultante[2*2];
	int suma = 0;

	cout << "Ingrese los valores a la matriz: \n\n";
	for (int fila = 0; fila < filas; fila++){
		suma = 0;
		for (int columna = 0; columna < columnas; columna++){
			cout << "Posición ["<<fila<<"]["<< columna << "]: ";
			cin >> matriz[fila][columna];
			
			suma += matriz[fila][columna];
		}
		suma_filas[fila] = suma;
	}
	
	for (int columna = 0; columna < columnas; columna++){
		suma = 0;
		for (int fila = 0; fila < filas; fila++){
			suma += matriz[fila][columna];
		}
		suma_columnas[columna] = suma;
	}
	
	// Se agrega las suma de filas al vector 
	for (int fila = 0; fila < filas; fila++){
		resultante[fila] = suma_filas[fila];
	}
	// Se agrega la suma de las columnas al vector
	for (int columna = 0; columna < columnas; columna++){
		resultante[filas+columna] = suma_columnas[columna];
	}
	
	cout << "\nEl vector resultante es: ";
	for (int i = 0; i < filas*columnas; i++){
		cout << resultante[i] << " - ";
	}
	
	return 0;
}
