#include <iostream>
#include <stdlib.h>
using namespace std;

/**
10. En un supermercado un cajero captura los precios de los articulos que los clientes compran e indica
a cada cliente cual es el monto de los que deben pagar. Al final del dia indica a su supervisor
cuanto fue lo que cobró en total a todos clientes que pasaron por su caja.
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	float precio, total = 0;
	int clientes;
	
	cout << "Ingrese la cantidad de clientes que debe registrar: ";
	cin >> clientes;
	cout << endl;
	
	int i = 1;
	while (i <= clientes){
		cout << "Ingrese el precio que debe pagar el cliente " << i << ": ";
		cin >> precio;
		total += precio;
		i++;
	}
	
	cout << "\nSe vendieron artículos a " << clientes << " clientes.";
	cout << "\nEl Total vendido en caja es de $" << total;
	
	return 0;
}

