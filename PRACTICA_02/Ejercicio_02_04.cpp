//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>
using namespace std;

int main()
{
    int n;
    int suma = 0;

    cout << "Ingrese n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        suma += 2 * i - 1;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}