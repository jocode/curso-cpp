#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int hombres = 0, mujeres = 0, cantidad_alumnos = 0;
	char genero[3];
	
	printf("¿Cuántos alumnos hay en el curso?: ");
	scanf("%d", &cantidad_alumnos);
	
	int i = 1;
	do {
		printf("\nIngrese el género del %d alumno.", i);
		printf("\n 'f' = femenino\n 'm'=masculino\n: ");
		scanf("%s", genero);
		
		if (strcmp(genero, "f")==0){
			mujeres++;
		} else if (strcmp(genero, "m")==0) {
			hombres++;
		}
		
		i++;
	} while(i <= cantidad_alumnos);
	
	printf("\nHay %d hombres", hombres);
	printf("\nHay %d mujeres.", mujeres);
	
	return 0;
}

