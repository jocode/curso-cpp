#include <iostream>
#include <stlib.h>
using namespace std;

/**
* 2. Determinar si un alumno apruena o reprueba un curso, sabiendo que aprobará si su promedio de 3
calificaciones es mayor o igual a 3.0 y reprueba en caso contrario
*/
int main(int argc, char *argv[]) {
	system("color 30");
	float nota1, nota2, nota3, promedio;
	cout << "Ingrese la nota 1: ";
	cin >> nota1;
	cout << "Ingrese la nota 2: ";
	cin >> nota2;
	cout << "Ingrese la nota 3: ";
	cin >> nota3;
	
	promedio = (nota1 + nota2 + nota3) / 3;
	
	if (promedio >= 3.0)
		cout << "Felicidades, pasaste la materia en : " << promedio;
	else 
		cout << "Oush, perdiste. Tu promedio es de: " << promedio;
	
	return 0;
}

