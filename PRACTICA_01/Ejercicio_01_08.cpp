//Materia: Programacion 1
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. mecatronica
//Fecha de creacion: 17/08/26
#include <iostream>

using namespace std;

int main ()
{
    int nota;
    cout << "ingresar nota: ";
    cin >> nota;

    while (nota < 0 || nota > 100)
    {
        cout << "nota invalida" << endl;
        cout << "Ingresar nota: ";
        cin >> nota;
    }
    cout << "nota registrada";

    return 0;
}