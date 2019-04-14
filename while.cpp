#include <iostream>
using namespace std;

int main(){

    cout << "Ciclo while " << endl;
    int i = 0;
    while (i <= 5) {
        cout << "Valor de i: " << i << endl;
        // Aumentamos el valor de la variable
        i++;
    }

    cout << "\nCiclo Do while " << endl;
    int a = 10;
    do {
        cout << "Valor de a: " << a << endl;
        // Aumentamos el valor de la variable
        a++;
    } while (a <= 5);

    cin.get();
    return 0;
}
