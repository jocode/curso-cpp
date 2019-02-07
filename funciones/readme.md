# Funciones

Una función es un grupo de declaraciones  que realizan una tarea en particular. En C++, podemos definir nuestras propias funciones.

Los beneficios de usar funciones son:
* Reutilizar código dentro de una función
* Validar fácilmente funciones individuales
* Hacer modificación al código de la función sin alterar la estructura del programa
* Utilizar la función con diferentes parámetros

> Todo programa de C++ tiene al menos la función **main()**

## Tipo de Retorno

El tipo de retorno, es declarado antes del nombre de la función, éste indica el tipo de dato que devolverá la función.

Algunas funciones realizan operaciones sin devolver un valor. Éstas funciones son definidas con la palabra clave  **void**

- **void** Es un tipo de dato básico que define un estado sin valor.


## Definción de una función

Para definir una función en C++, usamos la siguientes sintaxis:

```c++
tipo_retorno nombre_funcion(lista de parametros){
	// cuerpo de la función
	return valor_retorno;
}
```

- **tipo_retorno** Tipo de valor que devolverá la función 
- **nombre_funcion** Nombre de la función 
- **lista de parametros** Cuando la función es llamada, y ésta posee argumentos, se le pasan el valor como parámetro. Éstos nos permiten hacer operaciones dentro de la función.
- **cuerpo de la función** Es la colección de declaraciones que define lo que hace la función.

> Los parámetros son **opcionales** lo que significa que se puede tener una función sin parámetros.

En resumen, una función de forma por:
- Tipo de retorno
- Nombre de la función
- Parámetros
- Cuerpo de la función 


> Para **llamar** una función, simplemente se escribe el nombre de la función y le escribes los parámetros que necesita.

```c++
// LLamar a una función
void miFuncion(){
	cout << "Hola mundo, desde mi función";
}

int main(){
	// Esta función no tiene argumentos, ni retorna ningún tipo de valor.
	miFuncion();
	return 0;
}
```

## :warning: Importante

Siempre se debe **declarar** una función **antes de llamarla**, por ejemplo:

```c++
#include <iostream>
using namespace std;

void miFuncion(){
	cout << "Hola mundo, desde mi función";
}

int main(){
	miFuncion();
	return 0;
}
```

Si se declara después de la función **main**, resulta en un error.

**Pero para ello hay una solución** :blush:

La declaración de una función o **prototipo**, le indica al compilador acerca del nombre de la función y cómo llamar a la función. El cuerpo real de la función puede ser definido aparte. Por ejemplo:

```c++
#include <iostream>
using namespace std;

// Declaración de la función
void miFuncion();

int main(){
	miFuncion();
	return 0;
}

// Definición de la función
void miFuncion(){
	cout << "Hola mundo, desde mi función";
}
```


## Parámetros de Función

Los parámetros son variables que aceptam valores de los argumentos.
Los parámetros formales se comportan de manera similar a otras variables locales. Son creadas al entrar en la función, y son destruidas al salir de la función.

Podemos pasar diferentes argumentos a la función, siempre y cuando ésta sea llamada.

```c++
int dosVeces(int x){
	return x*2;
}
```

```c++
int main(){
	cout << dosVeces(3); // Muestra 6
	cout << dosVeces(7); // Muestra 14
}
``` 

> Cada parámetro debe estar definido con un **tipo de dato** y **nombre**

## Múltiples parámetros 

Se puede definir varios parámetros a una función, deparandolos por comas.

```c++
int main(int param1, int param2){}
```

## Números aleatorios


### Función rand()

La librería estándar de C++, tiene acceso a una función que genera números aleatorios, se llama **rand()**. Para usarla, debemos incluir el encabezado *__cstdlib__*

```c++
int main(){
	cout << rand(); // Imprimirá un número aleatorio
}
```

Al utilizar el operador **módulo (%)** genera números aleatorios dentro de un rango específico. Por ejemplo:

```c++
int main(){
	for (int x = 0; x <= 10; x++){
		cout << 1 + (rand()%6);
	}
}
```


- Función **time()**

La función time opciotne el número de segundos del reloj del sistema. Para eso se tiene que incluir el encabezado `<ctime>`

```c++
time(0); // Devolverá el conteo de segundos actual
```


## Valores por defecto para los parámetros

Se puede especificar un valor por defecto a los parámtros, en caso de que sea omitido al llamar la función.

```c++
int suma(int a, int b=42){
	int result = a + b;
	return (result);
}
```

## Sobrecarga de funciones

Sobrecargar funciones nos permite crear múltiples funciones con el mismo nombre, siempre y cuando tengan diferentes parámetros.

Por ejemplo, la función siguiente, recibe parámetros flotantes y enteros
```c++
void imprimirNumero(int number){
	cout << number;
}
void imprimirNumero(float number){
	cout << number;
}
```

La función sobrecargada debe diferir de todas las demás por los tipos y/o el número de argumentos.

No se puede sobrecargar funciones declarados que sean diferentes en el tipo de retorno.



## :fire: Recursión

Una función recursiva en C++ es una función que se llama a sí misma.

> **Importante** Para evitar que la recursión se llame indefinidamente, se debe incluir una condición terminación.

*La recursión es un método para resolver un problema cuando la solución depende de las solución depende de las soluciones de instancias menores del mismo problema*

Por ejemplo. La función factorial

```c++
int factorial(int n){
	if (n==1)
		return 1;
	else 
		return n * factorial(n-1);
}
```

> La función factorial se llama a sí misma, y luego continúa haciéndolo hasta que el argumento sea 1.
> Un **caso base** es necesario para la recursión real. Sin él, la recursión seguirá ejecutándose por siempre.


## Arreglos y funciones

También se puede pasar un arreglo a una función como argumento. Al declarar una función, el parámetro debe definirse como un arreglo utilizando corchetes.

```c++
void printArray(int arr[], int size){
	for (int x = 0; x < size; x++){
		cout << arr[x];
	}
}
```

## Argumentos de función 

Hay dos formas para pasar argumentos a una función mientras la función es llamada.

- **Por valor:** Este método copia el valor actual del argumento al parámetro formal de la función. En este caso, podemos hacer cambios al parámetro dentro de la función sin tener ningún efecto sobre el argumento.

- **Por referencia** Este método copia la referencia del argumento al parámetro formal. En la función, la referencia es utilizada para acceder el argumento original utilizado en la llamada. Esto significa que cualquier cambio realiado al parámetro afectará al argumento.

> Por defecto C++ utiliza llamada por valor para pasar argumentos.

Ejemplo de pasar por referencia

```c++
void myFunc(int *x){
	*x = 100;
}

int main(){
	int var = 20;
	myFunc(&var);
	cout << var;
}
```