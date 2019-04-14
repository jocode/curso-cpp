# Tipos de dato

El sistema operativo asigna memoria y selecciona lo que será almacenado en la memoria reservada basado en el **tipo de dato** de la variable.

El tipo de dato define el uso apropiado de un identificador, qué tipo d dato puede ser almacenado, y qué tipos de operaciones puedes ser realizadas.

> En C++, las comillas simples indican un **carácter**; las comillas dobles definen una cadena de texto. Mientras que 'a' es un carácter individual, "a" es una cadena de texto.

## Enteros 

Almacena números no fraccionados, los cuales pueden ser positivos o negativos.

> El tamañp del tipo entero varía de acuerdo a la arquitectura del sistema en el cual el programa es ejecutado, aunque 4 Bytes es el tamaño mínimo en la mayoría de los sistemas modernos.

Se usa la palabra **int** para definir un entero
```c++
int a = 42;
```

Los enteros pueden modificarse usando los **modificadores**
- **signed** Entero cn signo, puede almacenar valores negativos y positivos.
- **unsigned** Sin signo, puede almacenar sólo valores positivos 
- **short** La mitad del tamaño por defecto
- **long** El doble del tamaño por defecto

```c++
unsigned long int a;
```

## Números de punto Flotante

Puede almacenar un número real, es decir con decimales.
Hay tres tipos diferentes de datos de punto flotante:
- **float** Generalmente de 4 Bytes
- **double** Generalmente 8 bytes
- **long double** Puede ser de 8 bytes o 16 bytes 

```c++
double myVar = 3.11;
```

> Los tipos de datos de punto flotante, siempre serán **signed** (Con signo), lo que significa que tienen la capacidad de almacenar tanto valores positivos como negativos.


## Cadenas de texto 

Una cadena de texto (*string*), es una secuencia ordenada de caracteres, encerrados dento de **comillas dobles**.

Son parte de la librería estándar. Necesita incluit la librería **<string>** para utilizar el tipo de dato *string*

```c++
#include <string>
using namespace std;

int main(){
	string cadena = "Hola, soy una cadena de texto";
	return 0;
}
```

> La librería <string> es incluida en la librería *<iostring>*, así que de ser incluida, no necesario llamarla por aparte


## char 

Una variable **char** almacena un entero de 1 byte. No se interpreta como un entero, sino como un caracter ASCII.

El carácter es colocado dentro de comillas simples ('a', 'x')

```c++
char caracter = 'A';
```


## booleanos

Las variables booleanas (**bool**) sólo tienen dos valores posibles:
- **true** (1)
- **false** (0)

```c++
bool study = true;
bool love = false;
```

> Si un valor booleano es asignado a un entero, **true (verdadero)** es 1, y** false (false)** es 0


## Nombrar variables

Para nombrar variables en C++, sigue las siguientes instrucciones:
- Deben empezar con una letra del alfabeto o guión bajo ( \_ )
- Después de la letra inicial, los nombres de variables pueden contener letras adicionales.

**Importante**
* Los espacios en blanco o caracteres especiales no son permitidos
* Las palabras reservadas no pueden ser incluidas como nombres de variables, por ejemplo int, float,  bool 

Hay dos tipos de convenciones para nombrar variables 
- **Pascal Case** (Tipo pascal), se usa la primera letra de cada palabra en Mayúscula (**MyVariable**)
- **Camel Case** (Tipo camel) Se deja la primera letra en minúscula y luego, la primera letra de cada palabra en Mayúsculas (**miVariable**)


> C++ es sensible a mayúsculas, lo que significa que una variable escrita en mayúsculas no es las misma que escritas en minúsculas (miVariable != MyVariable)



## :fire: Punteros

Una variable es un una ubicación en memoria que tiene diección definida.

Ésta direccción puede ser accedida usando el operador **&** (Conocido como *dirección de*) el cuál indica la dirección en memoria.

```c++
int puntaje = 5;
cout << &puntaje << endl;
// Muestra 0x29fee8
```

Lo que hace es mostrar la **direccción en memoria** de la variable.

*Un puntero es una variable que almacena el valor de la dirección de otra variable*
Nos ayudan a realizaar más fácilmente ciertas tareas 

Un puntero es una variable, y al igual que cualquier otra variable, debe ser declarada antes de trabajar con ella.

El signo **asterisco** es usado para declarar un **puntero** (el mismo asterisco que se usa para la multiplicación), en este caso se usa para designar una variable como un puntero.

```c++
int *entero; // Puntero a un entero
double *flotante; // Punetro a un double
```

Ejemplo de uso de punteros

```c++
int puntaje = 5;
int *puntajePuntero;
puntajePuntero = &puntaje;

cout << puntajePuntero << endl;
// Muestra la dirección (hexadecimal) de la variable
```

Se declara un puntero entero, llamado puntajePuntero, y se le asigna la dirección de memoria de la variable puntaje usando el operador **&** (*Dirección de*)

- [ ] **Operaciones con punteros**

Los operadores para punteros son:
- **&** (Dirección de), devuelve la direccción de memoria
- __*__ (Contenido de), devuelve el valor de la variable localizada

```c++
int var = 11;
int *pointer;
pointer = &var;

cout << var << endl; // Muestra 11
cout << pointer << endl; // Muestra la ubicación en memoria (hexadecimal)
cout << *pointer << endl; // Muestra el valor de la variable almacenada en el puntero, es decir 11
```