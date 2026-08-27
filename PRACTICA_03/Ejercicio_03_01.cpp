// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa 
// Carrera del estudiante: Ing. Mecatronica
// Fecha creacion: 21/08/2026
#include <iostream>

using namespace std;

int main ()
{
    int numero;
    cout << "Ingresar numero del 1 al 10: ";
    cin >> numero;

    for (int i=1; i<=10; i++)
    {
        cout << numero << " x " << i << " = " << numero*i << endl;
    }
    return 0;
}