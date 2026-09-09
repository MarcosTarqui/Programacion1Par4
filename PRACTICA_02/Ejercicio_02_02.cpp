//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>
using namespace std;

int main()
{
    double temperatura;
    double suma = 0;
    double maxima;
    double minima;

    for (int i = 1; i <= 6; i++)
    {
        cout << "Ingrese la temperatura de la hora " << i << ": ";
        cin >> temperatura;

        suma += temperatura;

        if (i == 1)
        {
            maxima = temperatura;
            minima = temperatura;
        }
        else
        {
            if (temperatura > maxima)
            {
                maxima = temperatura;
            }
            if (temperatura < minima)
            {
                minima = temperatura;
            }
        }
    }

    double promedio = suma / 6;

    cout << "\nLa temperatura media del dia es: " << promedio << endl;
    cout << "La temperatura mas alta fue: " << maxima << endl;
    cout << "La temperatura mas baja fue: " << minima << endl;

    return 0;
}