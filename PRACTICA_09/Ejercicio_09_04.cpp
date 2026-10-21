// Materia: Programación I, Paralelo 4
// Autor:MArcos Fabio Tarqui Aruquipa.
// Fecha creación: 07/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarMatriz(int M[][100], int N, int Mc);
void MostrarMatriz(int M[][100], int N, int Mc);
bool BuscarPuntoSilla(int M[][100], int N, int Mc);
bool EsMenorDeFila(int M[][100], int Mc, int fila, int col);
bool EsMayorDeColumna(int M[][100], int N, int fila, int col);

int main()
{
    srand(time(0));

    int M[100][100];
    int N, Mc;

    do
    {
        cout << "Ingrese el numero de filas N (1 a " << 100 << "): ";
        cin >> N;
    } while (N < 1 || N > 100);

    do
    {
        cout << "Ingrese el numero de columnas M (1 a " << 100 << "): ";
        cin >> Mc;
    } while (Mc < 1 || Mc > 100);

    LlenarMatriz(M, N, Mc);

    cout << "\nMatriz generada:" << endl;
    MostrarMatriz(M, N, Mc);

    cout << endl;
    if (!BuscarPuntoSilla(M, N, Mc))
    {
        cout << "No se encontro ningun punto de silla." << endl;
    }

    return 0;
}

void LlenarMatriz(int M[][100], int N, int Mc)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < Mc; j++)
        {
            M[i][j] = rand() % 10 + 1;
        }
    }
}

void MostrarMatriz(int M[][100], int N, int Mc)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < Mc; j++)
        {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}

bool EsMenorDeFila(int M[][100], int Mc, int fila, int col)
{
    for (int j = 0; j < Mc; j++)
    {
        if (M[fila][j] < M[fila][col])
            return false;
    }
    return true;
}

bool EsMayorDeColumna(int M[][100], int N, int fila, int col)
{
    for (int i = 0; i < N; i++)
    {
        if (M[i][col] > M[fila][col])
            return false;
    }
    return true;
}

bool BuscarPuntoSilla(int M[][100], int N, int Mc)
{
    bool encontrado = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < Mc; j++)
        {
            if (EsMenorDeFila(M, Mc, i, j) && EsMayorDeColumna(M, N, i, j))
            {
                cout << "Punto de silla: " << M[i][j]
                     << " en la posicion (" << i + 1 << ", " << j + 1 << ")" << endl;
                encontrado = true;
            }
        }
    }
    return encontrado;
}