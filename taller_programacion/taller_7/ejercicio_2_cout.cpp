#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color ba");
	
	int obreros = 0;
	float horas = 0;
	float pago_normal=0, pago_extra=0, total_pagar;
	
	cout << "Ingrese la cantidad de obrero de la empresa: ";
	cin >> obreros;
	
	int i = 1;
	do {
		cout << "Obrero " << i << endl;
		cout << "Ingrese la cantidad de horas trabajadas: ";
		cin >> horas;
		
		if (horas > 40){
			pago_normal = 40 * 20;
			pago_extra = (horas-40) * 25;
		} else {
			pago_normal = horas * 20;
			pago_extra = 0;
		}
		total_pagar = pago_normal + pago_extra;
		cout << "El salario del obrero es de: " << total_pagar << endl << endl;
		
		i++;
	} while(i <= obreros);
	
	return 0;
}

