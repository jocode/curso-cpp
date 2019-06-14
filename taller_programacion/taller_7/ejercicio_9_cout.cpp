#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad;
	float numero, mayor;
	
	cout << "Ingrese la cantidad de números: ";
	cin >> cantidad;
	
	int i = 1;
	do {
		cout << "Ingrese el " << i << " número: ";
		cin >> numero;
		
		if (i == 1)
			mayor = numero;
		
		if (numero >= mayor)
			mayor = numero;
		
		i++;
	} while(i <= cantidad);
	
	cout << "\nEl número mayor de la cantidad " << cantidad << " de números dados es: " << mayor;
	
	return 0;
}

