#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


/**
* 13. Tres personas deciden invertir su dinero para fundar una empresa.
* Cada una de ellas invierte cantidades distintas. Obtener el porcentaje
* que cada quien invierte con respecto a la cantidad total invertida.
*/

float inversion_1, inversion_2, inversion_3, inversion_total;

int main(int argc, char *argv[]) {
	system("color 06");
	
	cout << "Ingrese el valor invertido por la persona 1: ";
	cin >> inversion_1;
	cout << "Ingrese el valor invertido por la persona 2: ";
	cin >> inversion_2;
	cout << "Ingrese el valor invertido por la persona 3: ";
	cin >> inversion_3;
	
	inversion_total = inversion_1 + inversion_2 + inversion_3;
	
	cout << endl << ends;
	cout << "El porcentaje invertido por la persona 1 es de: " << (inversion_1*100/inversion_total) << "%" << endl;
	cout << "El porcentaje invertido por la persona 2 es de: " << (inversion_2*100/inversion_total) << "%" << endl;
	cout << "El porcentaje invertido por la persona 3 es de: " << (inversion_3*100/inversion_total) << "%" << endl;
	
	return 0;
}

