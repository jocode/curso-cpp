#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
* Un alumno desea saber cual sera su calificacion final en la materia de Algoritmos. Dicha calificacion se compone de los siguientes porcentajes:
- 55% del promedio de sus tres calificaciones
- 30% de la calificacion del examen final
- 15% de la calificacion de un trabajo final
*/

float nota, promedio_notas = 0;
float examen, trabajo, nota_final;

int main(int argc, char *argv[]) {
	system("color F0");
	
	for (int i = 1; i <= 3; i++){
		printf("Ingrese la nota %i: ", i);
		scanf("%f", &nota);
		promedio_notas += nota;
	}
	
	printf("\nIngrese la calificacion del examen final: ");
	scanf("%f", &examen);
	printf("\nIngrese la calificacion del trabajo final: ");
	scanf("%f", &trabajo);
	
	promedio_notas = (promedio_notas/3);
	nota_final = (promedio_notas*0.55) + (examen*0.3) + (trabajo*0.15);
	
	printf("\nLa nota final del estudiante es de: %.2f", nota_final);
	
	return 0;
}

