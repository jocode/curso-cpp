#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
* 11. El dueño de una tienda compra un articulo a un precio determinado. Obtener el precio en que lo debe vender
* para obtener una ganancia del 35%
*/

float precio_compra, precio_venta;
const float per_ganancias = 35;

int main(int argc, char *argv[]) {
	system("color 02");
	
	cout << "Ingrese el precio del articulo comprado: ";
	cin >> precio_compra;
	
	precio_venta = precio_compra * (1 + (per_ganancias/100));
	
	cout << "\nEl artículo lo debe vender a $" << precio_venta << " para obtener una ganancia del " << per_ganancias << "%" << ends;
	
	return 0;
}

