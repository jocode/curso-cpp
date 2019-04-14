#include <iostream>
using namespace std;

unsigned long long factorial(int number){
	if (number == 1){
		return 1;
	} else {
		long long resultado = number * factorial(number - 1);
		return resultado;
	}
}

int main() {
	int number;
	cout << "Ingrese el número factorial a calcular: ";
	cin >> number;
	cout << "El factorial de " << number << " es: " << factorial(number);
	return 0;
}

