#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int a;
	printf("Ingrese el número hasta el que desea imprimir numeros pares: ");
	scanf("%d", &a);
	
	for (int i = 0; i <= a; i+=2){
		printf("%d\n", i);
	}
	
	return 0;
}

