#include <iostream>
using namespace std;

int numero = 3;
int *puntero = &numero; // Guardamos la dirección en memoria en la variable `puntero`

int main(){

    // Con & mostramos la dirección de memoria de la variable
    cout << &numero << endl;

    // Mostrar la dirección en memoria con puntero
    cout << puntero << endl;

    // Muestra el valor de la dirección en memoria
    cout << *puntero << endl;

    // `*` Es un operador de indirección

    cin.get();
    return 0;
}