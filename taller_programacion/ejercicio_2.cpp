#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int cantidad = 0;
	float total_iva = 0, subtotal = 0, total = 0;
	float precio = 12500;
	const float IVA = 0.19; 
	
	cout << "Ingrese la cantidad de Tarros de pintura: ";
	cin >> cantidad;
	
	// Procesos
	subtotal = precio * cantidad;
	total_iva = subtotal*IVA;
	total = subtotal + total_iva;
	
	cout << "\nLa cantidad de tarros comprados es: " << cantidad << endl;
	cout << "El valor del impuesto es de: $" << total_iva << endl;
	cout << "El total a pagar es de: $" << total << ends;

	
	return 0;
}

