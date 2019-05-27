// Comparar una cadena de texto -strcmp()
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]) {
	
	char genero[30];
	printf("Ingres el género: ");
	scanf("%s", genero);

	// Si las cadenas son iguales, el resultado es 0
	if ( strcmp(genero, "masculino") == 0){
		cout << "La cadena es igual";
	} else {
		cout << "La cadena no es igual";
	}
	
	/*
	string a = tmp;
	cout << (a == "hola");*/
	
	return 0;
}

