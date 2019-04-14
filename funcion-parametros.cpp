/**
 * Funciones con parámetros
*/
#include <iostream>
using namespace std;

// Declaracion de la funcion
void funcion(int a = 10){
    cout << a+3 << endl;
}

int main(){
    // Llamada a la funcion
    funcion();
    funcion(0);
    cin.get();
    return 0;
}