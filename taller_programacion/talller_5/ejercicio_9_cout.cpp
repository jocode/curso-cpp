#include <iostream>
#include <stdlib.h>
using namespace std;

/**
9. Encontrar el mayor valor de un conjunto de n numeros dados
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad;
	float numero, mayor;
	
	cout << "Ingrese la cantidad de número a ingresar: ";
	cin >> cantidad;
	
	for (int i = 1; i <= cantidad; i++){
		cout << "Ingrese el " << i << " número: ";
		cin >> numero;
		
		if (i == 1){
			mayor = numero;
		}
		
		if (numero >= mayor){
			mayor = numero;
		}
		
	}
	
	cout << "\nEl número mayor del conjunto de números es: " << mayor;
	
	return 0;
}

