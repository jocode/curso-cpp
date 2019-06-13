#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	float inversion, ganancia, interes = 0;
	
	cout << "Ingrese el monto a invertir: ";
	cin >> inversion;
	
	ganancia = inversion * 0.02;
	
	int i = 1;
	do {
		interes = ganancia*0.02;
		ganancia += interes;
		i++;
	} while(i <= 12);
	
	cout << "\nLa ganancia obtenida en 1 año es de: " << ganancia;
	cout << "\nLa cantidad de dinero de la persona en 1 año es de: " << (ganancia+inversion);
	
	return 0;
}

