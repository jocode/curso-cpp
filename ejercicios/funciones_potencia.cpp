#include <iostream>
using namespace std;

double potencia(double number, double exponente);

int main() {
	double a, b;
	cout << "Ingrese la base: ";
	cin >> a;
	cout << "Ingrese el exponente: ";
	cin >> b;
	
	cout << "La potencia de 2 es: " << potencia(a, b);
	return 0;
}


double potencia(double number, double exponente){
	double resultado = 1;
	for (int i = 1; i <= exponente; i++){
		resultado *= number;
	}
	return resultado;
}



