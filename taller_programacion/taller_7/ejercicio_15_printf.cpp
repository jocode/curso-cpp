#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int gallinas = 0;
	float promedio_calidad = 0, calidad = 0, peso = 0, altura = 0, huevos = 0;
	float precio_kilo;
	
	printf("Digite la cantidad de gallinas que hay en la granja: ");
	scanf("%d", &gallinas);
	
	int i = 1;
	do {
		printf("\nGallina %d", i );
		printf("\nIngrese el peso: ");
		scanf("%f", &peso);
		printf("Ingrese la altura: ");
		scanf("%f", &altura);
		printf("Ingrese la cantidad de huevos: ");
		scanf("%f", &huevos);
		calidad = (peso * altura) / huevos;
		
		promedio_calidad += calidad;
		
		i++;
	} while(i <= gallinas);
	
	promedio_calidad = (promedio_calidad/gallinas);
	
	if (promedio_calidad >= 15){
		precio_kilo = promedio_calidad*1.2;
	} else if (promedio_calidad > 8 && promedio_calidad < 15){
		precio_kilo = promedio_calidad*1;
	} else if (promedio_calidad <= 8) {
		precio_kilo = promedio_calidad*0.8;
	}
	
	printf("\nEl precio de venta para cada kilo de huevo es de: $%.2f", precio_kilo);
	
	return 0;
}

