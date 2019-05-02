#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


/**
Un obrero necesita calcular su salario semanal, el cual se obtiene de la siguiente manera.
- Si trabaja 40 horas o menos, se le paga $16 por hora.
- Si trabaja más de 40 horas, se le paga %16 por cada una de las primeras 40 horas y $20 por cada hora extra.
*/

int main(int argc, char *argv[]) {
	system("color 03");
	
	float horas = 0, extras = 0, salario;
	
	printf("Cuántas horas trabajó en la semana: ");
	scanf("%f", &horas);
	
	if (horas > 40){
		extras = horas - 40;
		salario = (40*16) + (extras*20);
		printf("\nSu salario es de $%.2f por las %.2f de trabajo.", salario, horas);
	} else {
		printf("\nSu salario es de $%.2f por las %.2f horas de trabajo.", (horas*16), horas);
	}
	
	return 0;
}

