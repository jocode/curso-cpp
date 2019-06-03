#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/*
1. Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de diseño estrucurado de Algoritmos
*/
int main(int argc, char *argv[]) {
	system("color 30");
	float nota, promedio = 0;
	
	int i = 1;
	while (i <=7 ){
		cout << "Ingres la " << i << " nota del alumno: ";
		cin >> nota;
		promedio += nota;
		i++;
	}
	
	cout << "\nEl promedio del alumno en la materia de Diseño estructurado de Algoritmos es: " << (promedio/7) ;
	
	return 0;
}

