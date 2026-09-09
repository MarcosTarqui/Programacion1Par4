//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>
using namespace std;

int main()
{
    int numero;
    int contador = 0;

    cout << "Ingrese un numero (0 para terminar): ";
    cin >> numero;

    while (numero != 0)
    {
        if (numero > 0)
        {
            contador++;
        }
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numero;
    }

    cout << "La cantidad de valores fue: " << contador << endl;

    return 0;
}