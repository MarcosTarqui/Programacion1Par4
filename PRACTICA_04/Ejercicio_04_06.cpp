//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>

using namespace std;

int suma(int n);

int main ()
{
    int n = 0;
    cout << "Ingresar numero: ";
    cin >> n;
    cout << suma(n);
}
int suma(int n)
{
    int suma = 0;
    for (int i = 0; i <= n ; i++)
    {
        suma += i;
    }
    return suma;
}