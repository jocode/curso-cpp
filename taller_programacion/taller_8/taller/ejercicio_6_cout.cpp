#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad = 5;
	int vector_A[5], vector_B[5];
	
	cout << "Ingrese los elementos del vector: \n";
	
	for (int i = 0; i < cantidad; i++){
		cin >> vector_A[i];
		vector_B[ (cantidad-i-1) ] = vector_A[i];
	}
	
	cout << "\nElementos dle vector B\n";
	for (int i = 0; i < cantidad; i++){
		cout << vector_B[i] << endl;
	}
	
	return 0;
}

