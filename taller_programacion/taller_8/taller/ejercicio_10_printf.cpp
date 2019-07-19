#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	int cantidad = 5;
	int vector_A[5], vector_B[5], vector_C[5];
	
	int i = 0;
	printf("Ingrese los elementos del vector A: \n");
	do {
		scanf("%d", &vector_A[i]);
		i++;
	} while(i < cantidad);
	
	i = 0;
	printf("\nIngrese los elementos del vector B: \n");
	do {
		scanf("%d", &vector_B[i]);
		i++;
	} while(i < cantidad);
	
	i = 0;
	do {
		vector_C[i] = vector_A[i] * vector_A[cantidad-i-1];
		printf(" - %d * %d = %d\n", vector_A[i], vector_B[cantidad-i-1], vector_C[i]);
		i++;
	} while(i < cantidad);
	
	return 0;
}

