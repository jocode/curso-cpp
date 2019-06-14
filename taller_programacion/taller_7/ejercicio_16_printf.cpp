#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int diputados = 0;
	int respuesta = 0;
	float si = 0, no = 0, abstiene = 0;
	
	printf("Ingrese la cantidad de diputados: ");
	scanf("%d", &diputados);
	
	int i = 1;
	do {
		printf("\nDiputado %d", i);
		printf(" ¿Está a favor del Tratado del libre comercio? Responda\n");
		printf("(1) Si\n(2)No\n(3) Se abstiene de votar\n: ");
		scanf("%d", &respuesta);
		
		if (respuesta == 1){
			si++;
		} else if (respuesta == 2){
			no++;
		} else if (respuesta == 3){
			abstiene++;
		}
		
		i++;
	} while(i<=diputados);
	
	printf("\nEl procentaje que votó SI fué del: %.2f%%",  (si*100/diputados) );
	printf("\nEl procentaje que votó NO fué del: %.2f%%", (no*100/diputados) );
	printf("\nEl procentaje que se abstuvo de votar fué del: %.2f%%", (abstiene*100/diputados) );
	
	return 0;
}

