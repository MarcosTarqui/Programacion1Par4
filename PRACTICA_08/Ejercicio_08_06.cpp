// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 07/10/2026

#include <iostream>
#include <string>

using namespace std;

int contarCaracteres(string texto);
string limpiarEspacios(string texto);

int main()
{
    string texto;
    cout << "Ingrese el texto: ";
    getline(cin, texto);
    string resultado = limpiarEspacios(texto);
    cout << "Resultado: \"" << resultado << "\"" << endl;
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

string limpiarEspacios(string texto)
{
    int longitud = contarCaracteres(texto);
    string resultado = "";
    bool ultimoFueEspacio = true; 
    int i = 0;
    while (i < longitud)
    {
        char c = texto[i];

        if (c == ' ')
        {
            if (!ultimoFueEspacio)
            {
                resultado += c;
            }
            ultimoFueEspacio = true;
        }
        else
        {
            resultado += c;
            ultimoFueEspacio = false;
        }

        i++;
    }
    return resultado;
}