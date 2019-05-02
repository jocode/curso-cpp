#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/**
5. Haga un programa que lea 2 numeros y los imprima de forma ascencente
*/

int main(int argc, char *argv[]) {
	system("color 30");
	float num1, num2;
	
	printf("Ingrese el primer número: ");
	scanf("%f", &num1);
	printf("Ingrese el segundo número: ");
	scanf("%f", &num2);
	
	if (num1 < num2){
		printf("\nLos números ordenados son: %.2f y %.2f", num1, num2);
	} else {
		printf("\nLos números ordenados son: %.2f y %.2f", num2, num1);
	}
	
	return 0;
}

