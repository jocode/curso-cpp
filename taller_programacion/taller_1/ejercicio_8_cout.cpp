#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
* 8. Leer un número y escribir el valor absoluto del mismo
*/

float number;

int main(int argc, char *argv[]) {
	system("color F0");
	
	cout << "Ingrese un número: ";
	cin >> number;
	
	cout << "\nEl valor absoluto de |"<< number <<"| es " << abs(number);
	
	return 0;
}

