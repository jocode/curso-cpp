#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5, mayor = 0, posicion_mayor = 0;
	int datos[5];
	
	int i = 0;
	cout << "Ingrese los valores del vector: \n";
	while (i < cantidad){
		
		cin >> datos[i];
		
		if (i == 0)
			mayor = datos[i];
		
		if (datos[i] >= mayor){
			mayor = datos[i];
			posicion_mayor = i;
		}
		
		i++;
	}
	
	cout << "\nEl número mayor es " << datos[posicion_mayor] << " y la posición es: " << posicion_mayor;
	
	return 0;
}

