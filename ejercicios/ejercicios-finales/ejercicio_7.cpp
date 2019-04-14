/**
* Escriba un programa en c++, usando funciones, que calcule el área y el perímetro de un rectángulo dada la base y la altura.
*/
#include <iostream>
using namespace std;


double area(double base, double altura){
	return base*altura;
}

double perimetro(double base, double altura){
	return (base+altura)*2;
}

int main() {
	double base, altura;
	cout << "Ingrese la base del rectángulo: ";
	cin >> base;
	cout << "Ingrese la altura del rectángulo: ";
	cin >> altura;
	cout << endl;
	cout << "El área del rectángulo es: " << area(base, altura) << " u^2" << endl;
	cout << "El perímetro del rectángulo es: " << perimetro(base, altura) << " u" << endl;
	return 0;
}

