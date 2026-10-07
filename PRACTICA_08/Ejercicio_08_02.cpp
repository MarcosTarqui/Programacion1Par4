// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 07/10/2026

#include <iostream>
#include <string>

using namespace std;

bool esMayuscula(char c);
bool esMinuscula(char c);
bool esDigito(char c);
bool esEspecial(char c);
int contarCaracteres(string password);
bool esSegura(string password);

int main()
{
    string password;

    cout << "Ingrese la contraseña: ";
    cin >> password;

    if (esSegura(password))
    {
        cout << "Contraseña segura" << endl;
    }
    else
    {
        cout << "Contraseña vulnerable" << endl;
    }

    return 0;
}

bool esMayuscula(char c)
{
    return (c >= 'A' && c <= 'Z');
}

bool esMinuscula(char c)
{
    return (c >= 'a' && c <= 'z');
}

bool esDigito(char c)
{
    return (c >= '0' && c <= '9');
}

bool esEspecial(char c)
{
    return !esMayuscula(c) && !esMinuscula(c) && !esDigito(c);
}

int contarCaracteres(string password)
{
    int contador = 0;

    while (password[contador] != '\0')
    {
        contador++;
    }

    return contador;
}

bool esSegura(string password)
{
    bool tieneMayuscula = false;
    bool tieneMinuscula = false;
    bool tieneNumero = false;
    bool tieneEspecial = false;

    int longitud = contarCaracteres(password);

    if (longitud < 8)
    {
        return false;
    }

    int i = 0;
    while (password[i] != '\0')
    {
        char c = password[i];

        if (esMayuscula(c))
        {
            tieneMayuscula = true;
        }
        else if (esMinuscula(c))
        {
            tieneMinuscula = true;
        }
        else if (esDigito(c))
        {
            tieneNumero = true;
        }
        else if (esEspecial(c))
        {
            tieneEspecial = true;
        }

        i++;
    }

    return tieneMayuscula && tieneMinuscula && tieneNumero && tieneEspecial;
}