#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int diputados = 0;
	int respuesta = 0;
	float si = 0, no = 0, abstiene = 0;
	
	cout << "Ingrese la cantidad de diputados: ";
	cin >> diputados;
	
	int i = 1;
	do {
		cout << "\nDiputado " << i;
		cout << " ¿Está a favor del Tratado del libre comercio? Responda\n";
		cout << "(1) Si\n(2)No\n(3) Se abstiene de votar\n: ";
		cin >> respuesta;
		
		if (respuesta == 1){
			si++;
		} else if (respuesta == 2){
			no++;
		} else if (respuesta == 3){
			abstiene++;
		}
		
		i++;
	} while(i<=diputados);
	
	cout << "\nEl procentaje que votó SI fué del: " << (si*100/diputados) << "%";
	cout << "\nEl procentaje que votó NO fué del: " << (no*100/diputados) << "%";
	cout << "\nEl procentaje que se abstuvo de votar fué del: " << (abstiene*100/diputados) << "%";
	
	return 0;
}

