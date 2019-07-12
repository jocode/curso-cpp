#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5;
	int vector_A[5], vector_B[5], vector_C[5];
	
	int i = 0;
	
	cout << "Ingrese los valores del vector A\n";
	do {
		cin >> vector_A[i];
		i++;
	} while (i < cantidad);
	
	cout << "\nIngrese los valores del vector B\n";
	i = 0;
	do {
		cin >> vector_B[i];
		i++;
	} while (i < cantidad);
	
	i = 0;
	cout << "\nLa suma de cada una de los elementos del vector A con el vector B es: \n";
	do {
		vector_C[i] = vector_A[i] + vector_B[i];
		cout << vector_A[i] << " + " << vector_B[i] << " = " << vector_C[i] << endl;
		i++;
	} while (i < cantidad);
	
	i = 0;
	cout << "\nLos valores del vector C son: \n";
	do {
		cout << vector_C[i] << endl;
		i++;
	} while (i < cantidad);
	
	return 0;
}

