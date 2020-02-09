#include "Producto.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

#include <sstream>
#include <vector>
using namespace std;

/**
 * Se inicializa el archivo dbProductos
 * */
Producto::Producto()
{
  dbProductos.open("dbProductos.csv", ios::app);
  if (dbProductos.fail())
  {
    cout << "Error al abrir el archivo ";
  }
  dbProductos.close();
}

/*
Funcion para gurdar los productos
*/
bool Producto::guardar()
{

  dbProductos.open("dbProductos.csv", ios::app);

  if (dbProductos.fail())
  {
    estado = false;
    cout << "NO se pudo abrir el archivo ";
    exit(1);
    return false;
  }
  printf("\t\t Ingrese el nombre del producto: ");
  cin >> nombre;
  printf("\t\t Ingrese el precio del producto ($): ");
  cin >> precio;
  printf("\t\t Ingrese la cantidad del producto: ");
  cin >> cantidad;

  dbProductos << codigo << "," << nombre << "," << precio << "," << cantidad << endl;
  dbProductos.close();

  cout << "\n\t\t..:: El registro fue almacenado correctamente ::..\n\n";

  return true;
}

/**
 * Mostrar todos los productos de la tienda.
*/
void Producto::listarProductos()
{
  string linea;

  dbProductos.open("dbProductos.csv", ios::in); // Abriendo el archivo en modo lectura

  if (dbProductos.fail())
  {
    cout << "No hay informacion para mostrar :(" << endl;
  }

  printf(" ------------------------------------------------------------------------------\n");
  printf("%18s %18s %18s %18s\n", "CODIGO", "NOMBRE", "PRECIO $", "CANTIDAD");
  printf(" ------------------------------------------------------------------------------\n");

  // Recorremos todo el archivo de texto con el bucle while
  while (!dbProductos.eof())
  {
    getline(dbProductos, linea); // Se imprime cada celda del texto.
    for (auto data : split(linea, ','))
      printf("%18s", data.c_str());
    cout << endl;
  }
  printf(" ------------------------------------------------------------------------------\n");

  dbProductos.close(); // Cerramos el archivo
}

/**
 * Busca el producto por código. 
*/
void Producto::buscar()
{
  string search_codigo;
  string linea;
  bool encontrado = false;
  dbProductos.open("dbProductos.csv", ios::in);

  cout << "El codigo a buscar: " << endl;
  cin >> search_codigo;

  while (!dbProductos.eof())
  {
    getline(dbProductos, linea);
    // Se imprime cada celda del texto.
    for (auto data : split(linea, ','))
    {
      if (data == search_codigo)
      {
        encontrado = true;
        goto theEnd;
      }
    }
  }
theEnd:

  if (!encontrado)
    cout << "\n ..:: El producto no Existe ::.. " << endl;
  else
    for (auto data : split(linea, ','))
      cout << data << "\t";

  dbProductos.close();

  cout << endl;
  system("PAUSE");
}

/**
 * Busca si el registro existe
 **/
bool Producto::existe(string cod)
{
  string linea;
  vector<string> product;
  bool encontrado = false;
  dbProductos.open("dbProductos.csv", ios::in);

  while (!dbProductos.eof())
  {
    getline(dbProductos, linea);
    product = split(linea, ',');
    for (auto data : split(linea, ','))
    {
      if (data == cod)
        encontrado = true;
      break;
    }
  }
  dbProductos.close();
  return encontrado;
}

/**
 * Modifica los productos almacenados
 * */
bool Producto::modificar(string search_code)
{
  string linea;
  vector<string> product;
  estado = false;

  dbProductos.open("dbProductos.csv", ios::in);
  tempProductos.open("dbProductosTemp.csv", ios::out);

  while (!dbProductos.eof())
  {
    getline(dbProductos, linea);
    product = split(linea, ',');

    for (auto item : split(linea, ','))
    {
      if (item == search_code)
      {
        printf("\n\t\t------------------------------------");
        printf("\n\t\t Codigo: %s", product[0].c_str());
        printf("\n\t\t Nombre: %s", product[1].c_str());
        printf("\n\t\t Precio $: %s", product[2].c_str());
        printf("\n\t\t Cantidad: %s", product[3].c_str());
        printf("\n\t\t------------------------------------\n");

        printf("\n\n\t\t ...Ingrese los nuevos valores...\n\n");

        printf("\t\t Ingrese el nombre del producto: ");
        cin >> nombre;
        printf("\t\t Ingrese el precio del producto ($): ");
        cin >> precio;
        printf("\t\t Ingrese la cantidad del producto: ");
        cin >> cantidad;

        tempProductos << product[0].c_str() << "," << nombre << "," << precio << "," << cantidad << endl;
        estado = true;
      }
      else
      {
        tempProductos << linea << endl;
      }

      break; // Para que salte a la siguiente iteracion (Si no lo hago asi da error)
    }
  }

  dbProductos.close();
  tempProductos.close();

  remove("dbProductos.csv");
  rename("dbProductosTemp.csv", "dbProductos.csv");

  return estado;
}

bool Producto::eliminar(string search_code)
{
  string linea;
  vector<string> product;
  estado = false;

  cout << "\t\t Esta segur@ que deseas eliminar el registro? [S/N]: ";
  cin >> respuesta;

  if (respuesta == 'S' || respuesta == 's')
  {

    dbProductos.open("dbProductos.csv", ios::in);
    tempProductos.open("dbProductosTemp.csv", ios::out);

    while (!dbProductos.eof())
    {
      getline(dbProductos, linea);
      product = split(linea, ',');

      for (auto item : split(linea, ','))
      {
        // Se guardar todos lo registros menos el que se va a borrar
        if (item == search_code)
          estado = true;
        else
        {
          tempProductos << linea << endl;
        }

        break; // Para que salte a la siguiente iteracion (Si no lo hago asi da error)
      }
    }

    dbProductos.close();
    tempProductos.close();

    remove("dbProductos.csv");
    rename("dbProductosTemp.csv", "dbProductos.csv");
  }

  return estado;
}

/**
 *  Menu para realizar las operaciones de Producto
 */
void Producto::menuInsertar()
{

  bool repeat = true;

  do
  {
    system("cls");
    printf("\n     ======================================================================\n");
    printf("\t\t\t ..:: LISTADO DE PRODUCTOS ::..");
    printf("\n     ======================================================================\n\n");
    listarProductos();
    printf("\n\t\t Escoge una  opcion \n\n");
    printf("\t\t[1]. Agregar Producto\n");
    printf("\t\t[2]. Modificar Producto\n");
    printf("\t\t[3]. Eliminar Producto\n");
    printf("\t\t[0]. Volver al menu principal\n");
    printf("\n\t\tIngrese su opcion: [ ]\b\b");

    // Opciones
    scanf("%d", &opcion);

    switch (opcion)
    {

    case 0:
      repeat = false;
      break;

    case 1:
      // Validaciones para registrar producto
      do
      {
        cout << "\n\t\t Ingrese el codigo del producto: ";
        cin >> strCode;

        if (!existe(strCode))
        {
          codigo = stoi(strCode);
          guardar();
        }
        else
          cout << "\n\t\t ..:: El codido del producto YA Existe ::.. " << endl;

        cout << "\n\t\t Deseas agregar mas productos [S/N]?: ";
        cin >> respuesta;

      } while (respuesta == 'S' || respuesta == 's');
      break;

    // Modificar
    case 2:
      do
      {
        cout << "\n\t\t Ingrese el codigo del producto a modificar: ";
        cin >> strCode;
        if (!existe(strCode))
        {
          cout << "\n\t\t ..:: El producto NO Existe ::.. " << endl;
        }
        else
        {
          modificar(strCode);
        }

        cout << "\n\t\t Deseas modificar mas productos [S/N]?: ";
        cin >> respuesta;
      } while (respuesta == 'S' || respuesta == 's');
      break;

    // Eliminar
    case 3:
      cout << "\n\t\t Ingrese el codigo del producto a eliminar: ";
      cin >> strCode;
      if (existe(strCode))
      {
        eliminar(strCode);
      }
      else
      {
        cout << "\n\t\tEl producto NO existe";
        system("\n\t\tPAUSE");
      }
      break;
    }

  } while (repeat);
}

/**
 * Función que extrae cada campo del registro (Producto)
 * */
vector<string> Producto::split(const string &s, char delim)
{
  vector<string> result;
  stringstream ss(s);
  string item;

  while (getline(ss, item, delim))
  {
    result.push_back(item);
  }

  return result;
}
