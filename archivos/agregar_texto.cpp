#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

void agregar();

int main() {
	
	agregar();
	system("pause");
	return 0;
}


void agregar(){
	// Queremos escribir sin borrrar lo que se tenia
	ofstream archivo;
	string texto;
	
	archivo.open("programacion.txt", ios::app); // Abrimos el archivo en modo append
	
	if (archivo.fail()){
		cout << "NO se pudo abrir el archivo ";
		exit(1);
	}
	
	cout << "Digite el texto que quiere agregar: ";
	getline(cin, texto);
	
	archivo << texto << endl;
	
	archivo.close(); // Cerramos el archivo.
}
	
