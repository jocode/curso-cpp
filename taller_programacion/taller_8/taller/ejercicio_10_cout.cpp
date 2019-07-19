#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	int cantidad = 5;
	int vector_A[5], vector_B[5], vector_C[5];
	
	int i = 0;
	cout << "Ingrese los elementos del vector A: \n";
	do {
		cin >> vector_A[i];
		i++;
	} while(i < cantidad);
	
	i = 0;
	cout << "\nIngrese los elementos del vector B: \n";
	do {
		cin >> vector_B[i];
		i++;
	} while(i < cantidad);
	
	i = 0;
	do {
		vector_C[i] = vector_A[i] * vector_A[cantidad-i-1];
		cout << " - " << vector_A[i] << " * " << vector_B[cantidad-i-1] << " = " << vector_C[i] << endl;
		i++;
	} while(i < cantidad);
	
	return 0;
}

