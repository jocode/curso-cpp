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
	
	int i = 1;
	while (i <= 10){
		cout << tabla << "*" << i << " = " << (tabla*i) << endl;
		i++;
	}
	
	return 0;
}

