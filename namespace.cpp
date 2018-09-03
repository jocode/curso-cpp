#include <iostream>
using namespace std;

// Declaracion del espacio de nombre
namespace ciudad{
    int calle;
}

namespace pueblo {
    int calle = 10;
}

// Usamos el espacio de nombre ciudad
using namespace ciudad;

int main(){
    calle = 12;
    cout << "Pueblo: " << pueblo::calle << endl;
    cout << "Calle: " << pueblo::calle << endl;
    cin.get();
    return 0;
}