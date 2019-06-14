#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int obreros = 0;
	float precio_hora = 0, sueldo = 0;
	float horas=0, dobles=0, triples=0;
	
	printf("Ingrese la cantidad de obreros: ");
	scanf("%d", &obreros);
	printf("Ingrese el precio de la hora: ");
	scanf("%f", &precio_hora);
	
	int i = 1;
	do {
		printf("\nObrero %d\n", i);
		printf("Ingrese las horas trabajadas: ");
		scanf("%f", &horas);
		
		if (horas <= 40){
			sueldo = horas*precio_hora;
		} else if (horas > 40){
			dobles = (horas-40);
			sueldo = (precio_hora*40) + (dobles*precio_hora*2);
			if (dobles > 8){
				triples = (dobles-8);
				sueldo = (precio_hora*40) + (precio_hora*8*2) + (triples*precio_hora*3);
			}
		}
		
		printf("El sueldo del Obrero es de  $%.2f\n",sueldo);
		
		i++;
	} while(i <= obreros);
	
	return 0;
}

