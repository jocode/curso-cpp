#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
1. Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto dinero ganará después de un
mes si el banco paga a razon del 2% mensual
*/
float capital = 0, ganancias = 0;
const float razon_interes =  2;

int main(int argc, char *argv[]) {
	
	cout << "Ingrese la cantidad de Capital a invertir en el banco: ";
	cin >> capital;
	
	ganancias = capital * (razon_interes/100);
	
	cout << "\nEl total de dinero invertido es de: $" << capital << endl;
	cout << "El dinero que ganará es de: $" << ganancias << endl;
	cout << "El total de dinero que tiene es de: $" << (capital+ganancias) << ends;

	return 0;
}

