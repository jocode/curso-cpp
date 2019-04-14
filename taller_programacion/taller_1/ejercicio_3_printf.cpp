#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
3. Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuanto debera
pagar finalmente por su compra
*/

float descuento, precio, total;
const float PER_DESCUENTO = 15;

int main(int argc, char *argv[]) {
	system("color 02");
	
	printf("Ingrese el precio de la compra: ");
	scanf("%f", &precio);
	
	descuento = precio * (PER_DESCUENTO/100);
	
	printf("\nEl precio total de la compra es de: $%.2f", precio);
	printf("\nEl descuento es de: $%.2f", descuento);
	printf("\nEl total a pagar es de: $%.2f", (precio-descuento));
	
	return 0;
}

