#include <iostream>

using namespace std;

int numero1 = 12;
int numero2 = 14;

bool booleana = true;
int main(){
    if (numero1 < numero2){
        cout<<"Es menor"<<endl;
    } else if (numero1==numero2){
        cout<<"Son iguales"<<endl;
    } else {
        cout<<"Es mayor"<<endl;
    }
    cin.get();
    return 0;
}