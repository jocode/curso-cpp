#include <iostream>
#include <stdlib.h>
using namespace std;

/**
6. Suponga que tiene un conjunto de calificaciones de un grupo de 40 alumnos.
Realizar un algoritmo para calcular la calificacion media y la calificacion más baja de todo el grupo.
*/
int main(int argc, char *argv[]) {
	system("color 30");
	
	float promedio = 0, nota, menor;
	
	for (int i = 1; i<=40; i++){
		
		cout << "Ingrese la nota del " << i << " alumno: ";
		cin >> nota;
		
		if (i == 1){
			menor = nota;
		}
		
		if (nota <= menor){
			menor = nota;
		}
		
		promedio += nota;
	}
	
	cout << "\nLa calificacion promedio es de: " << (promedio/40) << endl;
	cout << "La calificación más baja es de: " << menor;
	
	return 0;
}

