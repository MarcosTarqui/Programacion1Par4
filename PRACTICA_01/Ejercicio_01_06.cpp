//Materia: Programacion 1
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. mecatronica
//Fecha de creacion: 17/08/26
#include <iostream>

using namespace std;

int main ()
{
    int numero = 0;
    cout << "Ingresar numero: ";
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "El numero ingresado es par";
    }
    else 
    {
        cout << "El numero ingresado es impar";
    }
    return 0;
}