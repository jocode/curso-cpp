#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int alumnos;
	float nota, promedio = 0;
	
	printf("Ingrese la cantidad de alumnos: ");
	scanf("%d", &alumnos);
	
	int i = 1;
	do {
		printf("Ingrese la calificación del alumno %d: ", i);
		scanf("%f", &nota);
		
		promedio += nota;
		
		i++;
	} while(i <= alumnos);
	
	printf("\nEl promedio de las calificaciones de los %d alumnos, es: %.2f", alumnos, (promedio/alumnos) );
	
	return 0;
}

