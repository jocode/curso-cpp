#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 0F");
	int a, b;
	printf("Ingrese el numero inferior: ");
	scanf("%d", &a);
	printf("Ingrese el número superior: ");
	scanf("%d", &b);
	
	int i = a;
	printf("Los números pares del Intervalo son: \n");
	while (i <= b){
		if (i%2==0){
			printf("%d\n", i);
		}
		i++;
	}
	
	getch();
	return 0;
}
