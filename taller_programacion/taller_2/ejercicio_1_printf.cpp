#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
* 1. Un hombre desea saber cuánto dinero se genera por concepto de intereses
sobre la cantidad que tiene en inversión en el banco. El decidirá reinvertir los
interese siempre y cuando estos excedan a $7000. Y en ese caso desea saber
cuánto dinero tendrá finalmente en su cuenta.
*/
int main(int argc, char *argv[]) {
	system("color 03");
	float interes, inversion, valor_interes;
	double total= 0;
	
	printf("Cuál es el valor de la inversión que tiene en el banco: ");
	scanf("%f", &inversion);
	
	printf("¿Cuál es el porcentaje de interés del banco?: ");
	scanf("%f", &valor_interes);
	
	interes = inversion * (valor_interes / 100);
	
	if (interes > 7000) {
		printf("Es factible que invierta. El valor del interés es: %.2f", interes);
		total = inversion + interes + interes*(valor_interes/100);
		printf("\nAl reinvertir tendrá una ganancia de: %.2f", total);
	} else
		printf("NO es recomendable reinvertir. Los interes son de: %.2f", interes);
	
	return 0;
}

