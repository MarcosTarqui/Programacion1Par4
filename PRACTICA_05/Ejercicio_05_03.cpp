// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 27/08/2026
#include <iostream>

using namespace std;

float CalcularPrecioTotal(int Precio, float Impuesto);

int main()
{
    float Impuesto = 13;
    int Precio = 0;
    float PrecioTotal = 0;

    cout << "Precio: ";
    cin >> Precio;
    cout << "Impuesto: ";
    cin >> Impuesto;
    if (Impuesto == 0)
    {
        Impuesto = 13;
    }

    PrecioTotal = CalcularPrecioTotal(Precio, Impuesto);
    cout << "Precio total: " << PrecioTotal << endl;

    return 0;
}

float CalcularPrecioTotal(int Precio, float Impuesto)
{
    float montoImpuesto = Precio * (Impuesto / 100);
    float PrecioTotal = Precio + montoImpuesto;
    return PrecioTotal;
}