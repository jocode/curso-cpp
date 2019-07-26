#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
9. Hacer un algoritmo que llene una matriz de `5*6` y que imprima cuántos de los números son 
ceros, cuántos son positivos y cuantos son negativos.
*/

int main(){
	system("color 30");
	
	int filas = 2, columnas = 2;
	int matriz[2][2];
	int ceros = 0, positivos = 0, negativos = 0;
	
	cout << "Ingrese los valores a la matriz: \n\n";
	for (int fila = 0; fila < filas; fila++){
		for (int columna = 0; columna < columnas; columna++){
			cout << "Posición ["<<fila<<"]["<< columna << "]: ";
			cin >> matriz[fila][columna];
			
			if ( matriz[fila][columna] == 0 ){
				ceros++;
			} else if ( matriz[fila][columna] < 0 ){
				negativos++;
			} else {
				positivos++;
			}
		}
	}
	
	cout << "\nHay "<< ceros <<" ceros.";
	cout << "\nHay "<< negativos <<" numeros negativos.";
	cout << "\nHay "<< positivos <<" numeros positivos.";
	
	return 0;
}
