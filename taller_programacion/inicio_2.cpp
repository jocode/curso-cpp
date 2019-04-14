#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color FF");
	float dolares, pesos_colombianos, tasa_cambio;
	printf("\nIngrese la cantidad de dolares $ ");
	scanf("%f", &dolares);
	printf("\nIngrese la tasa actual $ ");
	scanf("%f", &tasa_cambio);
	pesos_colombianos = dolares * tasa_cambio;
	printf("\nSus solares en pesos son: $%.2f", pesos_colombianos);
	
	return 0;
}

