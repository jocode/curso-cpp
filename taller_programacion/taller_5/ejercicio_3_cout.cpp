#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/*
3. Leer 10 números e imprimir solamente los positivos
*/
int main(int argc, char *argv[]) {
	
	float numero;
	
	for (int i = 1; i <= 10; i++){
		cout << "Ingrese el numero " << i << ": ";
		cin >> numero;
		
		if ( numero > 0){
			cout << numero << " es positivo." << endl << endl;
		}
	}
	
	return 0;
}

