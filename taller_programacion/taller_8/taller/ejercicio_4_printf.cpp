#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 10, resultado = 0;
	int vector_A[10];
	int vector_B[10];
	
	for (int i = 0; i < cantidad; i++){
		vector_A[i] = i;
		resultado = pow(vector_A[i], 2);
		vector_B[i] = resultado;
		
		printf("Vector A: %d => Vector B: %d \n", vector_A[i], vector_B[i]);
	}
	
	return 0;
}

