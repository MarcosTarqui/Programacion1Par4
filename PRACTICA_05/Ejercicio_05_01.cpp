// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 27/08/2026
#include <iostream>

using namespace std;

void IntercambiarValores(int &num1, int &num2);

int main()
{
    int num1;
    int num2;
    cout << "Ingresar primer numero: ";
    cin >> num1;
    cout << "ingresar segundo numero: ";
    cin >> num2;
    cout << "Valores:" << endl;
    cout << "Primer numero: " << num1 << endl;
    cout << "Segundo numero: " << num2 << endl;

    IntercambiarValores(num1,num2);

    cout << "Valores Intercambiados:" << endl;
    cout << "Primer numero: " << num1 << endl;
    cout << "Segundo numero: " << num2 << endl;
}

void IntercambiarValores(int &num1, int &num2)
{
    int aux = num1; 
    num1 = num2;
    num2 = aux;
}