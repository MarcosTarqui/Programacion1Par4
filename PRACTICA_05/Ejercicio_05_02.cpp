// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 27/08/2026
#include <iostream>

using namespace std;

void ModificarValores (int num1, int &num2);

int main ()
{
    int num1 = 0;
    int num2 = 0;

    cout << "Ingresar Primer numero: ";
    cin >> num1;
    cout << "Ingresar Segundo numero: ";
    cin >> num2;

    ModificarValores (num1, num2);
    cout << "Primer numero = " << num1 << endl;
    cout << "Segundo Numero = " << num2 << endl;
    return 0;
}

void ModificarValores (int num1, int &num2)
{
    num1 *= 2;
    num2 += 10;
}