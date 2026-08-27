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

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i<numero; i++)
    {
        if (numero % i == 0)
        {
            suma += i;
        }
    }

    if (suma == numero)
    {
        cout << numero << " es perfecto" << endl;
    }
    else
    {
        cout << numero << " no es perfecto" << endl;
    }

    return 0;
}