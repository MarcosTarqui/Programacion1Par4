//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>

using namespace std;

bool verificacion ( int num1 );

int main ()
{
    int num1 = 0;
    cout << "Ingresar numero: ";
    cin >> num1;
    cout << verificacion(num1);
    return 0;

}

bool verificacion ( int num1 )
{
    bool par = false;
    if (num1 % 2 == 0)
    {
        par = true;
    }
    return par;
}