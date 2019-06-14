#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int clientes = 1, articulo = 1;
	float precio = 0, monto = 0, total_ventas = 0;
	char mas_ventas[2];
	char mas_clientes[2];
	
	do {
		cout << "\nIngrese los articulos del cliente N° " << clientes << endl;
		articulo = 1;
		monto = 0;
		do {
			cout << "Ingrese el precio del " << articulo << " articulo: ";
			cin >> precio;
			monto += precio;
			cout << "¿Hay más artículos? Escriba (si) o (no): ";
			cin >> mas_ventas;
			articulo++;
		} while(strcmp(mas_ventas, "si") == 0);
		
		cout << "\nEl cliente " << clientes << " debe pagar $" << monto;
		total_ventas += monto;
		
		cout << "\n\n¿Hay más clientes?. Escriba (si) o (no): ";
		cin >> mas_clientes;
		
		clientes++;
	} while(strcmp(mas_clientes, "si") == 0);
	
	cout << "\nEl total de Ventas del día fué de $" << total_ventas;
	
	return 0;
}

