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
		printf("Ingrese el numero %d: ", i);
		scanf("%f", &numero);
		
		if ( numero > 0){
			printf("%.2f es positivo.\n\n", numero);
		}
		i++;
	}
	
	return 0;
}

