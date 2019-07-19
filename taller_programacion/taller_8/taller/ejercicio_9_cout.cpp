#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad = 5, numero_buscar, posicion;
	int datos[5];
	int encontrado = false;
	
	cout << "Ingrese los elementos del vector: \n";
	int i = 0;
	do {
		cin >> datos[i];
		i++;
	} while(i<cantidad);
	
	cout << "\nIngrese el número a buscar: \n";
	cin >> numero_buscar;
	i = 0;
	do {
		if (numero_buscar==datos[i]){
			encontrado = true;
			posicion = i;
			break;
		}
		i++;
	} while(i<cantidad);
	
	if (encontrado){
		cout << "\nEl número se encuentra en el vector en la posición: " << posicion;
	} else {
		cout << "\nEl número " << numero_buscar << " no se encuentra en el vector";
	}
	
	return 0;
}

