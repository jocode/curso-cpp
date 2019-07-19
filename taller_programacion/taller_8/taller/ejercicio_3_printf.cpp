#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5, mayor = 0, posicion_mayor = 0;
	int datos[5];
	
	int i = 0;
	printf("Ingrese los valores del vector: \n");
	while (i < cantidad){
		
		scanf("%d", &datos[i]);
		
		if (i == 0)
			mayor = datos[i];
		
		if (datos[i] >= mayor){
			mayor = datos[i];
			posicion_mayor = i;
		}
		
		i++;
	}
	
	printf("\nEl número mayor es %d  y la posición es: %d", datos[posicion_mayor], posicion_mayor);
	
	return 0;
}

