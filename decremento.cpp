#include <iostream>

using namespace std;

int main(){

    int total {0};
    int count {5};

    cout << "Valor de decremento final count--" << endl;
    total = count-- + 6;

    cout << "Total = " << total;
    cout << " Count = " << count << endl << endl;

    cout << "Valor de decremento inicial --count" << endl;
    total = count-- + 6;

    cout << "Total = " << total;
    cout << " Count = " << count;

    return 0;
}