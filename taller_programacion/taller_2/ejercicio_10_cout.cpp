#include <iostream>
#include <stdlib.h>
using namespace std;

/**
10. Calcular el total que una persona debe pagar en una llantera, si el precio
de cada llanta es de $800 si se compran menos de 5 y de
$700 si se compran 5 o más
*/
int main(int argc, char *argv[]) {
	system("color 30");
	
	float cantidad, total_pagar;
	
	cout << "Ingrese la cantidad de llantas a comprar: ";
	cin >> cantidad;
	
	if (cantidad < 5){
		total_pagar = 800 * cantidad;
	} else {
		total_pagar = 700 * cantidad;
	}
	
	cout << "\nEl Total a pagar por las "  << cantidad << " llantas es de: $" << total_pagar;
	
	return 0;
}

