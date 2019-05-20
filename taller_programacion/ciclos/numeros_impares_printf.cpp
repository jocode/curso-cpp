#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a;
	printf("Ingrese el número hasta el que desea imprimir numeros impares: ");
	scanf("%d", &a);
	
	for (int i = 1; i <= a; i+=2){
		printf("%d\n", i);
	}
	
	return 0;
}

