#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	float prom, n1, n2, n3;
	system("color 47");
	cout << "Ingrese la nota 1: ";
	cin >> n1;
	cout << "Ingrese la nota 2: ";
	cin >> n2;
	cout << "Ingrese la nota 3: ";
	cin >> n3;
	
	prom = (n1+n2+n3)/3;
	
	if (prom > 3.0){
		cout << "El promedio del alumno es " << prom << " ¡PASÓ! :)";
	} else {
		cout << "El promedio del alumno es " << prom << " - PERDIO :(";
	}
	
	return 0;
}

