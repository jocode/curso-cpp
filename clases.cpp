#include <iostream>
using namespace std;

// Definicion de la clase
class Cuentas {
    public:
        int sumaDos(int arg);
        int sumaTres(int arg);

    private:
        int resultado;
};

int Cuentas::sumaDos(int arg){
    resultado = arg+2;
    return resultado;
}

int Cuentas::sumaTres(int arg){
    resultado = arg+3;
    return resultado;
}

int main(){
    // Intancia de la clase (Creacion del objeto)
    Cuentas cuentas;
    cout << "+2 = " << cuentas.sumaDos(2) << endl;
    cout << "+3 = " << cuentas.sumaTres(2) << endl;
    cin.get();
    return 0;
}
