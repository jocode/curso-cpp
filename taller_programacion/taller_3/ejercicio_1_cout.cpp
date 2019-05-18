#include <iostream>
#include <stdlib.h>
using namespace std;

/**
1. Leer tres numeros diferenes e imprimir el numero mayor de los tres
*/

int main(int argc, char *argv[]) {
	system("color 30");
	float a, b, c;
	
	cout << "Ingrese el numero a ";
	cin >> a;
	cout << "Ingrese el numero b ";
	cin >> b;
	cout << "Ingrese el numero c ";
	cin >> c;
	
	if ( a > b && a > c){
		cout << "El mayor de los números es : " << a;
	}
	if (b > a && b > c){
		cout << "El mayor de los números es: " << b;
	}
	if (c > a && c > b){
		cout << "El mayor de los números es " << c;
	}
	if ((a == b) && (b == c) ){
		cout << "Los tres números son iguales";
	}
	
	return 0;
}

