#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
* 7. Dada una cantidad en pesos, obtener la equivalencia en dolares, asumiendo que la unidad cambiaría es un dato desconocido
*/
float pesos_per_dolares, pesos, conversion;

int main(int argc, char *argv[]) {
	
	system("color a1");
	
	cout << "\nIngrese la cantidad de pesos colombianos a convertir: $ ";
	cin >> pesos;
	cout << "Ingrese el precio del dolar en pesos colombianos: ";
	cin >> pesos_per_dolares;
	
	conversion = pesos/pesos_per_dolares;
	
	cout << "\nLos $"<< pesos << " pesos equivalen a USD "<<  conversion <<" dolares";
	
	return 0;
}

