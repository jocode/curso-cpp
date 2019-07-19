#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5, negativos = 0, positivos = 0, neutros = 0, suma_negativos = 0, suma_positivos = 0;
	int datos[5];
	
	printf("Ingrese los valores del vector: \n");
	for (int i = 0; i < cantidad; i++){
		
		scanf("%d", &datos[i]); 
		
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

