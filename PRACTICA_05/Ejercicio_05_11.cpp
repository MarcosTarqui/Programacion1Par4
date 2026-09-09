// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 27/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Simulacion(int n);

int main ()
{
    srand (time(0));
    int n;
    cout << "Cuantos ninios hay en la guarderia: ";
    cin >> n;
    Simulacion(n);
}

void Simulacion(int n)
{
    int consumototal = 0;
    int unaño = 0;
    int dosaños = 0;
    int tresaños = 0;
    
    for (int i = 1; i<= n; i++)
    {
    int NumerodeNiños = rand () % (n-1+1)+1;
    int GenEdadDeNiños = rand () % (3);
    int edad;
    int consumo1 = 0;
    int consumo2 = 0;
    int consumo3 = 0;

    switch(GenEdadDeNiños)
    {
        case 0:
        edad = 1;
        unaño++;
        break;

        case 1:
        edad = 2;
        dosaños++;
        break;

        case 2:
        edad = 3;
        tresaños++;
        break;
    }
    if (edad == 1)
    {
        consumo1 = 6;
    }
    if (edad == 2)
    {
        consumo2 = 3;
    }
    if (edad == 3)
    {
        consumo3 = 2;
    }
    consumototal += consumo1 + consumo2 + consumo3;
    }

    cout << "ninios de 1 anio: " << unaño << endl;
    cout << "ninios de 2 anios: " << dosaños << endl;
    cout << "ninios de 3 anios: " << tresaños << endl;
    cout << "Consumo total de la guerderia: " << consumototal << " paniales";
}