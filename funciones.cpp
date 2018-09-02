#include <iostream>
using namespace std;

int suma;
int num1 = 5;
int num2 =6;

// Funcion suma
int sumar(int a, int b){
	return a+b;
}

// Funcion que no retorna nada
void miFuncion(){
	cout << "Yo no retorno nada" << endl;
}

// Funcion principal
int main(){
    suma = sumar(num1, num2);
    cout << suma << endl;
    miFuncion();
    cin.get();
    return 0;
}


