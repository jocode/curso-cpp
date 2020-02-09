#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

class Producto
{

private:
  // Atributo de la clase
  int codigo;
  string nombre;
  double precio;
  int cantidad;

  // Estados y respuestas del usuario
  char respuesta;
  bool estado = false; // operacion true|false (Correcta o incorrecta)
  int opcion;

  // Instancias para los archivos
  fstream dbProductos;
  fstream tempProductos;

public:
  // Datos
  string strCode;
  // Metodos
  bool guardar();
  bool modificar(string);
  bool eliminar(string);
  bool existe(string);

  Producto();
  void buscar();
  void listarProductos();
  vector<string> split(const string &s, char delim);

  // Menus
  void menuInsertar();
};

#endif
