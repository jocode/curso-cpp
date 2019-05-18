#include <iostream>
#include <stdlib.h>
using namespace std;

/**
7. Que lea 3 numeros diferentes y determine el numero medio del conjunto de los tres numeros
(El número medio es aquel que no es mayor ni menor)
*/

int main(int argc, char *argv[]) {
	system("color  30");
	float a, b, c;
	
	cout << "Ingrese el primer número: ";
	cin >> a;
	cout << "Ingrese el segundo número: ";
	cin >> b;
	cout << "Ingrese el tercer número: ";
	cin >> c;
	
	if ( (b >= a && a >= c) || (c >= a && a >= b) ){
		cout << "El número del medio es " << a;
	}else if ( (a >= b && b >= c) || (c >= b && b >= a) ){
		cout << "El número del medio es " << b;
	}else if ( (a >= c && c>=b) || (b >= c && c >= a) ){
		cout << "El número del medio es " << c;
	}
	
	return 0;
}

