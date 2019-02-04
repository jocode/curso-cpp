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


## Parámetros de Función...