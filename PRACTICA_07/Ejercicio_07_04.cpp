// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 24/09/2026
#include <iostream>

using namespace std;

int main ()
{
    int n1,n2,n3;
    int num1,num2,num3;
    cout << "Ingresar Dimension del vector 1: ";
    cin >>n1;
    cout << "Ingresar Dimension del vector 2: ";
    cin >>n2;
    int vec1[n1];
    for (int i = 0; i< n1 ; i++)
    {
        cout << "Ingresar numeros para el vector 1: ";
        cin >> num1;
        vec1[i] = num1;
    }
    int vec2[n2];
    for (int i = 0; i< n2 ; i++)
    {
        cout << "Ingresar numeros para el vector 2: ";
        cin >> num2;
        vec2[i] = num2;
    }
    int vecProducto[n3];
    for (int i = 0; i< n1 ; i++)
    {
        vecProducto[i] = vec1[i]*vec2[i];
    }
    cout << "Vector Producto: ";
    for (int i = 0; i< n1 ; i++)
    {
        cout  << vecProducto[i] << "  ";
    }
}