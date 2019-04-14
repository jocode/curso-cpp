#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad = 0;
	float total_iva = 0, subtotal = 0, total = 0;
	float precio = 12500;
	const float IVA = 0.19;
	printf("\nIngrese la cantidad de Tarros de pintura: ");
	scanf("%i", &cantidad);
	
	// Procesos
	subtotal = precio * cantidad;
	total_iva = subtotal*IVA;
	total = subtotal + total_iva;
	
	printf("\nLa cantidad de tarros comprados es: %i\nEl valor del impuesto es de: $%.2f \nEl total a pagar es de $%.2f",cantidad, total_iva, total);
	
	return 0;
}

