#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	system("color 30");
	
	int grupos, alumnos, materias;
	float promedio_total = 0, promedio_grupo = 0, promedio_alumno = 0, promedio_materia = 0;
	float calificacion;
	
	cout << "Digite la cantidad de grupos: ";
	cin >> grupos;
	
	int i = 1;
	do {
		// Grupos
		cout << "Digite la cantidad de alumnos del grupo: ";
		cin >> alumnos;
		promedio_grupo = 0; 
		
		int j = 1;
		do {
			// Alumnos
			cout << "\nDigite la cantidad de materias del alumno " << j << ": ";
			cin >> materias;
			promedio_alumno = 0;
			
			int k = 1;
			do {
				// Materia
				cout << "\nMateria " << k << endl;
				promedio_materia = 0;
				int l = 1;
				do {
					cout << "Ingrese la " << l << " nota: ";
					cin >> calificacion;
					promedio_materia += calificacion;
					l++;
				} while( l <= 3);
				
				promedio_materia = (promedio_materia/3);
				promedio_alumno += promedio_materia; 
				k++;
			} while( k <= materias);
			
			promedio_alumno = (promedio_alumno/materias);
			promedio_grupo += promedio_alumno;
			
			cout << "\nEl promedio del Alumno " << j << " es de: " << promedio_alumno << endl;
			
			j++;
		} while(j <= alumnos);
		
		promedio_grupo = (promedio_grupo/alumnos);
		promedio_total += promedio_grupo;
		
		cout << "\nEl promedio del Grupo " << i << "  es de: " << promedio_grupo;
		
		i++;
	} while(i <= grupos);
	
	promedio_total = (promedio_total/grupos);
	cout << "\nEl promedio del los grupos es de: " << promedio_total;
	
	return 0;
}

