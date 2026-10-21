// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 24/09/2026
#include <iostream>

using namespace std;

int main ()
{
    int n = 0;
    int vec[100];
    int cantidad = 0;

    for (int i = 0; i < 100 && n >= 0; i++)
    {
        cout << "Ingresar numero: ";
        cin >> n;

        if (n >= 0)
        {
            vec[i] = n;
            cantidad++;
        }
    }

    for (int i = 0; i < cantidad; i++)
    {
        cout << vec[i] << "   ";
    }
    cout << endl;

    return 0;
}