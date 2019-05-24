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
		printf("Ingrese el numero %d: ", i);
		scanf("%f", &numero);
		
		if ( numero > 0){
			printf("%.2f es positivo.\n\n", numero);
		}
	}
	
	return 0;
}

