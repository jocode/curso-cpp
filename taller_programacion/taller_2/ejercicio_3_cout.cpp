#include <iostream>
#include <stdlib.h>
using namespace std;

/**
3. En un almacen se hace un 20% de descuento a los clientes cuya compra supere los $1000
¿Cuál será la cantidad que pagará la persona por su compra?
*/

int main(int argc, char *argv[]) {
	system("color 30");
	
	float compra, valor_pagar, descuento = 0.2;
	
	cout << "Ingrese el total de la compra: ";
	cin >> compra;
	
	if (compra > 1000.0){
		valor_pagar = compra - (compra*descuento);
		cout << "\nFelicidades, tienes un 20% de descuento en la compra" << endl;
		cout << "El total a pagar es de $" << valor_pagar;
	} else {
		cout << "\nOuhh, no aplica descuento " << endl;
		cout << "Debes pagar $" << compra;
	}
	
	return 0;
}

