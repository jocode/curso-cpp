#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
2. Un vendedor recibe un sueldo base, mas un 10% extra por comision de sus ventas, el vendedor
desea saber cuanto dinero obtendrá por concepto de comisiones por las tres ventas que realiza
en el mes y el total que recibira en el mes tomando en cuenta su sueldo base y comisiones
*/

float sueldo_base, venta, comision, ventas = 0.0;
const float PER_COMISION = 10; 

int main(int argc, char *argv[]) {
	system("color 03");
	
	for (int i = 1; i<= 3; i++){
		cout << "Ingrese el precio de las venta " << i << ": ";
		cin >> venta;
		ventas += venta;
	}
	
	cout << "\nIngrese el sueldo del vendedor: ";
	cin >> sueldo_base;
	
	comision = ventas * (PER_COMISION/100);
	
	cout << "\nSu sueldo base es de: $" << sueldo_base;
	cout << "\nLa comision recibida por ventas es de: $" << comision;
	cout <<"\nEl sueldo total es de: $" << (sueldo_base+comision);
	
	return 0;
}

