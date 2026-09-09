// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 27/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Sumatoria(int n);
void PromedioImpares(double n);
void MayorPrimo(int n);

int main ()
{
    srand (time(NULL));
    double n;
    cout << "Cuantos numeros desea generar?: ";
    cin >> n;
    Sumatoria(n);
    PromedioImpares (n);
    MayorPrimo (n);

}

void Sumatoria(int n)
{
    int sumadePares = 0;
    for (int i = 1; i<= n; i++)
    {
        int numero = rand () % (1000 -1+1)+1;
        if (numero % 2 == 0)
        {
            sumadePares += numero;
        }
    }
    cout << "Suma de numeros pares: " << sumadePares<<endl;
}

void PromedioImpares(double n)
{
    double Promedio = 0;
    for (int i = 1; i<= n; i++)
    {
        int numero = rand () % (1000 -1+1)+1;
        if (numero % 2 != 0)
        {
            Promedio += numero;
        }
    }
    cout << "Promedio de impares: " << Promedio/n << endl;
}

void MayorPrimo(int n)
{
    int mayor = 0;
    int primo = 0;
    for (int i = 1; i<= n; i++)
    {
        int divisores = 0;
        int numero = rand () % (1000 -1+1)+1;
        for (int j = 1; j<= numero ; j++)
        {
            if (numero % j == 0)
            {
                divisores++;
            }
        }
        if (divisores == 2 && numero > mayor)
        {
            mayor = numero;
        }
    }
    cout << "Numero primo mayor: " << mayor;
}