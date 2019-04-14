#include <iostream>
using namespace std;

int main(){

    // Declaración de un array
    char array[5];
    array[0] = 'A';
    array[1] = 'B';
    array[2] = 'C';
    array[3] = 'D';
    array[4] = 'E';

    // Ciclo for
    for (unsigned int i = 0; i < sizeof(array) ; i++){
        cout << array[i] << endl;
    }

    cin.get();
    return 0;
}
