// Materia: Programación I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa.
// Fecha creación: 07/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarMatriz(int M[][100], int n, int A, int B);
void MostrarMatriz(int M[][100], int n);
int SumaUltimaColumna(int M[][100], int n);
int ProductoUltimaFila(int M[][100], int n);
void MayorValor(int M[][100], int n, int &mayor, int &fila, int &columna);
double Promedio(int M[][100], int n);

int main()
{
    srand(time(0));

    int M[100][100];
    int n, A, B;

    do
    {
        cout << "Ingrese el orden N de la matriz (1 a " << 100 << "): ";
        cin >> n;
    } while (n < 1 || n > 100);

    cout << "Ingrese el valor minimo A: ";
    cin >> A;
    do
    {
        cout << "Ingrese el valor maximo B (B >= A): ";
        cin >> B;
    } while (B < A);

    LlenarMatriz(M, n, A, B);

    cout << "\nMatriz generada:" << endl;
    MostrarMatriz(M, n);

    int mayor, fila, columna;
    MayorValor(M, n, mayor, fila, columna);

    cout << "\nSuma de la ultima columna: " << SumaUltimaColumna(M, n) << endl;
    cout << "Producto de la ultima fila: " << ProductoUltimaFila(M, n) << endl;
    cout << "Mayor valor: " << mayor << " en la posicion ("
         << fila + 1 << ", " << columna + 1 << ")" << endl;
    cout << "Promedio: " << Promedio(M, n) << endl;

    return 0;
}

void LlenarMatriz(int M[][100], int n, int A, int B)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            M[i][j] = rand() % (B - A + 1) + A;
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

int SumaUltimaColumna(int M[][100], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += M[i][n - 1];
    }
    return suma;
}

int ProductoUltimaFila(int M[][100], int n)
{
    int producto = 1;
    for (int j = 0; j < n; j++)
    {
        producto *= M[n - 1][j];
    }
    return producto;
}

void MayorValor(int M[][100], int n, int &mayor, int &fila, int &columna)
{
    mayor = M[0][0];
    fila = 0;
    columna = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (M[i][j] > mayor)
            {
                mayor = M[i][j];
                fila = i;
                columna = j;
            }
        }
    }
}

double Promedio(int M[][100], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            suma += M[i][j];
        }
    }
    return (double)suma / (n * n);
}
