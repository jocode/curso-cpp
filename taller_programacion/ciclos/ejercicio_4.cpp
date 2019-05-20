#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int tabla, n, i;
	
	cout << "¿Qué tabla de multiplicar desea?: ";
	cin >> tabla;
	cout << "Hasta que número quiere mostrar la tabla?: ";
	cin >> n;
	
	for (i=1; i <= n; i++){
		cout << "\n" << tabla << "*" << i << " = " << (tabla*i);
	}
	
	return 0;
}
