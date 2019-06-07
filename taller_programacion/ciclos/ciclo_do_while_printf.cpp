#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
	system("color ba");
	float tercera, cuarta, num;
	printf("Digite 10 numeros.\n");
	int i = 0;
	
	do {
		i = i+1;
		scanf("%f", &num);
		tercera = pow(num, 3);
		cuarta = (tercera * num);
		printf("Su cubo es %.2f\n",tercera);
		printf("Su cuarta es %.2f\n\n", cuarta);
	} while(i < 10);
	
	return 0;
}
