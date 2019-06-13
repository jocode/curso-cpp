#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int amarilla = 0, rosa = 0, roja = 0, verde = 0, azul = 0, cantidad_autos = 0, placa = 0;
	
	printf("Ingrese la cantidad de autos que ingresaron: ");
	scanf("%d", &cantidad_autos);
	
	int i = 1;
	do {
		printf("Digite el último dígito de la placa: ");
		scanf("%d", &placa);
		
		if (placa == 1 || placa == 2){
			amarilla++;
		} else if (placa == 3 || placa == 4){
			rosa++;
		} else if (placa == 5 || placa == 6){
			roja++;
		} else if (placa == 7 || placa == 8){
			verde++;
		} else if (placa == 9 || placa == 0){
			azul++;
		} 
		i++;
	} while(i <= cantidad_autos);
	
	printf("\nHay %d autos con calcomania amarilla.", amarilla);
	printf("\nHay %d autos con calcomania rosa.", rosa);
	printf("\nHay %d autos con calcomania roja.", roja);
	printf("\nHay %d autos con calcomania verde.", verde);
	printf("\nHay %d autos con calcomania azul.", azul);
	
	return 0;
}

