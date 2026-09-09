//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    long long resultado = 1;

    cout << "Ingrese la base x: ";
    cin >> x;
    cout << "Ingrese el exponente y: ";
    cin >> y;

    for (int i = 1; i <= y; i++)
    {
        resultado *= x;
    }

    cout << x << "^" << y << " = " << resultado << endl;

    return 0;
}