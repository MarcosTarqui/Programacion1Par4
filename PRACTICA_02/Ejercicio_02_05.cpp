//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>
using namespace std;

int main()
{
    int n;
    long long factorial = 1;
    long long sumaFactoriales = 0;

    cout << "Ingrese n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sumaFactoriales += factorial; 
    }

    cout << "La suma de factoriales es: " << sumaFactoriales << endl;

    return 0;
}