// Materia: Programacion I, Paralelo 4
// Autor:Marcos Fabio Tarqui Aruquipa.
// Fecha creacion: 07/10/2026
// Numero de ejercicio: 1
#include <iostream>

using namespace std;


void LeerMatriz(int M[][100], int n);
void IntercambiarFilas(int M[][100], int n);
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

    LeerMatriz(M, n);

    cout << "\nMatriz original:" << endl;
    MostrarMatriz(M, n);

    IntercambiarFilas(M, n);

    cout << "\nMatriz con la fila 1 y la fila " << n << " intercambiadas:" << endl;
    MostrarMatriz(M, n);

    return 0;
}

void LeerMatriz(int M[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> M[i][j];
        }
    }
}

void IntercambiarFilas(int M[][100], int n)
{
    for (int j = 0; j < n; j++)
    {
        int aux = M[0][j];
        M[0][j] = M[n - 1][j];
        M[n - 1][j] = aux;
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