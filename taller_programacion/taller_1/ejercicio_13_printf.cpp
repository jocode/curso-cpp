#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


/**
* 13. Tres personas deciden invertir su dinero para fundar una empresa.
* Cada una de ellas invierte cantidades distintas. Obtener el porcentaje
* que cada quien invierte con respecto a la cantidad total invertida.
*/

float inversion_1, inversion_2, inversion_3, inversion_total;

int main(int argc, char *argv[]) {
	system("color 06");
	
	printf("Ingrese el valor invertido por la persona 1: ");
	scanf("%f", &inversion_1);
	printf("Ingrese el valor invertido por la persona 2: ");
	scanf("%f", &inversion_2);
	printf("Ingrese el valor invertido por la persona 3: ");
	scanf("%f", &inversion_3);
	
	inversion_total = inversion_1 + inversion_2 + inversion_3;
	
	printf("\n\nEl porcentaje invertido por la persona 1 es de: %.2f%%", (inversion_1*100/inversion_total));
	printf("\nEl porcentaje invertido por la persona 2 es de: %.2f%%", (inversion_2*100/inversion_total));
	printf("\nEl porcentaje invertido por la persona 3 es de: %.2f%%", (inversion_3*100/inversion_total));
	
	return 0;
}

