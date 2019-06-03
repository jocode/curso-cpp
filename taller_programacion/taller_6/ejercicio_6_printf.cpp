#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
6. Suponga que tiene un conjunto de calificaciones de un grupo de 40 alumnos.
Realizar un algoritmo para calcular la calificacion media y la calificacion más baja de todo el grupo.
*/
int main(int argc, char *argv[]) {
	system("color 30");
	
	float promedio = 0, nota, menor;
	
	int i = 1;
	while (i<=40){
		
		printf("Ingrese la nota del %d alumno: ", i);
		scanf("%f", &nota);
		
		if (i == 1){
			menor = nota;
		}
		
		if (nota <= menor){
			menor = nota;
		}
		
		promedio += nota;
		i++;
	}
	
	printf("\nLa calificacion promedio es de: %.2f",  (promedio/40));
	printf("\nLa calificación más baja es de: %.2f", menor);
	
	return 0;
}

