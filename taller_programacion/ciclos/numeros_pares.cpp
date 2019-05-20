#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a;
	cout << "Ingrese el número hasta el que desea imprimir numeros pares: ";
	cin >> a;
	
	for (int i = 0; i <= a; i+=2){
		cout << i << endl;
	}
	
	return 0;
}

