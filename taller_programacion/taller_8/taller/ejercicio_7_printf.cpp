#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5;
	int vector_A[5], vector_B[5];
	bool iguales = true;
	
	printf("Ingrese los valores del vector A \n");
	int i = 0;
	do {
		scanf("%d", &vector_A[i]);
		i++;
	} while (i < cantidad);
	
	printf("\nIngrese los valores del vector B \n");
	i = 0;
	do {
		scanf("%d", &vector_B[i]);
		i++;
	} while (i < cantidad);
	
	i = 0;
	do {
		if (vector_A[i] != vector_B[i]){
			iguales = false;
			break;
		}
		i++;
	} while(i < cantidad);
	
	if (iguales){
		printf("\nLos dos vectores son IGUALES");
	} else {
		printf("\nLos dos vectores son DIFERENTES");
	}
	
	return 0;
}

