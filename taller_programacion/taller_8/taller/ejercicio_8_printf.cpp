#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5;
	int datos[5];
	bool ordenado = true;
	
	printf("Ingrese los valores del vector: \n");
	int i = 0;
	do {
		scanf("%d", &datos[i]);
		
		if (i>0){
			if (datos[i-1] > datos[i]){
				ordenado = false;
			}
		}
		i++;
	} while(i < cantidad);
	
	if (ordenado){
		printf("\nSI. El vector está ordenado Ascendentemente");
	} else {
		printf("\nN0. El vector no está ordenado");
	}
	
	return 0;
}

