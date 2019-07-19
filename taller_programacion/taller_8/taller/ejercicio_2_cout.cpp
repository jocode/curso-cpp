#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int cantidad = 5;
	int vector_A[5], vector_B[5], vector_C[5];
	
	int i = 0;
	
	cout << "Ingrese los valores del vector A\n";
	while (i < cantidad){
		cin >> vector_A[i];
		i++;
	}
	
	cout << "\nIngrese los valores del vector B\n";
	i = 0;
	while (i < cantidad){
		cin >> vector_B[i];
		i++;
	}
	
	i = 0;
	cout << "\nLa suma de cada una de los elementos del vector A con el vector B es: \n";
	while (i < cantidad){
		vector_C[i] = vector_A[i] + vector_B[i];
		cout << vector_A[i] << " + " << vector_B[i] << " = " << vector_C[i] << endl;
		i++;
	}
	
	i = 0;
	cout << "\nLos valores del vector C son: \n";
	while (i < cantidad){
		cout << vector_C[i] << endl;
		i++;
	}

	
	
	return 0;
}

