// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 07/10/2026

#include <iostream>
#include <string>

using namespace std;

int contarCaracteres(string texto);
char aMinuscula(char c);
bool empiezaConPrefijo(string nombre, string prefijo);
void buscarContactos(string contactos[], int cantidad, string prefijo);

int main()
{
    string contactos[5] = {"Marcelo", "Maria", "Martin", "Juan", "Marcos"};
    string prefijo;
    cout << "Ingrese el prefijo de busqueda: ";
    cin >> prefijo;

    buscarContactos(contactos, 5, prefijo);

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

char aMinuscula(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + ('a' - 'A');
    }
    return c;
}

bool empiezaConPrefijo(string nombre, string prefijo)
{
    int largoNombre = contarCaracteres(nombre);
    int largoPrefijo = contarCaracteres(prefijo);

    if (largoPrefijo > largoNombre)
    {
        return false;
    }

    int i = 0;
    while (i < largoPrefijo)
    {
        if (aMinuscula(nombre[i]) != aMinuscula(prefijo[i]))
        {
            return false;
        }
        i++;
    }

    return true;
}

void buscarContactos(string contactos[], int cantidad, string prefijo)
{
    cout << "Resultados: ";

    bool primero = true;
    int i = 0;
    while (i < cantidad)
    {
        if (empiezaConPrefijo(contactos[i], prefijo))
        {
            if (!primero)
            {
                cout << ", ";
            }
            cout << contactos[i];
            primero = false;
        }
        i++;
    }

    cout << endl;
}