#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	float SUELDO_BASE = 0;
	int vendedores = 0;
	float venta = 0, comision = 0, total = 0, total_venta = 0;
	
	printf("Ingrese la cantidad de vendedores de la empresa: ");
	scanf("%d", &vendedores);
	printf("Ingrese el sueldo base de los vendedores: ");
	scanf("%f", &SUELDO_BASE);
	
	int i = 1;
	do {
		
		printf("\nIngrese las ventas del ventedor %d\n", i);
		int j = 1;
		do {
			printf("Venta %d: ", j);
			scanf("%f", &venta);
			total_venta += venta;
			
			j++;
		} while(j <= 3);
		
		comision = (total_venta * 0.1);
		total = SUELDO_BASE + comision;
		
		printf("----------------------------\n");
		printf("El vendendor %d recibe: ", i);
		printf("\nSueldo base: %.2f", SUELDO_BASE);
		printf("\nComisión: %.2f", comision);
		printf("\nEl Total a pagar al vendedor es de: %.2f", total);
		printf("\n-----------------------------\n\n");
		
		i++;
	} while(i <= vendedores);
	
	return 0;
}

