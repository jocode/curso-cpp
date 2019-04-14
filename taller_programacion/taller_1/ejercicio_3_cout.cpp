#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
3. Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuanto debera
pagar finalmente por su compra
*/

float descuento, precio, total;
const float PER_DESCUENTO = 15;

int main(int argc, char *argv[]) {
	system("color 02");
	
	cout << "Ingrese el precio de la compra: ";
	cin >> precio;
	
	descuento = precio * (PER_DESCUENTO/100);
	
	cout << "\nEl precio total de la compra es de: $" << precio;
	cout << "\nEl descuento es de: $" << descuento;
	cout <<"\nEl total a pagar es de: $" << (precio-descuento);
	
	return 0;
}

