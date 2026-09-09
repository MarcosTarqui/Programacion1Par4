// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 27/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Numeros(int n);

int main ()
{
    srand (time(NULL));
    int n;
    cout << "Cuantos numeros desea generar? : ";
    cin >> n;
    Numeros (n);
}

void Numeros(int n)
{
    int primos = 0;
    for (int i = 1 ; i<= n; i++ )
    {
        int numero = rand () % (10000-1+1)+1;
        int divisores = 0;
        cout << "Numero: " << numero << endl;
        for (int j = 1; j<= numero; j++)
        {
            if (numero % j == 0)
            {
                divisores ++;
            }
        }
        if (divisores  == 2)
        {
            primos++;
        }
    }
    cout << "Numeros primos: " << primos;
}