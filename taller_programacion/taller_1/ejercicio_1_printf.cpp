#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/**
1. Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto dinero ganará después de un
mes si el banco paga a razon del 2% mensual
*/
float capital = 0, ganancias = 0;
const float razon_interes =  2;

int main(){
	
	printf("Ingrese la cantidad de Capital a invertir en el banco: ");
	scanf("%f", &capital);
	
	ganancias = capital * (razon_interes/100);
	
	printf("\nEl total de dinero invertido es de: $%.2f y ganará $%.2f", capital, ganancias);
	printf("\nEl total de dinero que tiene es de $%.2f", (capital+ganancias) );
	
	
	return 0;
}
