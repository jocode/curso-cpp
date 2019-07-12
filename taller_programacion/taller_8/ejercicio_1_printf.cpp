#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 20, cant_mayores_avg = 0;
	float datos[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	float promedio = 0;
	
	int i = 0;
	while (i < cantidad){
		promedio += datos[i];
		i++;
	}
	
	promedio /= cantidad;
	
	printf("\nEl promedio es: %.2f", promedio);
	// Cantidad de numeros mayores que el promedio
	printf("\nLista de números mayores que el promedio.\n");
	i = 0;
	while (i <= cantidad){
		if (datos[i] > promedio){
			printf(" * %.2f \n", datos[i]);;
			cant_mayores_avg++;
		}
		i++;
	}
	
	
	
	printf("\nLa cantidad de números mayores que el promedio es: %d", cant_mayores_avg);
	
	return 0;
}

