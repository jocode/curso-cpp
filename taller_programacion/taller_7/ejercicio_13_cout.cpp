#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	float masa = 0, presion = 0, volumen = 0, temperatura = 0;
	int vehiculos;
	float promedio_masa = 0;
	
	cout << "Ingrese la cantidad de Vehículos: ";
	cin >> vehiculos;
	
	int i = 1;
	do {
		masa = 0;
		cout << "\nVehículo " << i << ": ";
		cout << "\nIngrese la masa: ";
		cin >> masa;
		cout << "Ingrese la presión: ";
		cin >> presion;
		cout << "Ingrese el volumen: ";
		cin >> volumen;
		cout << "Ingrese la temperatura: ";
		cin >> temperatura;
		
		masa = (presion*volumen)/(0.37*(temperatura + 460));
		
		promedio_masa += masa;
		cout << "La masa del vehículo es de " << masa << endl;
		
		i++;
	} while(i<=vehiculos);
	
	cout << "\n\nEl promedio de masa de los " << vehiculos << " vehiculos es de: " << (promedio_masa/vehiculos);
	
	return 0;
}

