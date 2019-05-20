#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a, b;
	printf("Numeros Pares.\n");
	printf("Ingrese el numero inferior: ");
	scanf("%d", &a);
	printf("Ingrese el número superior: ");
	scanf("%d", &b);
	
	for (int i = a; i<=b; i++){
		if (i%2==0){
			printf("%d\n", i);
		}
	}
	
	return 0;
}

