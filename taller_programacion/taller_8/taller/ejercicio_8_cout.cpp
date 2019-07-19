#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5;
	int datos[5];
	bool ordenado = true;
	
	cout << "Ingrese los valores del vector: \n";
	int i = 0;
	do {
		cin >> datos[i];
		
		if (i>0){
			if (datos[i-1] > datos[i]){
				ordenado = false;
			}
		}
		i++;
	} while(i < cantidad);
	
	if (ordenado){
		cout << "\nSI. El vector está ordenado Ascendentemente";
	} else {
		cout << "\nN0. El vector no está ordenado";
	}
	
	return 0;
}

