#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int clientes = 1, articulo = 1;
	float precio = 0, monto = 0, total_ventas = 0;
	char mas_ventas[2];
	char mas_clientes[2];
	
	do {
		printf("\nIngrese los articulos del cliente N° %d\n", clientes);
		articulo = 1;
		monto = 0;
		do {
			printf("Ingrese el precio del %d articulo: ", articulo);
			scanf("%f", &precio);
			monto += precio;
			printf("¿Hay más artículos? Escriba (si) o (no): ");
			scanf("%s", mas_ventas);
			articulo++;
		} while(strcmp(mas_ventas, "si") == 0);
		
		printf("\nEl cliente %d debe pagar $%.2f", clientes, monto);
		total_ventas += monto;
		
		printf("\n\n¿Hay más clientes?. Escriba (si) o (no): ");
		scanf("%s", mas_clientes);
		
		clientes++;
	} while(strcmp(mas_clientes, "si") == 0);
	
	printf("\nEl total de Ventas del día fué de $%.2f", total_ventas);
	
	return 0;
}

