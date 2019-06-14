#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	float last_peso, peso, promedio; 
	int persona = 1, basculas = 10;
	
	do {
		cout << "\nIngrese el último peso de la " << persona << " persona: ";
		cin >> last_peso;
		cout << "\nIngrese los pesos de las diferentes básculas.\n";
		promedio = 0;
		
		int i = 1;
		do {
			cout << "Ingrese peso de la báscula " << i << ": ";
			cin >> peso;
			promedio += peso;
			i++;
		} while(i<=basculas);
		
		promedio = (promedio/basculas);
		
		if (promedio > last_peso){
			cout << "SUBIÓ de Peso. Subió " << (promedio - last_peso) << " kilos\n";
		} else if (promedio < last_peso){
			cout << "BAJÓ de Peso. Bajó " << (last_peso - promedio) << " kilos\n";
		} else {
			cout << "Se mantuvo con el mismo peso\n";
		}
		
		persona++;
	} while( persona <= 5);
	
	return 0;
}

