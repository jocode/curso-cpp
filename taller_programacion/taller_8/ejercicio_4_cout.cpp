#include <iostream>
#include <stdlib.h>
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
		
		cout << "Vector A: " << vector_A[i] << " => Vector B: " << vector_B[i] << endl;
	}
	
	return 0;
}

