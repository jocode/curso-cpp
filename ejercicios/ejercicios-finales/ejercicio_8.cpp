/**
* Escriba un programa en c++, usando funciones, que reciba un numero entrero y devuelva la suma de sus digitos.
*/
#include <iostream>
using namespace std;

int sumarDigitos(int numero);


int main() {
	int numero;
	
	cout << "Ingrese el número entero: ";
	cin >> numero;
	
	/**
	* Tip. La clave de obtener los dígitos, es dividir sobre 10 y obtener el residuo (Modulo). Se suman los módulos, que son los dígitos invertidos del número
	*/
	cout << "La suma de los dígitos es: " << sumarDigitos(numero);
	
	return 0;
}

int sumarDigitos(int numero){
	int suma=0; 
	
	if (numero < 10){
		return numero; 
	} else  { 
		while (numero >= 10) { 
			suma += numero % 10; 
			numero =  numero / 10; 
		} 
		suma += numero;
		return suma; 
	} 
}
