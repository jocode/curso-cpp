#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
* 12. Todos los lunes, miercoles y viernes, una persona recorre la misma ruta y cronometra los tiempos obtenidos
* Deteminar el tiempo promedio que la persona tarda en recorrer la ruta en una semana cualquiera.
*/

float time_1, time_2, time_3, promedio;

int main(int argc, char *argv[]) {
	system("color F0");
	
	printf("Hola, se calculará el tiempo promedio en que recorre la ruta.\nEl tiempo debe ser dado en minutos.\n");
	printf("\nIngrese el tiempo de día Lunes: ");
	scanf("%f", &time_1);
	printf("Ingrese el tiempo de día Miércoles: ");
	scanf("%f", &time_2);
	printf("Ingrese el tiempo de día Viernes: ");
	scanf("%f", &time_3);

	promedio = (time_1 + time_2 + time_3) / 3;
	
	printf("\nEl tiempo promedio que tarda en recorrer la ruta es de: %.2f minutos", promedio);
	
	return 0;
}

