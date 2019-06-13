#include <iostream>
#include <stdio.h>
#include <stdlib>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int amarilla = 0, rosa = 0, roja = 0, verde = 0, azul = 0, cantidad_autos = 0, placa = 0;
	
	cout << "Ingrese la cantidad de autos que ingresaron: ";
	cin >> cantidad_autos;
	
	int i = 1;
	do {
		cout << "Digite el último dígito de la placa: ";
		cin >> placa;
		
		if (placa == 1 || placa == 2){
			amarilla++;
		} else if (placa == 3 || placa == 4){
			rosa++;
		} else if (placa == 5 || placa == 6){
			roja++;
		} else if (placa == 7 || placa == 8){
			verde++;
		} else if (placa == 9 || placa == 0){
			azul++;
		} 
		i++;
	} while(i <= cantidad_autos);
	
	cout << "\nHay " << amarilla << " autos con calcomania amarilla.";
	cout << "\nHay " << rosa << " autos con calcomania rosa.";
	cout << "\nHay " << roja << " autos con calcomania roja.";
	cout << "\nHay " << verde << " autos con calcomania verde.";
	cout << "\nHay " << azul << " autos con calcomania azul.";
	
	return 0;
}

