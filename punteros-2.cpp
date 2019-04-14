#include <iostream>
using namespace std;

int array[5];
int *p;

int main(){

    p = array;
    cout << "Direccion array[0] " << &array << endl;
    cout << "Puntero " << p << endl;

    cin.get();
    return 0;
}