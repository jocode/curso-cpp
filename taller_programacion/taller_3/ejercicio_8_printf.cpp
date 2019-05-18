#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
8. Horóscopo
*/

int main(int argc, char *argv[]) {
	int dia, mes;
	
	printf("Ingrese el Número del mes de Nacimiento\n(Enero inicia en 1): ");
	scanf("%d",&mes);
	printf("Ingrese el día de Nacimiento: ");
	scanf("%d",&dia);
	printf("\n");
	
	if (( (mes == 3 && dia>= 21) || (mes ==4 && dia <=20) ) ){
		printf("Usted es Aries");
	} 
	else if ((mes == 4 && dia >= 21) || ( mes==5 && dia <=21) ){
		printf("Usted es Tauro");
	}
	else if ((mes == 5 && dia >= 22) || (mes == 6 && dia <=21) ){
		printf("Usted es Geminis");
	} 
	else if ((mes == 6 && dia >= 21) || (mes==7 && dia <=23) ){
		printf("Usted es Cáncer");
	}
	else if ((mes == 7 && dia >= 24) || (mes == 8 && dia <=23) ){
		printf("Usted es Leo");
	}
	else if ((mes == 8 && dia >= 24) || (mes == 9 && dia <=23) ){
		printf("Usted es Virgo");
	}
	else if ((mes == 9 && dia >= 24) || (mes == 10 && dia <=23) ){
		printf("Usted es Libra");
	}
	else if ((mes == 10 && dia>= 24) || (mes == 11 && dia <=22) ){
		printf("Usted es Escorpio");
	}
	else if ((mes == 11 && dia>= 23) || (mes == 12 && dia <=21) ){
		printf("Usted es Sagitario");
	}
	else if ((mes == 12 && dia>= 22) || (mes == 1 && dia <=20) ){
		printf("Usted es Capricornio");
	}
	else if ((mes == 1 && dia>= 21) || (mes == 2 && dia <=19) ){
		printf("Usted es Acuario");
	}
	else if ((mes == 2 && dia>= 20) || (mes == 3 && dia <=20) ){
		printf("Usted es Picis");
	} else {
		printf("Has Digitado mal la Fecha.");
	}
	
	return 0;
}

