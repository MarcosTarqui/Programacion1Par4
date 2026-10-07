// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 07/10/2026

#include <iostream>
#include <string>

using namespace std;

int contarCaracteres(string numero);
bool esTarjetaValida(string numero);

int main()
{
    string numeroTarjeta;

    cout << "Ingrese los 16 digitos de la tarjeta: ";
    cin >> numeroTarjeta;

    if (esTarjetaValida(numeroTarjeta))
    {
        cout << "Tarjeta valida" << endl;
    }
    else
    {
        cout << "Tarjeta invalida" << endl;
    }

    return 0;
}

int contarCaracteres(string numero)
{
    int contador = 0;

    while (numero[contador] != '\0')
    {
        contador++;
    }

    return contador;
}

bool esTarjetaValida(string numero)
{
    int cantidadDigitos = contarCaracteres(numero);

    if (cantidadDigitos != 16)
    {
        return false;
    }

    int suma = 0;
    int i = cantidadDigitos - 1;
    int posicion = 0;

    while (i >= 0)
    {
        int digito = numero[i] - '0';

        if (digito < 0 || digito > 9)
        {
            return false;
        }

        if (posicion % 2 == 1)
        {
            digito = digito * 2;
            if (digito > 9)
            {
                digito = digito - 9;
            }
        }

        suma += digito;
        i--;
        posicion++;
    }

    return (suma % 10 == 0);
}