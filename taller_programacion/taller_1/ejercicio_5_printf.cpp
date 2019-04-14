#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
* 5. Un maestro desea saber qué porcentaje de hombres y mujeres hay en un grupo de estudiantes
*/
int hombres, mujeres;
float per_hombres, per_mujeres, total;

int main(int argc, char *argv[]) {
	system("color 06");
	
	printf("Ingrese la cantidad de hombres: ");
	scanf("%i", &hombres);
	printf("Ingrese la cantidad de mujeres: ");
	scanf("%i", &mujeres);
	
	total = hombres + mujeres;
	
	per_hombres = (hombres*100)/total;
	per_mujeres = (mujeres*100)/total;
	
	printf("\nEl porcentaje de hombres es de: %.2f%%", per_hombres);
	printf("\nEl porcentaje de mujeres es de: %.2f%%", per_mujeres);
	
	return 0;
}

