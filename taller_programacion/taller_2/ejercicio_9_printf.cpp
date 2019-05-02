#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
Una empresa quiere hacer una compra de varias piezas de la misma clase a una fábrica de refreacciones.
La empresa, dependiendo del monto total de la compra, decidirá qué hacer para pagar al fabricante.

Si el monto total de la compra excede de $500.000 la  empresa tendrá la capacidad de invertir de su propio dinero
en un 55% del monto de la compra, pedir prestado al banco un 30%  y el resto lo pagará solicitando un crédito al fabricante.

Si el monto total de la compra no excede de $500.000 la empresa tendrá la capacidad de invertir de su propio dinero un 70%
y el restante 30% lo pagará solicitando crédito al fabricante.

El fabricante cobra por concepto de interés un 20% sobre la cantidad que se pague a crédito.
*/

int main(){
	system("color 30");
	
	float total_compra, empresa= 0, banco = 0, fabrica = 0;
	
	printf("Ingrese el total de la compra: ");
	scanf("%f", &total_compra);
	
	if (total_compra < 500000){
		printf("\nLa compra no exede de 500000");
		empresa = total_compra * 0.7;
		fabrica  = total_compra  * 0.3;
	} else {
		printf("\nLa compra exede de 500000");
		empresa = total_compra * 0.55;
		banco  = total_compra  * 0.3;
		fabrica = total_compra * 0.25;
	}
	
	printf("Para pagar cada entidad aporta: \n");
	printf("Empresa: $%.2f\nFabrica: $%.2f\nBanco: $%.2f", empresa, fabrica, banco);
	printf("\nCómo la fábrica cobra 20%% sobre el monto a credito, debes pagar $%.2f al fabricante", (fabrica*1.2));
	
	return 0;
}
