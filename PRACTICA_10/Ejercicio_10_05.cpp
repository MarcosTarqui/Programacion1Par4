// Materia: Programación I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa.
// Fecha creación: 14/10/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>

using namespace std;

string OrdenarCaracteres(string palabra);

int main()
{
    string palabra;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    string resultado = OrdenarCaracteres(palabra);

    cout << "Palabra ordenada: " << resultado << endl;

    return 0;
}

string OrdenarCaracteres(string palabra)
{
    int n = palabra.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (palabra[j] > palabra[j + 1])
            {
                char aux = palabra[j];
                palabra[j] = palabra[j + 1];
                palabra[j + 1] = aux;
            }
        }
    }

    return palabra;
}