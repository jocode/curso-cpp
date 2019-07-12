#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5;
	int vector_A[5], vector_B[5], vector_C[5];
	
	cout << "Ingrese los valores del vector A\n";
	for (int i = 0; i < cantidad; i++) {
		cin >> vector_A[i];
	}
	
	cout << "\nIngrese los valores del vector B\n";
	for (int i = 0; i < cantidad; i++) {
		cin >> vector_B[i];
	} 
	
	cout << "\nLa suma de cada una de los elementos del vector A con el vector B es: \n";
	for (int i = 0; i < cantidad; i++) {
		vector_C[i] = vector_A[i] + vector_B[i];
		cout << vector_A[i] << " + " << vector_B[i] << " = " << vector_C[i] << endl;
	}
	
	cout << "\nLos valores del vector C son: \n";
	for (int i = 0; i < cantidad; i++) {
		cout << vector_C[i] << endl;
	} 
	
	return 0;
}

