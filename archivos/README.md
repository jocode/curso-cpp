# Trabajo con archivos en C++

## :clapper: **123 ATS** Escribir en un archivo de texto

Para trabajar con ficheros utilizamos la librería **fstream**. Para más información visitar [files - cplusplus reference](http://www.cplusplus.com/doc/tutorial/files/)

```c++
// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}
```

*Ver ejemplo [escribir.cpp](escribir.cpp)*


## Lectura de un archivo de texto

Para leer un archivo se usa el objeto *ifstream*, donde **_i_** indica input, es decir datos que van a ser leídos.

```cpp
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

void lectura();

int main() {
	
	lectura();
	system("pause");
	return 0;
}


void lectura(){
	ifstream archivo;
	string texto;
	
	archivo.open("programacion.txt", ios::in); // Abriendo el archivo en modo lectura
	
	if (archivo.fail()){
		cout << "Error al abrir el archivo :(";
		exit(1);
	}
	
	// Recorremos todo el archivo de texto con el bucle while
	while (!archivo.eof()){
		getline(archivo, texto);
		cout << texto << endl;
	}
	
	archivo.close(); // Cerramos el archivo
}
```


> **`ios::app`** escribe justo en el lugar donde ha quedado el cursor.
