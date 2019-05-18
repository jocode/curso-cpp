#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
4. Una fruteria ofrece las manzana con descuento según la siguiente tabla:
Num Kilos 			% Descuento
0 - 2				0%
2.01 - 5 			10%
5.01 - 10 			15%
10.01				20%
*/

int main(int argc, char *argv[]) {
	system("color 30");
	float kilos, precio_kilo, total;
	
	printf("Ingrese la cantidad de Kilos comprados: ");
	scanf("%f", &kilos);
	printf("Ingrese el precio del Kilo de Manzana: ");
	scanf("%f", &precio_kilo);
	cout << endl;
	
	if (kilos <= 2){
		printf("No tiene Descuento.");
		total = kilos * precio_kilo;
	} else if (kilos > 2 && kilos <= 5){
		printf("Tiene descuento del 10%%");
		total = kilos * precio_kilo * 0.9;
	} else if (kilos > 5 && kilos <= 10){
		printf("Tiene un descuento del 15%%");
		total = kilos * precio_kilo * 0.85; 
	} else if (kilos > 10){
		printf("Tiene un descuesto del 20%%");
		total = kilos * precio_kilo * 0.8;
	}
	
	printf("\nEl total a pagar es de $%.2f", total);
	
	return 0;
}

