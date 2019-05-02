#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
7. Hacer un algoritmo que imprima el nombre de un artículo, clave, precio original  y su precio con descuento.
El descuento lo hace en base a la clave, si la clave es 01 el descuento es del 10% y si la clave es 02 el descuento es del 20%
(Solo existen 2 claves)
*/
// Ingresar los datos y en base a la clave hacerse el descuento

int main(int argc, char *argv[]) {
	system("color 30");
	
	char articulo[30];	
	float precio, precio_final;
	int clave = 0;
	
	printf("Ingrese el nombre del artículo: ");
	scanf("%[^\n]", articulo); // Lee cadena de caracteres con espacios en blanco
	
	printf("Ingrese el precio del articulo: ");
	scanf("%f", &precio);
	
	printf("Ingrese la clave: 01 o 02: ");
	scanf("%i", &clave);
	
	if (clave == 1){
		precio_final = precio *  0.9;
		
	} else if (clave == 2){
		precio_final = precio * 0.8;
	} else {
		precio_final = precio;
	}
	
	printf("\nEl artículo es %s su precio original es de: $%.2f", articulo, precio);
	printf("\nLa clave es %i y el precio a pagar es de: $%.2f", clave, precio_final);
	
	return 0;
}

