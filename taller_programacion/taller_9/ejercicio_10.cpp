#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
10. Diseñe un algoritmo que escriba el número de la hilera cuya suma sea mayor que las demás hileras.
Suponga que todas las hileras suman diferente cantidad.
*/

int main(){
	system("color 30");
	
	int filas = 2, columnas = 2;
	int matriz[2][2];
	int suma_filas[2];
	int suma = 0, mayor = 0, posicion = 0;
	
	cout << "Ingrese los valores a la matriz: \n\n";
	for (int fila = 0; fila < filas; fila++){
		suma = 0;
		for (int columna = 0; columna < columnas; columna++){
			cout << "Posición ["<<fila<<"]["<< columna << "]: ";
			cin >> matriz[fila][columna];
			
			suma += matriz[fila][columna];
		}
		suma_filas[fila] = suma;
		
		if (fila == 0)
			mayor = suma;
		
		if ( suma >= mayor){
			mayor = suma;
			posicion = fila;
		}
	}

	cout << "\nLa hilera (Fila) que tiene la suma más alta es la de la posición  [" << posicion << "]";
	cout << "\nLa suma de ella es de: " << suma_filas[posicion];
	
	return 0;
}
