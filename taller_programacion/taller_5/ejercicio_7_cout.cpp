#include <iostream>
#include <stdlib.h>
using namespace std;

/**
7. Calcular e imprimir la tabla de multiplicar de un número cualquiera.
Imprimir el multiplicando, el multiplicador y el producto.
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	int tabla;
	cout << "Ingrese el numero de la tabla a multiplicar: ";
	cin >> tabla;
	
	for (int i = 1; i <= 10; i++){
		cout << tabla << "*" << i << " = " << (tabla*i) << endl;
	}
	
	return 0;
}

