#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	float inversion, ganancia, interes = 0;
	
	printf("Ingrese el monto a invertir: ");
	scanf("%f", &inversion);
	
	ganancia = inversion * 0.02;
	
	int i = 1;
	do {
		interes = ganancia*0.02;
		ganancia += interes;
		i++;
	} while(i <= 12);
	
	printf("\nLa ganancia obtenida en 1 año es de: %.2f", ganancia);
	printf("\nLa cantidad de dinero de la persona en 1 año es de: %.2f", (ganancia+inversion));
	
	return 0;
}

