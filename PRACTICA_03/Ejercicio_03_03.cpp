// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa 
// Carrera del estudiante: Ing. Mecatronica
// Fecha creacion: 21/08/2026
#include <iostream>

using namespace std;

int main ()
{
    int numero = 0;
    int suma = 0;
    
    cout << "Sumatoria hasta: ";
    cin >> numero;

    for (int i = 0; i <= numero ; i++ )
    {
        suma += i;
    }
    cout << "sumatoria: " << suma;
    return 0;
}
    