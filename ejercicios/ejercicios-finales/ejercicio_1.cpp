/*
*Escriba un programa en c++, usando funciones, que pida un número y devuelva el cubo de dicho número.
*/
#include <iostream>
using namespace std;

long double cubo(double base, int exponente = 3);

int main(){
	double numero;
	cout << "Ingrese el número para calcular su cubo: ";
	cin >> numero;
	cout << "La potencia de " << numero << " es: " << cubo(numero);
	return 0;
}

long double cubo(double base, int exponente){
	if (exponente == 0)
		return 1;
	else 
		return base * cubo(base, exponente -1 );
}

