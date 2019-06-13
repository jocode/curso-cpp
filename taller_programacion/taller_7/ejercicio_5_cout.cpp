#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int alumnos;
	float nota, promedio = 0;
	
	cout << "Ingrese la cantidad de alumnos: ";
	cin >> alumnos;
	
	int i = 1;
	do {
		cout << "Ingrese la calificación del alumno " << i << ": ";
		cin >> nota;
		
		promedio += nota;
		
		i++;
	} while(i <= alumnos);
	
	cout << "\nEl promedio de las calificaciones de los " << alumnos << " alumnos, es: " << (promedio/alumnos);
	
	return 0;
}

