// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 07/10/2026

#include <iostream>
#include <string>

using namespace std;

int contarCaracteres(string texto);
bool sonIguales(string a, string b);
void filtrarMensaje(string mensaje, string prohibidas[], int cantidadProhibidas);

int main()
{
    string mensaje;
    string prohibidas[3] = {"tonto", "manco", "noob"};
    cout << "Ingrese el mensaje: ";
    getline(cin, mensaje);
    filtrarMensaje(mensaje, prohibidas, 3);
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

void filtrarMensaje(string mensaje, string prohibidas[], int cantidadProhibidas)
{
    int largoMensaje = contarCaracteres(mensaje);
    string palabraActual = "";
    int i = 0;

    while (i < largoMensaje)
    {
        char c = mensaje[i];

        if (c != ' ')
        {
            palabraActual += c;
        }

        if (c == ' ' || i == largoMensaje - 1)
        {
            bool esProhibida = false;
            int j = 0;
            while (j < cantidadProhibidas)
            {
                if (sonIguales(palabraActual, prohibidas[j]))
                {
                    esProhibida = true;
                }
                j++;
            }

            if (esProhibida)
            {
                cout << "***";
            }
            else
            {
                cout << palabraActual;
            }

            if (c == ' ')
            {
                cout << " ";
            }

            palabraActual = "";
        }

        i++;
    }

    cout << endl;
}