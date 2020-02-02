#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

// Funcion que escribira dentro de un archivo de texto plano
void escribir();

int main()
{
  escribir();
  system("pause");
  return 0;
}

void escribir()
{
  // Instanciamos la librería
  ofstream archivo;
  string nombreArchivo, frase;
  
  cout << "Digite el nombre del archivo: ";
  getline(cin, nombreArchivo);

  // file.open(ubicacion, modo[])
  // archivo.open("d://prueba//pruebass.txt", ios::out);
  archivo.open(nombreArchivo.c_str(), ios::out); // Abriendo el archivo. Si el archivo no existe lo crea

  if (archivo.fail())
  {
    cout << "No se puedo arbir el archivo :(";
    system("pause");
    exit(1); // Gracias a Stdlib.h
  }

  /*
  archivo << "Hola que tal?. Mi nombre en Johan" << endl; // Copia algo en el bloc de notas
  archivo << "Agregando mas texto";
  */
  
  cout << "\nDigite el texto del archivo: ";
  getline(cin, frase);
  
  archivo << frase;
  archivo.close();
}
