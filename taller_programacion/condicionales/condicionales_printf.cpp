#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	float prom, n1, n2, n3;
	system("color 47");
	printf("Ingrese la nota 1: ");
	scanf("%f", &n1);
	printf("Ingrese la nota 2: ");
	scanf("%f", &n2);
	printf("Ingrese la nota 3: ");
	scanf("%f", &n3);
	
	prom = (n1+n2+n3)/3;
	
	if (prom > 3.0){
		printf("El promedio del alumno es %.2f  ¡PASÓ! :)", prom);
	} else {
		printf("El promedio del alumno es %.2f - PERDIO :(", prom);
	}
	
	return 0;
}

