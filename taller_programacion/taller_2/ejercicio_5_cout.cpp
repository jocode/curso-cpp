#include <iostream>
#include <stdio.h>
using namespace std;

/**
5. Haga un programa que lea 2 numeros y los imprima de forma ascencente
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	float num1, num2;
	
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	
	if (num1 < num2){
		cout << "\nLos números ordenados son: " << num1 << " y " << num2;
	} else {
		cout << "\nLos números ordenados son: " << num2 << " y " << num1;
	}
	
	return 0;
}

