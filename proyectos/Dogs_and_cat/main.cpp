#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> /* system */
#include <locale.h> /* setlocale */

#include "Producto.h"
using namespace std;

// Objetos
Producto producto;

// Menus y submenus
void menuPrincipal();
void headerTienda();
void menuVentas();
void menuProductos();
void menuProveedores();

int main()
{
  setlocale(LC_ALL, "spanish"); /* Permite imprimir caracteres con tilde */
  menuPrincipal();
  return 0;
}

void menuPrincipal()
{

  int opcion, repetir = 1;

  do
  {
    system("cls");
    headerTienda();
    printf("\t\t\t\t ..:: MENU PRINCIPAL ::.. \n\n");
    printf("\t\t[1]. Ventas\n");
    printf("\t\t[2]. Productos\n");
    printf("\t\t[3]. Proveedores\n");
    printf("\t\t[0]. Salir\n");
    printf("\n\t\tIngrese su opcion: [ ]\b\b");

    scanf("%d", &opcion);

    switch (opcion)
    {
    case 0:
      repetir = 0;
      break;

    case 1:
      break;

    case 2:
      producto.menuInsertar();
      break;

    case 3:
      break;
    }

  } while (repetir);
}

/**
	El encabezao que se muestra en el programa.
*/
void headerTienda()
{
  printf("\n     ======================================================================\n");
  printf("\t\t\t    Dogs and Cat Shop \n");
  printf("\t\t   Tu tienda favorita para mascotas\n");
  printf("     ======================================================================\n\n");
}
