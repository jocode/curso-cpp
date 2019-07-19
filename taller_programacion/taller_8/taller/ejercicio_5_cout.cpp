#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5, negativos = 0, positivos = 0, neutros = 0, suma_negativos = 0, suma_positivos = 0;
	int datos[5];
	
	cout << "Ingrese los valores del vector: \n";
	for (int i = 0; i < cantidad; i++){
		
		cin >> datos[i]; 
		
		if (datos[i] < 0){
			negativos++;
			suma_negativos+= datos[i];
		}
		if (datos[i] > 0){
			positivos++;
			suma_positivos+= datos[i];
		}
		if (datos[i] == 0){
			neutros++;
		}
	}
	
	cout << "\nLa cantidad de números positivos es: " << positivos << " y la suma de ellos es: " << suma_positivos;
	cout << "\nLa cantidad de números negativos es: " << negativos << " y la suma de ellos es de: " << suma_negativos;
	cout << "\nLa cantidad de números neutros es: " << neutros;
	
	return 0;
}

