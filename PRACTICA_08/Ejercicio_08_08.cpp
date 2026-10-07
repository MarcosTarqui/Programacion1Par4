// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 07/10/2026

#include <iostream>
#include <string>

using namespace std;

int contarCaracteres(string texto);
bool sonIguales(string a, string b);
int extraerPalabras(string texto, string palabras[]);
bool esPlagio(string oracionA, string oracionB);

int main()
{
    string oracionA;
    string oracionB;
    cout << "Ingrese la oracion A: ";
    getline(cin, oracionA);
    cout << "Ingrese la oracion B: ";
    getline(cin, oracionB);

    if (esPlagio(oracionA, oracionB))
    {
        cout << "Alerta de plagio: Verdadero" << endl;
    }
    else
    {
        cout << "Alerta de plagio: Falso" << endl;
    }

    return 0;
}

int contarCaracteres(string texto)
{
    int contador = 0;

    while (texto[contador] != '\0')
    {
        contador++;
    }

    return contador;
}

bool sonIguales(string a, string b)
{
    int largoA = contarCaracteres(a);
    int largoB = contarCaracteres(b);

    if (largoA != largoB)
    {
        return false;
    }
    int i = 0;
    while (i < largoA)
    {
        if (a[i] != b[i])
        {
            return false;
        }
        i++;
    }

    return true;
}

int extraerPalabras(string texto, string palabras[])
{
    int longitud = contarCaracteres(texto);
    string palabraActual = "";
    int cantidadPalabras = 0;
    int i = 0;
    while (i < longitud)
    {
        char c = texto[i];

        if (c != ' ')
        {
            palabraActual += c;
        }

        if (c == ' ' || i == longitud - 1)
        {
            if (contarCaracteres(palabraActual) > 0)
            {
                palabras[cantidadPalabras] = palabraActual;
                cantidadPalabras++;
            }
            palabraActual = "";
        }

        i++;
    }

    return cantidadPalabras;
}

bool esPlagio(string oracionA, string oracionB)
{
    string palabrasA[50];
    string palabrasB[50];
    int cantidadA = extraerPalabras(oracionA, palabrasA);
    int cantidadB = extraerPalabras(oracionB, palabrasB);
    int coincidencias = 0;
    int i = 0;
    while (i < cantidadA)
    {
        int j = 0;
        while (j < cantidadB)
        {
            if (sonIguales(palabrasA[i], palabrasB[j]))
            {
                coincidencias++;
            }
            j++;
        }
        i++;
    }

    return coincidencias > 3;
}