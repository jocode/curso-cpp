#include <iostream>
#include <stdlib.h>
using namespace std;

/**
4. Leer 20 numeros e imprimir cuantos con positivos, cuantos negativos y cuantos neutros
*/
int main(int argc, char *argv[]) {
	system("color 30");
	int positivos = 0, negativos = 0, neutros = 0;
	float numero;
	
	int i = 1;
	while (i <= 20){
		cout << "Ingrese el " << i << " numero: ";
		cin >> numero;
		
		if (numero > 0){
			positivos++;
		} else if (numero == 0){
			neutros++;
		} else {
			negativos++;
		}
		i++;
	}
	
	cout << "\nPositivos: " << positivos;
	cout << "\nNegativos: " << negativos;
	cout << "\nNeutros: " << neutros;
	
	return 0;
}

