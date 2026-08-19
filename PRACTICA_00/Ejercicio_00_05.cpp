//Materia: Programacion 1
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. mecatronica
//Fecha de creacion: 17/08/26
#include <iostream>

using namespace std;

int main ()
{
    double nota1;
    double nota2;
    double nota3;
    double nota4;
    double promedio;

    cout << "Ingrese la nota del alumno 1: "; 
    cin >> nota1;
    cout << "Ingrese la nota del alumno 2: "; 
    cin >> nota2;
    cout << "Ingrese la nota del alumno 3: "; 
    cin >> nota3;
    cout << "Ingrese la nota del alumno 4: "; 
    cin >> nota4;

    promedio = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << "La nota final media es: " << promedio << endl;

    return 0;
}