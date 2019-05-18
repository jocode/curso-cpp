#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
1. Leer tres numeros diferenes e imprimir el numero mayor de los tres
*/

int main(int argc, char *argv[]) {
	system("color 30");
	float a, b, c;
	printf("Ingrese el numero a: ");
	scanf("%f", &a);
	printf("Ingrese el numero b: ");
	scanf("%f", &b);
	printf("Ingrese el numero c ");
	scanf("%f", &c);
	
	if ( a > b && a > c){
		printf("El mayor de los números es : %.2f ", a);
	}
	if (b > a && b > c){
		printf("El mayor de los números es: %.2f", b);
	}
	if (c > a && c > b){
		printf("El mayor de los números es %.2f", c);
	}
	if ((a == b) && (b == c) ){
		printf("Los tres números son iguales");
	}
	
	return 0;
}

