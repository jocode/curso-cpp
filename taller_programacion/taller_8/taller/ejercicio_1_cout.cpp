#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5, cant_mayores_avg = 0;
	int datos[5];
	int promedio = 0;
	
	int i = 0;
	cout << "Ingrese los valores del vector: \n";
	while (i < cantidad){
		cin >> datos[i];
		promedio += datos[i];
		i++;
	}
	
	promedio /= cantidad;
	
	cout << "\nEl promedio es: " << promedio << endl;
	// Cantidad de numeros mayores que el promedio
	cout << "\nLista de números mayores que el promedio.\n";
	i = 0;
	while (i < cantidad){
		if (datos[i] > promedio){
			cout << " * " << datos[i] << endl;
			cant_mayores_avg++;
		}
		i++;
	}
	
	cout << "\nLa cantidad de números mayores que el promedio es: " << cant_mayores_avg;
	
	return 0;
}

