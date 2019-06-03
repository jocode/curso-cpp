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
		printf("Ingres la %i nota del alumno: ", i);
		scanf("%f", &nota);
		promedio += nota;
		i++;
	}
	
	printf("\nEl promedio del alumno en la materia de Diseño estructurado de Algoritmos es: %.2f", (promedio/7));
	
	return 0;
}

