// Materia: Programación I, Paralelo 4
// Autor: MArcos Fabio Tarqui Aruquipa.
// Fecha creación: 07/10/2026
// Número de ejercicio: 3

#include <iostream>

using namespace std;

void GenerarMatriz(int M[][100], int n);
void MostrarMatriz(int M[][100], int n);

int main()
{
    int M[100][100];
    int n;

    do
    {
        cout << "Ingrese el orden n de la matriz (1 a " << 100 << "): ";
        cin >> n;
    } while (n < 1 || n > 100);

    GenerarMatriz(M, n);

    cout << "\nMatriz generada:" << endl;
    MostrarMatriz(M, n);

    return 0;
}

void GenerarMatriz(int M[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            M[i][j] = 2 * i + j + 1;
        }
    }
}

void MostrarMatriz(int M[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}