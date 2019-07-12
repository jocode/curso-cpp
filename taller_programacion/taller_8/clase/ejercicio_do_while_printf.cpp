#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5;
	int vector_A[5], vector_B[5], vector_C[5];
	
	int i = 0;
	
	printf("Ingrese los valores del vector A\n");
	do {
		scanf("%d", &vector_A[i]);
		i++;
	} while (i < cantidad);
	
	printf("\nIngrese los valores del vector B\n");
	i = 0;
	do {
		scanf("%d", &vector_B[i]);
		i++;
	} while (i < cantidad);
	
	i = 0;
	printf("\nLa suma de cada una de los elementos del vector A con el vector B es: \n");
	do {
		vector_C[i] = vector_A[i] + vector_B[i];
		printf("%d + %d = %d \n",vector_A[i], vector_B[i], vector_C[i]);
		i++;
	} while (i < cantidad);
	
	i = 0;
	printf("\nLos valores del vector C son: \n");
	do {
		printf("%d\n", vector_C[i]);
		i++;
	} while (i < cantidad);
	
	return 0;
}

