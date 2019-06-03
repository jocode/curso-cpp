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
		printf("Ingrese el %d numero: ", i);
		scanf("%f", &numero);
		
		printf("La tercera es: %.2f \nLa cuarta es: %.2f \n\n", pow(numero, 3), pow(numero, 4) );
		i++;
	}
	
	return 0;
}

