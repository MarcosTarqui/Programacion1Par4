// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 24/09/2026
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n1, n2, num;

    cout << "Ingresar dimension del vector 1: ";
    cin >> n1;
    cout << "Ingresar dimension del vector 2: ";
    cin >> n2;

    vector<int> vec1(n1);
    vector<int> vec2(n2);
    vector<int> vecCombinacion(n1 + n2);

    for (int i = 0; i < n1; i++)
    {
        cout << "Ingresar numeros para el vector 1: ";
        cin >> num;
        vec1[i] = num;
    }

    for (int i = 0; i < n2; i++)
    {
        cout << "Ingresar numeros para el vector 2: ";
        cin >> num;
        vec2[i] = num;
    }

    for (int i = 0; i < n1; i++)
    {
        vecCombinacion[i] = vec1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        vecCombinacion[n1 + i] = vec2[i];
    }

    cout << "Vector combinado: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << vecCombinacion[i];
    }
    cout << endl;

    return 0;
}