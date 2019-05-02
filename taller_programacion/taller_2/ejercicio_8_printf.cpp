#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
8. Hacer un algoritmo que calcule el total a pagar por la compra de camisas.
Si se compran tres camisas o más se aplica un descuento del 20% sobre el total
de la compra y si son menos de 3 camisas un 10%
*/
int main(int argc, char *argv[]) {
	system("color 30");
	
	float cantidad, precio, total_pagar;
	
	printf("Cuántas camisas desea comprar: ");
	scanf("%f", &cantidad);
	printf("Ingrese el precio de una camisa: ");
	scanf("%f", &precio);
	
	precio *= cantidad;
	
	if (cantidad < 3){
		total_pagar = precio * 0.9;
	} else {
		total_pagar = precio * 0.8;
	}
	
	printf("\nEl total a pagar por las camisas es de: $%.2f", total_pagar);
	
	return 0;
}

