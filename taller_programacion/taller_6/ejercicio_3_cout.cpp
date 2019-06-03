#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/*
3. Leer 10 números e imprimir solamente los positivos
*/
int main(int argc, char *argv[]) {
	
	float numero;
	
	int i = 1;
	while (i <= 10){
		cout << "Ingrese el numero " << i << ": ";
		cin >> numero;
		
		if ( numero > 0){
			cout << numero << " es positivo." << endl << endl;
		}
		i++;
	}
	
	return 0;
}

