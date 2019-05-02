#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
7. Hacer un algoritmo que imprima el nombre de un artículo, clave, precio original  y su precio con descuento.
El descuento lo hace en base a la clave, si la clave es 01 el descuento es del 10% y si la clave es 02 el descuento es del 20%
(Solo existen 2 claves)
*/
// Ingresar los datos y en base a la clave hacerse el descuento

int main(int argc, char *argv[]) {
	system("color 30");
	string articulo;
	float precio, precio_final;
	int clave = 0;
	cout << "Ingrese el nombre del artículo: ";
	cin >> articulo;
	
	cout << "Ingrese el precio del articulo: ";
	cin >> precio;
	
	cout << "Ingrese la clave: 01 o 02: ";
	cin >> clave;
	
	if (clave == 1){
		precio_final = precio *  0.9;
		
	} else if (clave == 2){
		precio_final = precio * 0.8;
	} else {
		precio_final = precio;
	}
	
	cout << "\nEl artículo es " << articulo << " su precio original es de " << precio << endl;
	cout << "La clave es " << clave << " y el precio a pagar es de " << precio_final  << ends;
	
	return 0;
}

