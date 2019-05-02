#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
* 2. Determinar si un alumno apruena o reprueba un curso, sabiendo que aprobará si su promedio de 3
calificaciones es mayor o igual a 3.0 y reprueba en caso contrario
*/
int main(int argc, char *argv[]) {
	system("color 30");
	float nota1, nota2, nota3, promedio;
	printf("Ingrese la nota 1: ");
	scanf("%f", &nota1);
	printf("Ingrese la nota 2: ");
	scanf("%f", &nota2);
	printf("Ingrese la nota 3: ");
	scanf("%f", &nota3);
	
	promedio = (nota1 + nota2 + nota3) / 3;
	
	if (promedio >= 3.0)
		printf("Felicidades, pasaste la materia en %.2f ",promedio);
	else 
		printf("Oush, perdiste. Tu promedio es de %.2f ", promedio);
	
	return 0;
}

