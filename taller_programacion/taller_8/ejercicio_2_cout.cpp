#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	srand(11); // Valor semilla para la generacion de números aleatorios. (El mismo argumento devuelve los mismos valores)
	
	int cantidad = 45, aleatorio_1 = 0, aleatorio_2 = 0;
	int vector_A[45];
	int vector_B[45];
	int vector_C[45];
	int resultado;
	
	int i = 0;
	while (i < cantidad){
		// Genero numeros aleatorios del 0 al 99
		aleatorio_1 = rand() % 100;
		// Genero numero aleatorio del 1 al 10
		aleatorio_2 = rand() % 10 + 1;

		vector_A[i] = aleatorio_1;
		vector_B[i] = aleatorio_2;
		i++;
	}
	
	i = 0;
	cout << "La suma de cada una de los elementos del vector A con el vector B es: \n";
	while (i < cantidad){
		resultado = vector_A[i] + vector_B[i];
		vector_C[i] = resultado;
		cout << vector_A[i] << " + " << vector_B[i] << " = " << vector_C[i] << endl;
		i++;
	}

	
	
	return 0;
}

