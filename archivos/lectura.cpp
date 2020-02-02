#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

void lectura();

int main() {
	
	lectura();
	system("pause");
	return 0;
}


void lectura(){
	ifstream archivo;
	string texto;
	
	archivo.open("programacion.txt", ios::in); // Abriendo el archivo en modo lectura
	
	if (archivo.fail()){
		cout << "Error al abrir el archivo :(";
		exit(1);
	}
	
	// Recorremos todo el archivo de texto con el bucle while
	while (!archivo.eof()){
		getline(archivo, texto);
		cout << texto << endl;
	}
	
	archivo.close(); // Cerramos el archivo
}
