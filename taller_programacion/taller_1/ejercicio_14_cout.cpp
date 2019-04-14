#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

/**
14. Un alumno desea saber cual sera su promedio general de las cuatro
calificaciones mas dificiles que cursa y cual sera el promedio que obtendra en cada
una de ellas. Estas materias se evaluan como se muestran a continuacion:

La calificacion de matematicas se obtiene de la sig. Manera:
Examen 80%
Promedio de tareas 20%
En esta materia se pidio un total de tres tareas.

La calificaion de fisica se obtiene de la sig. Manera:
Examen 70%
Promedio de tareas 30%
En esta materia se pidio un total de tres tareas.

La calificaion de quimica se obtiene de la sig. Manera:
Examen 60%
Promedio de tareas 40%
En esta materia se pidio un total de tres tareas.

La calificaion de variables complejas se obtiene de la sig. Manera:
Examen 90%
Promedio de tareas 10%
En esta materia se pidio un total de dos tareas.
*/

string materias[] = {"Matemáticas", "Física", "Química", "Variable Compleja"};
float examenes[4];
float tareas[4];
float porcentajes_tareas[] = {20,30,40,10}; // En la ultima materia se piden 2 tareas
float porcentajes_examenes[] = {80, 70, 60, 90};
float promedio_general, nota_tarea, promedio_tareas, nota_final;

int main(int argc, char *argv[]) {
	system("color 03");
	
	for (int i = 0; i < 4; i++){
		cout << "\n-----------------\n";
		cout << materias[i] << endl;
		
		int j;
		promedio_tareas = 0;
		for (j = 0; j < 3; j++){
			
			if (i == 3 and j==2)
				break;
			
			cout << "Ingrese la nota de la tarea " << (j+1) << ": ";
			cin >> nota_tarea;
			promedio_tareas += nota_tarea;
		}
		
		cout << "Ingrese la nota del examen: ";
		cin >> examenes[i];
		tareas[i] = promedio_tareas/j;
	}
	
	for (int i = 0; i < 4; i++){
		cout << "\n-----------------\n";
		nota_final = (examenes[i]*(porcentajes_examenes[i]/100)) + (tareas[i]*(porcentajes_tareas[i]/100));
		cout << "El promedio en " << materias[i] << " es de: " << nota_final;
		promedio_general += nota_final;
	}
	cout << "\n-----------------\n";
	cout <<"\nEl promedio general es de: " <<(promedio_general/4);
	
	return 0;
}

