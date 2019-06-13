#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float SUELDO_BASE = 0;
	int vendedores = 0;
	float venta = 0, comision = 0, total = 0, total_venta = 0;
	
	cout << "Ingrese la cantidad de vendedores de la empresa: ";
	cin >> vendedores;
	cout << "Ingrese el sueldo base de los vendedores: ";
	cin >> SUELDO_BASE;
	
	int i = 1;
	do {
		
		cout << "\nIngrese las ventas del ventedor " << i << endl;
		int j = 1;
		do {
			cout << "Venta " << j << ": ";
			cin >> venta;
			total_venta += venta;
			
			j++;
		} while(j <= 3);
		
		comision = (total_venta * 0.1);
		total = SUELDO_BASE + comision;
		
		cout << "----------------------------\n";
		cout << "El vendendor " << i << " recibe: ";
		cout << "\nSueldo base: " << SUELDO_BASE;
		cout << "\nComisión: " << comision;
		cout << "\nEl Total a pagar al vendedor es de: " << total ;
		cout << "\n-----------------------------\n\n";
		
		i++;
	} while(i <= vendedores);
	
	return 0;
}

