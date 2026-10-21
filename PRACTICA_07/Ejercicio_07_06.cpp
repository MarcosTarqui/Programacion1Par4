// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 24/09/2026
#include <iostream>

using namespace std;

int main ()
{
    int numero;

    int vec1[5];
    int vec2[5];
    int vecSuma[5];

    for (int i = 0; i<5 ; i++)
    {
        cout << "Ingresar Numeros para vector 1: ";
        cin >> numero;
        vec1[i] = numero;
    }
    for (int i = 0; i<5 ; i++)
    {
        cout << "Ingresar Numeros para vector 2: ";
        cin >> numero;
        vec2[i] = numero;
    }

    cout << "vector suma: ";
    for (int i = 0; i < 5 ; i++)
    {
        vecSuma[i] = vec1[i] + vec2[i];
        cout <<  vecSuma[i] << "   ";
    }
}