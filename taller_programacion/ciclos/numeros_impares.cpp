#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a;
	cout << "Ingrese el número hasta el que desea imprimir numeros impares: ";
	cin >> a;
	
	for (int i = 1; i <= a; i+=2){
		cout << i << endl;
	}
	
	return 0;
}

