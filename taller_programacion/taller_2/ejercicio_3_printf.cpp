#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
3. En un almacen se hace un 20% de descuento a los clientes cuya compra supere los $1000
¿Cuál será la cantidad que pagará la persona por su compra?
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	float compra, valor_pagar, descuento = 0.2;
	
	printf("Ingrese el total de la compra: ");
	scanf("%f", &compra);
	
	if (compra > 1000.0){
		valor_pagar = compra - (compra*descuento);
		printf("\nFelicidades, tienes un 20%% de descuento en la compra");
		printf("\nEl total a pagar es de $%.2f", valor_pagar);
	} else {
		printf("\nOuhh, no aplica descuento");
		printf("\nDebes pagar $%.2f", compra);
	}
	
	return 0;
}

