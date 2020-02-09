#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include <stdio.h>
#include <vector> //for std::vector
#include<limits> // Para validación de inputs
#include <ctime> // Trabajo con fecha del PC
using namespace std;

class Producto
{

private:
	string nombre;
	double precio;
	int cantidad;

public:
	Producto();
	Producto(string _nombre, long double _precio, int _cantidad)
	{
		nombre = _nombre;
		precio = _precio;
		cantidad = _cantidad;
	}

	int getCantidad(){return cantidad;}

	double getPrecio(){return precio;}

	string getNombre(){return nombre;}

	void setPrecio(long double _precio){precio = _precio;}

	void setCantidad(int _cantidad){cantidad = _cantidad;}
	
};

class Venta {
	
private:
	string nombre, apellido, producto, fecha, cedula;
	double costo;
	int cantidad;
	
public:
	Venta();
	Venta(string _nombre, string _apellido, string _cedula, string _producto, int _cantidad, double _costo, string _fecha){
		nombre = _nombre;
		cedula = _cedula;
		producto = _producto;
		apellido = _apellido;
		cantidad = _cantidad;
		costo = _costo;
		fecha = _fecha;
	}
		
	string getCliente() {return nombre;}
	string getCedula() {return cedula;}
	string getProducto() {return producto;}
	double getCosto() {return costo;}
	int getCantidad() {return cantidad;}
	string getFecha() {return fecha;}
	string getApellido() {return apellido;}
	
};


class Proveedor {
private:
	string nombre, producto, fecha;
	double precio;
	int cantidad;
	
public:
	Proveedor(string _nombre, string _producto, double _precio, int _cantidad, string _fecha){
		nombre = _nombre;
		producto = _producto;
		precio = _precio;
		cantidad = _cantidad;
		fecha = _fecha;
	}
	
	string getProveedor(){return nombre;}
	string getProducto(){return producto;}
	double getPrecio(){return precio;}
	int getCantidad(){return cantidad;}
	string getFecha(){return fecha;}
};


// Menus y submenus
void menuPrincipal();
void headerTienda();
void menuVentas();
void menuListaVentas();
void menuProveedores();
void menuProductos();
void es_numero(string number);
string getDate();

vector<Producto> listaProductos;
vector<Venta> listaVentas;
vector<Proveedor> listaProveedor;


int main()
{
	
	// Objetos de productos
	Producto shampoo = Producto("Shampoo en envase x 1 litro", 2500, 10);
	Producto jabon = Producto("Jabon para ba\244o", 200, 20);
	Producto perfumes = Producto("Perfume x 200 ml", 12500, 5);
	Producto com_corriente = Producto("Bolsa comida Corriente x 1 Kg", 5500, 30);
	Producto com_premium = Producto("Bolsa Comida Premiun x 1 Libra", 9900, 20);
	Producto collares = Producto("Collares para paseo", 7000, 15);
	Producto huesos = Producto("Bolsa huesos x 250 gr", 3300, 40);

	listaProductos.push_back(shampoo);
	listaProductos.push_back(jabon);
	listaProductos.push_back(perfumes);
	listaProductos.push_back(com_corriente);
	listaProductos.push_back(com_premium);
	listaProductos.push_back(collares);
	listaProductos.push_back(huesos);
	
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
		printf("\t\t[1]. Registar Venta\n");
		printf("\t\t[2]. Ventas Realizadas\n");
		printf("\t\t[3]. Comprar a proveedores.\n");
		printf("\t\t[4]. Productos \n");
		printf("\t\t[0]. Salir\n");
		printf("\n\t\tIngrese su opci\242n: [ ]\b\b");
		
		cin >> opcion;
		
		while(true)
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"\n\t\tHas ingresado una opción incorrecta.\n\t\tIngrese nuevamente la opci\242n: ";
				cin>>opcion;
			}
			if(!cin.fail())
				break;
		}
		

		switch (opcion)
		{
		case 0:
			repetir = 0;
			break;

		case 1:
			menuVentas();
			break;
			
		case 2:
			menuListaVentas();
			break;

		case 3:
			menuProveedores();
			break;

		case 4:
			menuProductos();
			break;
			
		default:
			cout << "\n\t\t Debes elegir una opci\243n correcta";
			menuProductos();
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

void menuVentas()
{
	string nombre, apellido, producto, fecha, cedula;
	int opcion = 0, cantidad = 0, stock = 0;
	
	system("cls");
	printf("\n     ======================================================================\n");
	printf("\t\t\t ..:: REGISTRAR NUEVA VENTA ::..");
	printf("\n     ======================================================================\n\n");
	printf("\n\t\t ¿Qu\202 producto deseas vender? \n\n");
	printf("\t\t[1]. Shampoo x 1 litro [$ %.2f]\n", listaProductos.at(0).getPrecio() );
	printf("\t\t[2]. Jabones para ba\244o [$ %.2f]\n", listaProductos.at(1).getPrecio() );
	printf("\t\t[3]. Perfumes por envase de 200ml [$ %.2f]\n", listaProductos.at(2).getPrecio() );
	printf("\t\t[4]. Bolsas de comida corriente x 1Kg [$ %.2f]\n", listaProductos.at(3).getPrecio() );
	printf("\t\t[5]. Bolsas de comida premium x 1 Lb [$ %.2f]\n", listaProductos.at(4).getPrecio() );
	printf("\t\t[6]. Collares para paseo [$ %.2f]\n", listaProductos.at(5).getPrecio() );
	printf("\t\t[7]. Bolsas de hueso para perro x 250 gr [$ %.2f]\n", listaProductos.at(6).getPrecio() );
	printf("\t\t[0]. Regresar\n");
	printf("\n\t\tIngrese su opci\242n: [ ]\b\b");
	cin >> opcion;
	
	if (opcion >= 1 && opcion <= 7){
		if (listaProductos.at(opcion-1).getCantidad() == 0){
			cout << "\n\t\tNo hay existencias disponibles del producto, debes comprar a proveedores.\n\n\t\t";
			system("PAUSE");
			menuVentas();
		} else {
			stock = listaProductos.at(opcion-1).getCantidad();
			printf("\n\t\t ==> Has seleccionado %s (%d en Stock) <== \n", listaProductos.at(opcion-1).getNombre().c_str(), stock);
			printf("\t\t Ingrese el nombre del cliente: ");
			cin >> nombre;
			printf("\t\t Ingrese el apellido del cliente: ");
			cin >> apellido;
			printf("\t\t Ingrese la c\202dula del cliente: ");
			cin >> cedula;
			
			printf("\t\t Ingrese la cantidad del productos a comprar: ");
			cin >> cantidad;
			
			do {
				printf("\t\t Ingrese la cantidad: ");
				cin >> cantidad;
				
				while(true)
				{
					if(cin.fail())
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(),'\n');
						cout<<"\n\t\t Has ingresado un valor incorrecto.\n\t\t Ingrese nuevamente la cantidad: ";
						cin>>cantidad;
					}
					if(!cin.fail())
						break;
				}
			} while (cantidad <= 0);
			
			
			while ( cantidad > stock ) {
				printf("\n\t\t La cantidad a comprar excede la cantidad en stock [%d].\n", stock);
				printf("\t\t Ingrese la nuevamente la cantidad a comprar: ");
				cin >> cantidad;
				// Si la cantidad a comprar es mayor a la de existencia
			};
			
			listaProductos.at(opcion-1).setCantidad(stock - cantidad);
			
			printf("\n\t\t La fecha de la compra es: %s", getDate().c_str());
		
			// Objeto Venta, se registra una nueva venta
			Venta nueva_venta = Venta(nombre, apellido, cedula, listaProductos.at(opcion-1).getNombre(), cantidad, 
								cantidad*listaProductos.at(opcion-1).getPrecio(), getDate());
			listaVentas.push_back(nueva_venta);
			
			cout <<"\n\t\t Venta registrada satisfactoriamente. \n\n" ;
			
			char respuesta;
			cout <<"\n\t\t¿Deseas realizar otra venta? [S/N]: ";
			cin >> respuesta;
			if (respuesta == 'S' || respuesta == 's')
				menuVentas();
			else 
				menuListaVentas();
			
		}
	}
	
}

void menuListaVentas(){
	system("cls");
	printf("\n     ======================================================================\n");
	printf("\t\t\t ..:: VENTAS REALIZADAS ::..");
	printf("\n     ======================================================================\n\n");
	
	printf(" ------------------------------------------------------------------------------------------------------------------\n");
	printf("%20s %15s %25s %20s %15s %15s\n", "CLIENTE", "CEDULA", "PRODUCTO", "PRECIO $", "CANTIDAD", "FECHA");
	printf(" ------------------------------------------------------------------------------------------------------------------\n");
	
	// Se recorre los elementos con foreach
	for (auto venta : listaVentas){
		cout << left;
		cout << "\t" << setw(15) << venta.getCliente() << setw(15) << right << venta.getCedula() 
			<< setw(30) << right << venta.getProducto() << setw(12) << right << venta.getCosto()
			<< setw(12) << right << venta.getCantidad() << setw(10) << right <<"\t" << venta.getFecha() << endl;
	}
	
	printf(" ------------------------------------------------------------------------------------------------------------------\n");
	printf("\n\t\t[1]. Nueva Venta");
	printf("\n\t\t[0]. Regresar\n");
	int opcion;
	printf("\n\t\tIngrese su opci\242n: [ ]\b\b");
	cin >> opcion;
	
	if (opcion == 1){
		menuVentas();
	}
	
}


/**
* Menu Productos, muestra la cantidad de productos y la opción de cambiar el precio.
*/
void menuProductos()
{
	int opcion;
	long double nuevo_precio;

	system("cls");
	printf("\n     ======================================================================\n");
	printf("\t\t\t ..:: LISTADO DE PRODUCTOS (INVENTARIO) ::..");
	printf("\n     ======================================================================\n\n");

	printf(" ------------------------------------------------------------------------------\n");
	printf("%18s %30s %10s\n", "NOMBRE", "PRECIO $", "CANTIDAD");
	printf(" ------------------------------------------------------------------------------\n");
	// Se recorre los elementos con foreach
	for (auto data : listaProductos){
		cout << left;
		cout << "\t" << setw(30) << data.getNombre().c_str() << setw(10) << right << data.getPrecio() << setw(10) << right << data.getCantidad() << endl;
	}
		

	printf(" ------------------------------------------------------------------------------\n");
	printf("\n\t\t Selecciona el producto al que deseas modificar el precio. \n\n");
	printf("\t\t[1]. Shampoo x 1 litro\n");
	printf("\t\t[2]. Jabones para ba\244o\n");
	printf("\t\t[3]. Perfumes por envase de 200ml\n");
	printf("\t\t[4]. Bolsas de comida corriente x 1Kg\n");
	printf("\t\t[5]. Bolsas de comida premium x 1 Lb\n");
	printf("\t\t[6]. Collares para paseo\n");
	printf("\t\t[7]. Bolsas de hueso para perro x 250 gr\n");
	printf("\t\t[0]. Regresar\n");

	printf("\n\t\tIngrese su opci\242n: [ ]\b\b");
	cin >> opcion;
	
	if (opcion >= 1 && opcion <= 7 ){
		
		do {
			printf("\n\t\tIngrese el nuevo precio del %s ($): ", listaProductos[opcion-1].getNombre().c_str());
			cin >> nuevo_precio;
			
			while(true)
			{
				if(cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(),'\n');
					cout<<"\n\t\t Has ingresado un valor incorrecto.\n";
					printf("\n\t\tIngrese el nuevo precio del %s ($): ", listaProductos[opcion-1].getNombre().c_str());
					cin>>nuevo_precio;
				}
				if(!cin.fail())
					break;
			}
		} while (nuevo_precio <= 0);
		
		listaProductos[opcion-1].setPrecio(nuevo_precio);
		cout <<"\n\t\tPrecio guardado satisfactoriamente. \n\n\t\t" ;
		system("PAUSE");
		menuProductos();
	}

}

/**
* Seccion del menu a proveedores, se registran las compras realizadas a los proveedores
*/
void menuProveedores()
{


	int opcion;
	string nombre, producto, fecha;
	double precio;
	int cantidad;
	
	system("cls");
	printf("\n     ======================================================================\n");
	printf("\t\t\t ..:: COMPRA A PROVEEDORES ::..");
	printf("\n     ======================================================================\n\n");
	
	printf(" --------------------------------------------------------------------------------------------------\n");
	printf("%18s %25s %20s %10s %10s\n", "PROVEEDOR", "PRODUCTO", "PRECIO $", "CANTIDAD", "FECHA");
	printf(" --------------------------------------------------------------------------------------------------\n");
	// Se recorre los elementos con foreach
	for (auto proveedor : listaProveedor){
		cout << left;
		cout << "\t" << setw(20) << proveedor.getProveedor().c_str() << setw(10) << right << proveedor.getProducto() 
			<< setw(10) << right << proveedor.getPrecio() << setw(10) << right << proveedor.getCantidad() 
			<< setw(10) << right << "\t" << proveedor.getFecha() << endl;
	}
	
	
	printf(" --------------------------------------------------------------------------------------------------\n");
	printf("\n\t\t Selecciona el producto que deseas comprar al proveedor. \n\n");
	printf("\t\t[1]. Shampoo x 1 litro\n");
	printf("\t\t[2]. Jabones para ba\244o\n");
	printf("\t\t[3]. Perfumes por envase de 200ml\n");
	printf("\t\t[4]. Bolsas de comida corriente x 1Kg\n");
	printf("\t\t[5]. Bolsas de comida premium x 1 Lb\n");
	printf("\t\t[6]. Collares para paseo\n");
	printf("\t\t[7]. Bolsas de hueso para perro x 250 gr\n");
	printf("\t\t[0]. Regresar\n");
	
	printf("\n\t\tIngrese su opci\242n: [ ]\b\b");
	cin >> opcion;
	
	if (opcion >= 1 && opcion <= 7 ){
		int stock = listaProductos.at(opcion-1).getCantidad();
		printf("\n\t\t ==> Has seleccionado comprar %s <== \n", listaProductos.at(opcion-1).getNombre().c_str());
		
		printf("\t\t Ingrese el nombre del Proveedor: ");
		cin >> nombre;
		
		do {
			printf("\t\t Ingrese el precio de la compra: ");
			cin >> precio;
			
			while(true)
			{
				if(cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(),'\n');
					cout<<"\n\t\t Has ingresado un valor incorrecto.\n\t\t Ingrese nuevamente el precio: ";
					cin>>precio;
				}
				if(!cin.fail())
					break;
			}
		} while (precio <= 0);
		
		

		do {
			printf("\t\t Ingrese la cantidad del productos a comprar: ");
			cin >> cantidad;
			
			while(true)
			{
				if(cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(),'\n');
					cout<<"\n\t\t Has ingresado un valor incorrecto.\n\t\t Ingrese nuevamente la cantidad: ";
					cin>>cantidad;
				}
				if(!cin.fail())
					break;
			}
		} while (cantidad <= 0);
		
		// Se suma la cantidad comprada al Stock de productos.
		listaProductos.at(opcion-1).setCantidad(stock + cantidad);
		
		printf("\n\t\t La fecha de la compra es: %s", getDate().c_str());
		
		// Objeto Venta, se registra una nueva venta
		Proveedor compra_proveedor = Proveedor(nombre, listaProductos.at(opcion-1).getNombre(), precio, cantidad, getDate());
		listaProveedor.push_back(compra_proveedor);
		
		cout <<"\n\t\tCompra a proveedor registrada satisfactoriamente. \n\n\t\t" ;
		system("PAUSE");
		menuProveedores();
	}
	
}

string getDate(){
	time_t t = std::time(0);   // get time now
	tm* now = std::localtime(&t);
	return to_string(now->tm_mday) + '/' + to_string(now->tm_mon + 1) + '/'+ to_string(now->tm_year + 1900);
}
