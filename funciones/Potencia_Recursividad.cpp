#include <iostream>
using namespace std;

double potencia(double base, int exponente){
	if (exponente == 0){
		return 1;
	} else {
		double resultado = base * potencia(base, exponente - 1);
		return resultado;
	}
}

int main() {
	int exponente;
	double base;
	cout << "Calcular la potencia de un número. \n";
	cout << "Ingrese la base (Número Real): ";
	cin >> base;
	cout << "Ingrese el exponente (Número entero): ";
	cin >> exponente;
	cout << "El resultado de " << base << "^" << exponente << " es: " << potencia(base, exponente);
	return 0;
}

