/**
* Escriba un programa en c++, usando funciones, que reciba una lista de hasta 20 números y los ordene de menor a mayor y de mayor a menor.
*/
#include <iostream>
using namespace std;

void ordenarMenorAMayor(double lista[], int cantidad);

int main(){
	int cantidad = 0;
	double lista[20];
	
	do {
		cout << "Digite la cantidad  de números que desea ingresar: ";
		cin >> cantidad;
	} while(cantidad > 20);
	
	for (int i = 0; i < cantidad; i++){
		cout << "Ingrese el " << i+1 << " numero: ";
		cin >> lista[i];
	}
	ordenarMenorAMayor(lista, cantidad);
	return 0;
}

/**
* Ordenamiento de datos usando el método burbuja que consiste
* numeroActual > numeroSiguiente { cambiamos valores }. Se usa ciclo anidado
*/
void ordenarMenorAMayor(double lista[], int cantidad){
	
	double menor;
	
	// Iteración de las posicione, iniciamos en 1, para iterar la cantidad de veces -1
	for(int i=1; i < cantidad; i++) {
		
		// Ordenamiento de número, se inicializa en 0, y en cada iteración, le restamos a la cantidad el incremento de i
		for(int j=0; j < cantidad - i; j++) {
			// numeroActual > numeroSiguiente
			if( lista[j] > lista[j+1] ){
				// Cambiamos la posicion
				menor = lista[j+1]; 
				lista[j+1] = lista[j];
				lista[j] = menor;
			}
		}
	}
	
	cout << "\n Orden de Menor a Mayor: " << endl;
	for(int i=0; i < cantidad; i++) {
		cout<< lista[i] << endl;
	}
	
	cout << "\n Orden de Mayor a Menor: " << endl;
	for(int i = (cantidad-1); i >= 0; i--) {
		cout<< lista[i] << endl;
	}
	
}
