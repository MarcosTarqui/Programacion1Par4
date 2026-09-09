//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    cout << numero << " = ";

    int divisor = 2;
    bool primero = true;

    while (numero > 1)
    {
        if (numero % divisor == 0)
        {
            if (!primero)
            {
                cout << "*";
            }
            cout << divisor;
            primero = false;
            numero = numero / divisor;
        }
        else
        {
            divisor++;
        }
    }

    cout << endl;

    return 0;
}