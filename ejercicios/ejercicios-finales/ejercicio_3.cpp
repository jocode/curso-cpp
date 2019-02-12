/**
* Escriba un programa en c++, usando funciones,que lea un entero positivo de dos dígitos y determinar si sus dígitos son números primos.
*/
#include <iostream>
#include <cmath>
using namespace std;

void obtenerDigitos(int valor);
bool esPrimo(int numero);

int main() {
	int numero;
	cout << "Un número primo, es aquel que sólo puede dividirse en 1 y en si mismo" << endl;
	cout << "Ingrese el número de dos digitos para determinar sus dígitos son números primos: " << endl;
	cin >> numero;
	cout << endl;
	
	if (numero >= 10 && numero < 100)
		obtenerDigitos(numero);
	else 
		cout << "No está definido en el rango de valores";
	
	return 0;
}

void obtenerDigitos(int valor){
	int first = floor(valor/10);
	int second = (valor%10);
	
	if (esPrimo(first))
		cout << "El número " << first << " es PRIMO" << endl;
	else
		cout << "El número " << first << " NO es primo"<< endl;
	
	
	if ( esPrimo(second) )
		cout << "El número " << second << " es PRIMO"<< endl;
	else 
		cout << "El número " << second << " NO es primo"<< endl;
	
}

bool esPrimo(int numero){
	
	if (numero < 2)
		return false;
	
	// Como tomo 2 y 3 para las operaciones, estos son primos
	if (numero == 2 || numero  == 3)
		return true;
	
	if ( (numero % 2) != 0 && (numero % 3) != 0 )
		return true;
	else
		return false;
}


