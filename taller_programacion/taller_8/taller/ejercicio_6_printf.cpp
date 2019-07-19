#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad = 5;
	int vector_A[5], vector_B[5];
	
	printf("Ingrese los elementos del vector: \n");
	
	for (int i = 0; i < cantidad; i++){
		scanf("%d", &vector_A[i]);
		vector_B[ (cantidad-i-1) ] = vector_A[i];
	}
	
	printf("\nElementos dle vector B \n");
	for (int i = 0; i < cantidad; i++){
		printf("%d \n", vector_B[i]);
	}
	
	return 0;
}
