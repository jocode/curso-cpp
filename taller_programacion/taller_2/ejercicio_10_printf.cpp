#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
10. Calcular el total que una persona debe pagar en una llantera, si el precio
de cada llanta es de $800 si se compran menos de 5 y de
$700 si se compran 5 o más
*/
int main(int argc, char *argv[]) {
	system("color 30");
	
	float cantidad, total_pagar;
	
	printf("Ingrese la cantidad de llantas a comprar: ");
	scanf("%f", &cantidad);
	
	if (cantidad < 5){
		total_pagar = 800 * cantidad;
	} else {
		total_pagar = 700 * cantidad;
	}
	
	printf("\nEl Total a pagar por las %.0f llantas es de: $%.2f", cantidad, total_pagar);
	
	return 0;
}

