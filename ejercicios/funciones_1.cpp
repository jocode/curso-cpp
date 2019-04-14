/**
1. Escriba un programa en c++, usando funciones, que pida un numero y devuelva el cubo de dicho numero.
*/
#include <iostream>
using namespace std;

long double cubo(double base, int exp = 3){
	if (exp == 0)
		return 1;
	else 
		return base * cubo(base, exp-1);
}

int main(){
	double number;
	cout << "Ingrese el número para calcular el cubo (a^3): ";
	cin >> number;
	cout << "\nEl cubo del número " << number << " es: " << cubo(number) << endl;
	return 0;
}

