#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
7. Que lea 3 numeros diferentes y determine el numero medio del conjunto de los tres numeros
(El número medio es aquel que no es mayor ni menor)
*/

int main(int argc, char *argv[]) {
	system("color 30");
	float a, b, c;
	
	printf("Ingrese el primer número: ");
	scanf("%f",&a);
	printf("Ingrese el segundo número: ");
	scanf("%f",&b);
	printf("Ingrese el tercer número: ");
	scanf("%f",&c);
	
	if ( (b >= a && a >= c) || (c >= a && a >= b) ){
		printf("El número del medio es %.2f", a);
	}else if ( (a >= b && b >= c) || (c >= b && b >= a) ){
		printf("El número del medio es %.2f", b);
	}else if ( (a >= c && c>=b) || (b >= c && c >= a) ){
		printf("El número del medio es %.2f", c);
	}
	
	return 0;
}

