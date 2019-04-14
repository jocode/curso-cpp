# Curso de C++ Básico

C++ es un lenguaje de programación, es uno de los más utilizados en todo el mundo. 
Para programar en C++, se necesita un compilador y un editor.
El **compilador** traduce el código fuente a código máquina (Código Binario), y el **editor** es el programa que nos colorea la sintaxis del lenguaje para poder escribir el código  cómodamente,

Hay algunos programas que son compiladores y editores, se conocen como IDE (Entorno de desarrollo Integrado). por ejemplo.
- Dev C++
- CodeBlocks
- [Zinja](http://zinjai.sourceforge.net/). Es un programa similar a PSeint en la interfaz.

Cualquiera que se escoja se debe descargar e instalar.

En el caso de usar **Dev C++**, al crear un nuevo proyecto debemos ir a *Menu -> Nuevo -> Proyecto* y allí escogemos el tipo de aplicación que queramos escoger.

Para ejecutar el programa, debemos previamente haberlo compilado. También podemos usar el botón de **compilar y ejecutar**


> Para ignorar archivos por git, podemos usar la herramienta [gitignore](https://www.gitignore.io/), que genera el archivo para usarlo, dependiendo del lenguaje o entorno en el que se trabaje.


## Hola Mundo

Primero, debemos crear un nuevo proyecto, y luego crear un archivo llamado **main.cpp**, o el nombre que se desee.
Luego de eso, debemos incluir las librerías, que son un conjunto de código que viene predefinido y que nos facilita el trabajo.

Para incluir una librería usamos la sentencia
```cpp
#include <stdio.h>

int main(){
    printf("Hola Mundo \n");
    std::cout << "Hi everyone" << std::endl;
    return 0;
}
```
*stdio.h* **`.h`** porque es una cabecera.
*`\n`* Es un operador de escape, el compilador lo detecta como un salto de línea.

- **Librería** Conjunto de herramientas que viene con código predefinido, lo que nos permite facilitar el trabajo.


## Variables enteras (`int`)

**iostream** Es una librería que nos permite escribir y leer información por consola.
```cpp
#include <iostream>
```

Para declarar un variable en *C++¨*, debemos primero colocar el tipo de dato. Por ejemplo:
```cpp
int num = 31;
// Otra forma de delcarar y asignar valor es
int num{23};
```

Para evitar colocar prefijos a las funciones, es necesario especificar los espacios de nombre que vamos a utilizar, por ejemplo:
```cpp
using namespace std;

// Si no usaramos los espacios de nombre, nos tocaría usar 
std::cout << "Hola mundo \n Hola universo " << endl;
```

Si queremos que haya salto de línea, podemos usar el operador de escape `\n`, y así colocamos texto en una nueva línea.

## Variables `bool` y `char`

- **char** Esta tipo de dato almacena caracteres
- **bool** Este tipo de dato almacena valores booleanos (false o verdadero), `true` `false`

### Variable de tipo `char`

Si por ejemplo colocamos una palabra en una variable de tipo **char**, el compilador, sólo tomará el último caracter. En este caso usamos *comillas simples*
```cpp
char letra = 'Hola mundo';
```

Para mostrar varios caracteres usamos comillas dobles y colocamos un __`*`__, al final de la palabra reservada `char` .

### Variable de tipo `bool`
Es un tipo de variable lógico, 0 - 1, ó verdadero y falso.
0 == false
1 == true

Para declarar una variable booleana, indicamos el tipo de dato `bool`
```cpp
bool variable = true; // false | true
```


## Variable de tipo `float`

Son variables que guardar números de coma flotante de baja precisión, son como decimales que no tienen muchos decimales (No tiene tanto espacio en la memoria).

En algunos casos, el compilador redondea el número a un valor superior o inferior.

```cpp
float num = 5.23478;
```

## Variable de tipo `double`

Son tambien números de punto flotante que tienen más precisión ó espacio que memoria que los float. Funciona para números con más caracteres.
```cpp
double num = 12.3479835;
```

## Constantes

Son variables que no pueden ser modificadas durante la ejecución del programa. Lo valores que le asignemos no se pueden cambiar.

```cpp
// Es una constante, su valor no se puede cambiar
const int numero = 11;
```


## Operadores Aritméticos

Son los que nos permiten realizar operaciones matemáticas.

```cpp
int num1 = 2;
int num2 = 6;
int suma = num1 + num2;
```

- Suma `+`
- Resta `-`
- Multiplicación `*`
- División `/`
- Módulo (Residuo de la división) `%`


## Operadores de Asignación

El operador de asignación general es `=`. Exiten otros como:
- **Asigna una suma** `+=` Suma un valor a la variable 
- **Asigna una resta** `-=` Resta un valor a la variable
- **Asigna una multiplicación** `*=` Resta un valor a la variable

```cpp
// Declaración;
int operacion;
// Asignación
operacion = 12;
// Operador de asignación
operacion *= 3;
``` 

Algunos ejemplos de operadpres de asignación son:
![Operadores de Asignación](images/operadores-asignacion.png)

## Operadores de Comparación

- *Operador de comparación* `==`
- *Distinto o diferente* `!=`
- *Mayor que* `>`
- *Mayor o igual que* `>=`
- *Menor que* `<`
- *Menor o igual que* `<=`

Estos operadores son usamos en los condicionales y ciclos, donde comparamos dos valores para realizar una determinada acción.

## Operadores lógicos

- *and* `&&`
	Si ambas condiciones se cumplen, retorna true
- *or* `||`
	Si alguna de las dos condiciones se cumple, retorna true.
- *Negación* `!`
	Niega una condición. Si es true, lo vuelve false y viciversa.

## Funciones matemáticas

La librería header Standard `cmath`define un rango de funciones trigonométricas y numéricas que puede usar en todos sus programas. A continuación se presenta una tabla con las funciones más útiles.

![Funciones matemáticas 1](images/math-functions1.png)
![Funciones matemáticas](images/math-functions2.png)
*Img. Referencia Beginning C++ Ivor Horton (Pag. 40)*
## Sentencias `if` (Condicionales)

Permiten comparar dos variables para ejecutar una acción determinada. La condición se cumple siempre y cuando la condición sea verdadera. 

```cpp
if (numero1 < numero2){
    cout << "Es menor" << endl;
} else if (numero1==numero2){
    cout<<"Son iguales"<< endl;
} else {
    cout << "Es mayor" << endl;
}
```

## Sentencia `switch`

Es un tipo de condicional que dado un valor introducido los compara con los casos que tiene definido. Un ejemplo de switch en `C++` es el siguiente

```cpp
switch (c){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':	
        cout << "El una vocal." << endl;
        break;
default:
    cout << "Es una consonante" << endl;
    break;
}
```

## Comentarios

Son útiles para ordenar el código y explicar el código. Cuando se compila el programa, el compilador ignora estas líneas y nos las lee.

```cpp 
/**
* Comentario multilínea
*/

// Comentario de una sola línea
```

## Ciclos o Bucles

Estas estructuras nos permiten ejecutar bloques de códigos dada una condición.

## Ciclo `while`

Ejecuta las sentencia siempre que la condición sea verdadera. La expresión se verfica en cada inicio de la iteración.

```cpp 
int i = 0;
while (i <= 5) {
    cout << "Valor de i: " << i << endl;
    // Aumentamos el valor de la variable
    i++;
}
```

## Ciclo `do while`

El bucle do-while es una variante del ciclo while. Este ciclo evalúa la expresión al final de cada iteración. Por lo que se garantiza que el ciclo se ejecute al menos una vez.

```cpp 
int a = 10;
do {
    cout << "Valor de a: " << a << endl;
    // Aumentamos el valor de la variable
    a++;
} while (a <= 5);
```

## Ciclo `for`

El ciclo for ejecuta la primera expresión al iniciar el ciclo. Luego al inicio de cada iteración (Repetición) evalúa la segunda expresion y al final de cada iteración ejecuta la tercera expresion.

```cpp 
// Declaración de un array
char array[5];
array[0] = 'A';
array[1] = 'B';
array[2] = 'C';
array[3] = 'D';
array[4] = 'E';

// Ciclo for
for (unsigned int i = 0; i < sizeof(array) ; i++){
    cout << array[i] << endl;
}
```

En este ejemplo, vemos algo llamado arreglo. Los arreglos son variables que tienen varias posiciones en memoria, lo que permiten almacenar más de un valor en una sóla referencia.

Para declarar un arreglo, lo hacemos igual que en una variable, colocando al final corchetes angulares indicando el tamaño del arreglo. 

```cpp
// Arreglo de tipo entero con 5 posiciones
int variable[5];
```

Para asignar valores al arreglo, debemos acceder a la posición y en ella colocar el valor que deseemos (Debe ser del mismo tipo de dato).
```cpp
// Asignamos un valor al arreglo, en la posición 0
variable[0] = 12;
``` 

## Operadores del Preprocesaor

### Operador `include`

Es un operador del preprocesador, el preprocesador es una parte del compilador que verifica qué librerías se están importando en el código fuente. (`#`).

El operador `#include`, permite incluir librerías. Hay dos formas de incluir las librerías

- `#include <iostream>` Busca los archivos en los recursos del compilador
- `#include "iostream"` Busca los archivos en la propia carpeta


### Operador `define`

`#define` crea una macro, que es la asociación de un identificador o identificador parametrizado con una cadena de token. Una vez definida la macro,el compilador puede sustituir la cadena de token para cada aparición del identificador del archivo de código fuente.

```cpp
#define suma(a,b) a+b
...
int valor = suma(2,5);
```
En este ejemplo, el compilador evalúa el identificador y al utilizarse, sustituye la cadena con la aparición del identificador.


## Funciones

Las funciones son una manera de encapsular una funcionalidad que quieres reutilizar, de manera que puedes llamar esa función con un solo nombre, y no tendrás que escribir el código entero cada vez que la utilices.

La declaración de una función en c++, va de la siguiente manera.
*tipo-dato-devolver nombre-funcion(){ //Código a ejecutar  }*

```cpp
// Funcion suma
int sumar(int a, int b){
	return a+b;
}

// Funcion que no retorna nada
void miFuncion(){
	cout << "Yo no retorno nada" << endl;
}
```

Hay dos tipos de funciones
- Las que no retornan valor `void`
- Las que retornan un valor `int`, etc.

También podemos definir parámetros por defecto a la función, de la siguiente manera.
```cpp
void funcion(int a = 10){
    cout << a+3 << endl;
}
```

De esta manera, ya el valor de a tiene predefinido 10, sin embargo este valor puede ser cambiado al pasar por parámetro un nuevo valor en la llamada de la función.
```cpp
int main(){
    function();
    function(12);
    return 0;
}
```

## Estructuras

Son un tipo de variable estructurada, donde se puede almacenar varios datos sin importar del tipo que sea y que tenga relación entre ellas.

Haciendo relación con otros lenguajes, vendría siendo lo que se conoce como objetos.

```cpp
// Definición de la estructura
struct Personaje {
    int edad;
    int telefono;
    string nombre;
};

// Declaración y asignación de valores
Personaje juan;
juan.nombre = "Juan Marruecos";
juan.edad = 100;
juan.telefono = 3123;

cout << juan.nombre << endl;
```

En las estructuras también podemos declarar funciones y constructores. Los **constructores** son funciones que se inicializan al ser inicializadas las variables.

*Ver ejemplo* [estructuras-2.cpp](estructuras-2.cpp)

## Espacios de Nombres (`namespace`)

Es una funcionalidad de C++ que permite crear encapsular a las variables para evitar conflictos cuando tienen el mismo nombre.

```cpp
// Declaración de un espacio de nombre
namespace pueblo {
    int calle = 10;
}

// Utilización del espacio de nombre
using namespace ciudad;
```

## Punteros

Son herramientas que nos permiten gestionar la memoria. Los punteros son variables que guardan la dirección en memoria.

**`&`** *Operador de referencia*, nos permite saber la dirección en memoria de las variables.

`*` Es un operador de indirección, es decir cambia el valor de memoria por el valor que contiene esa dirección.

```cpp
cout << &numero << endl;
```

Cuando accedemos al puntero en un array, se accede a la posición 0. Los demás items están en las posiciones siguientes de la memoria. Para acceder a las direcciónes siguientes de memoria, sólo dando `p++`

```cpp
int array[5];
int *p;

int main(){

    p = array;
    cout << "Direccion array[0] " << &array << endl;
    cout << "Puntero " << p << endl;

    cin.get();
    return 0;
}
```

## Punteros a estructuras

Se pueden tener tambien referencias a las estructuras `struct`, el funcionamiento de los punteros es igual como en los ejemplos anteriores.

## Definición de tipos `tipedef`

Permite colocarle alias o sobrenombre a los tipos de datos que estemos utilizando.

```cpp
// Define una tipo de dato entero sin signo como `uint`
typedef unsigned int  uint;
```

## Clases

Una clase es un modelo que define las propiedades y métodos de un objeto.
- **Atributos o propiedades**: Variables
- **Métodos**: Son las funciones que haré con esos atributos

*Las clases son plantillas que agrupan comportamiento (métodos) y estados (atributos) de los futuros objetos.*

Las clases se definen usando la palabra reservada `class`, seguido del nombre de la clase.
```cpp
class nombreClase { //Código a definir };
``` 

Cada clase tiene modificadores de acceso, como son:

**public**: Pueden ser accedidos desde cualquier instancia de la clase
**private**: Pueden ser accedidos sólo en la misma clase
**protected**: Pueden ser accedidos desde las clases heredadas.


*Ejemplo de clases* [clases.cpp](clases.cpp)