/**
* Dado un numero a real y uno b entero, escriba un programa en C++ que a traves de una funcion 
devuelva a elevado a la b (a^b) usando recursividad.

*/

#include <iostream>
using namespace std;

// Una función recursiva en C++ es aquella que se llama a si misma
double potencia(double base, double exponente){
	if (exponente == 0)
		return 1;
	else {
		return base *  potencia(base, exponente-1);
	}
}

int main() {
	int a, b;
	cout << "Ingrese la base: ";
	cin >> a;
	cout << "Ingrese el exponente: ";
	cin >> b;
	
	cout << "\nEl resultado es: " << potencia(a, b);
	return 0;
}

