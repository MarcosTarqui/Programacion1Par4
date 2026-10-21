// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 24/09/2026
#include <iostream>

using namespace std;

int main ()
{
    float voltios[9];

    for (int i= 0; i <9 ; i++)
    {
        cout << "Ingresar Valor: ";
        cin >> voltios [i];
    }

    for (int i = 0; i < 9; i++)
    {
        cout << voltios[i] << " ";
        if ((i+1) % 3 == 0)
        {
            cout << endl;
        }
    }
}
