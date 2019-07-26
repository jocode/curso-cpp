#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	// [tienda][deporte]
	int datos[50][20];
	int tienda, deporte, costo, opcion = 0;
	int ventas_totales = 0;
	
	cout << "\nBienvenido a la tienda de articulos deportivos.\n";
	
	// Coloco toda la matriz en cero
	for (int tienda = 0; tienda < 50; tienda++){
		for (int deporte = 0; deporte < 20; deporte++){
			datos[tienda][deporte] = 0;
		}
	}
	
	do {
		cout << "\nIngrese la tienda (1-50): ";
		cin >> tienda;
		cout << "Ingrese el tipo de deporte (1-20): ";
		cin >> deporte;
		cout << "Ingrese el precio del artículos: ";
		cin >> costo;
		
		datos[tienda][deporte] = datos[tienda][deporte] + costo;
		
		cout << "\nQué deseas hacer: \n[1]: Registrar Compra \n[0]: Salir\n: ";
		cin >> opcion;
	} while( opcion == 1 );
	
	// Ventas totales para cada tienda
	cout << "\n---------- Ventas por cada tienda -------------\n";
	int suma = 0;
	for (int tienda = 0; tienda < 50; tienda++){
		suma = 0;
		for (int deporte = 0; deporte < 20; deporte++){
			suma += datos[tienda][deporte];
		}
		
		cout << "Las ventas de la tienda " << tienda << " son de: $" << suma << endl	;
		ventas_totales += suma;
	}
	
	cout << "\n--------- Ventas por cada deporte -------------\n";
	// Ventas totales para cada uno de los deportes 
	for (int deporte = 0; deporte < 20; deporte++){
		suma = 0;
		for (int tienda = 0; tienda < 50; tienda++){
			suma += datos[tienda][deporte];
		}
		cout << "Las ventas para el deporte " << deporte << " son de: $" << suma << endl;
	}
	
	
	// Las ventas totales de todas las tiendas. 
	cout << "\nLas ventas totales de todas las tiendas son de: $" << ventas_totales;
	
	
	return 0;
}

