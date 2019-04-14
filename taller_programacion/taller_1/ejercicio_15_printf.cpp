#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
15. Calcular el nuevo salario de un obrero si obtuvo un incremento del 30% sobre un salario anterior
*/

float salario;

int main(int argc, char *argv[]) {
	system("color 02");
	printf("\nIngrese el salario anterior del obrero: ");
	scanf("%f", &salario);
	
	printf("\nEl nuevo salario del Obrero con incremento del 30%% es de: $%.2f", (salario*1.3) );
	
	return 0;
}

