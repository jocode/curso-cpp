#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color ba");
	
	int obreros = 0;
	float horas = 0;
	float pago_normal=0, pago_extra=0, total_pagar;
	
	printf("Ingrese la cantidad de obrero de la empresa: ");
	scanf("%d", &obreros);
	
	int i = 1;
	do {
		printf("Obrero %d\n", i);
		printf("Ingrese la cantidad de horas trabajadas: ");
		scanf("%f", &horas);
		
		if (horas > 40){
			pago_normal = 40 * 20;
			pago_extra = (horas-40) * 25;
		} else {
			pago_normal = horas * 20;
			pago_extra = 0;
		}
		total_pagar = pago_normal + pago_extra;
		printf("El salario del obrero es de: %.2f\n\n", total_pagar);
		
		i++;
	} while(i <= obreros);
	
	return 0;
}

