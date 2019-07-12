#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	srand(98);
	
	int cantidad = 300, negativos = 0, positivos = 0, neutros = 0, suma_negativos = 0, suma_positivos = 0;
	int datos[300];
	int aleatorio;
	
	for (int i = 0; i < cantidad; i++){
		aleatorio = rand() % 10 * pow(-1, i);
		datos[i] = aleatorio; // Numero aleatorio del 0 al 9
		//cout << " * " << aleatorio << endl;
		
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
	
	printf("\nLa cantidad de números positivos es: %d y la suma de ellos es: %d", positivos, suma_positivos);
	printf("\nLa cantidad de números negativos es: %d y la suma de ellos es de: %d", negativos, suma_negativos);
	printf("\nLa cantidad de números neutros es: %d", neutros);
	
	return 0;
}

