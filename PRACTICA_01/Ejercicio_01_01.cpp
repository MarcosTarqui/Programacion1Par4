//Materia: Programacion 1
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. mecatronica
//Fecha de creacion: 17/08/26
#include <iostream>

using namespace std;

int main ()
{
    int año = 0;
    cout << "Ingresar anio: ";
    cin >> año;
    if (año % 4 == 0)
    {
        cout << "El anio ingresado es bisiesto";
    }
    else 
    {
        cout <<"El anio ingresado no es bisiesto";
    }
    return 0;
}