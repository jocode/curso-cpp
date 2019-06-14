#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int grupos, alumnos, materias;
	float promedio_total = 0, promedio_grupo = 0, promedio_alumno = 0, promedio_materia = 0;
	float calificacion;
	
	printf("Digite la cantidad de grupos: ");
	scanf("%d", &grupos);
	
	int i = 1;
	do {
		// Grupos
		printf("Digite la cantidad de alumnos del grupo: ");
		scanf("%d", &alumnos);
		promedio_grupo = 0; 
		
		int j = 1;
		do {
			// Alumnos
			printf("\nDigite la cantidad de materias del alumno %d: ", j);
			scanf("%d", &materias);
			promedio_alumno = 0;
			
			int k = 1;
			do {
				// Materia
				printf("\nMateria %d \n", k);
				promedio_materia = 0;
				int l = 1;
				do {
					printf("Ingrese la %d nota: ", l);
					scanf("%f", &calificacion);
					promedio_materia += calificacion;
					l++;
				} while( l <= 3);
				
				promedio_materia = (promedio_materia/3);
				promedio_alumno += promedio_materia; 
				k++;
			} while( k <= materias);
			
			promedio_alumno = (promedio_alumno/materias);
			promedio_grupo += promedio_alumno;
			
			printf("\nEl promedio del Alumno %d es de: %.2f\n", j, promedio_alumno);
			
			j++;
		} while(j <= alumnos);
		
		promedio_grupo = (promedio_grupo/alumnos);
		promedio_total += promedio_grupo;
		
		printf("\nEl promedio del Grupo %d es de: %.2f", i, promedio_grupo);
		
		i++;
	} while(i <= grupos);
	
	promedio_total = (promedio_total/grupos);
	printf("\nEl promedio del los grupos es de: %.2f", promedio_total);
	
	return 0;
}

