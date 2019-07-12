#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5;
	int vector_A[5], vector_B[5], vector_C[5];
	
	printf("Ingrese los valores del vector A\n");
	for (int i = 0; i < cantidad; i++) {
		scanf("%d",  &vector_A[i]);
	}
	
	printf("\nIngrese los valores del vector B\n");
	for (int i = 0; i < cantidad; i++) {
		scanf("%d",  &vector_B[i]);
	} 
	
	printf("\nLa suma de cada una de los elementos del vector A con el vector B es: \n");
	for (int i = 0; i < cantidad; i++) {
		vector_C[i] = vector_A[i] + vector_B[i];
		printf("%d + %d = %d\n", vector_A[i], vector_B[i], vector_C[i]);
	}
	
	printf("\nLos valores del vector C son: \n");
	for (int i = 0; i < cantidad; i++) {
		printf("%d\n", vector_C[i]);
	} 
	
	return 0;
}

