#include <iostream>
#include <stdio.h>
#include <cmath>
#include <stdlib.h>
using namespace std;

/**
2. Leer 10 numero y obtener su cubo y su cuarta
*/
int main(int argc, char *argv[]) {
	
	float numero;
	
	int i = 1; 
	while (i <= 10){
		cout << "Ingrese el " << i << " numero: ";
		cin >> numero;
		
		cout << "La tercera es: " << pow(numero, 3) << "\nLa cuarta es: "  << pow(numero, 4) << endl << endl;
		i++;
	}
	
	return 0;
}

