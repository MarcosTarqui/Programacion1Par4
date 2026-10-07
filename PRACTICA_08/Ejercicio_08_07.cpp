// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 07/10/2026

#include <iostream>
#include <string>

using namespace std;

int contarCaracteres(string texto);
void extraerHashtags(string texto);

int main()
{
    string texto;
    cout << "Ingrese el texto: ";
    getline(cin, texto);
    extraerHashtags(texto);
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

void extraerHashtags(string texto)
{
    int longitud = contarCaracteres(texto);
    string hashtags[50];
    int cantidadHashtags = 0;
    int i = 0;
    while (i < longitud)
    {
        if (texto[i] == '#')
        {
            string palabra = "#";
            i++;
            while (i < longitud && texto[i] != ' ')
            {
                palabra += texto[i];
                i++;
            }
            hashtags[cantidadHashtags] = palabra;
            cantidadHashtags++;
        }
        else
        {
            i++;
        }
    }
    cout << "Lista de hashtags: [";
    int j = 0;
    while (j < cantidadHashtags)
    {
        cout << hashtags[j];
        if (j < cantidadHashtags - 1)
        {
            cout << ", ";
        }
        j++;
    }
    cout << "]" << endl;
}