#include <iostream>
using namespace std;

struct miEstructura {
    int a;
} estructura, *puntero;


int main(){
    estructura.a = 12;
    puntero = &estructura;

    cout << puntero << endl;
    cout << puntero->a << endl;

    cin.get();
    return 0;
}
