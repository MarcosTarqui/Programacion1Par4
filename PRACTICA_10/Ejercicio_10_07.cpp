// Materia: Programación I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa.
// Fecha creación: 14/10/2026
// Número de ejercicio: 7

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ALUMNOS = 5;
const int NOTAS = 3;

void LlenarNotas(int Notas[][NOTAS]);
void CalcularPromedios(int Notas[][NOTAS], vector<float> &Promedios);
void OrdenarAlumnos(vector<string> &Nombres, int Notas[][NOTAS], vector<float> &Promedios);
void IntercambiarAlumnos(vector<string> &Nombres, int Notas[][NOTAS], vector<float> &Promedios, int a, int b);
void MostrarBoletin(const vector<string> &Nombres, int Notas[][NOTAS], const vector<float> &Promedios);

int main()
{
    srand(time(0));

    vector<string> Nombres = {"Sofia", "Carlos", "Ana", "Pedro", "Lucia"};
    int Notas[ALUMNOS][NOTAS];
    vector<float> Promedios(ALUMNOS);

    LlenarNotas(Notas);
    CalcularPromedios(Notas, Promedios);

    cout << "Boletin original:" << endl;
    MostrarBoletin(Nombres, Notas, Promedios);

    OrdenarAlumnos(Nombres, Notas, Promedios);

    cout << "\nBoletin ordenado alfabeticamente:" << endl;
    MostrarBoletin(Nombres, Notas, Promedios);

    return 0;
}

void LlenarNotas(int Notas[][NOTAS])
{
    for (int i = 0; i < ALUMNOS; i++)
    {
        for (int j = 0; j < NOTAS; j++)
        {
            Notas[i][j] = rand() % 101;   // 0 a 100
        }
    }
}

void CalcularPromedios(int Notas[][NOTAS], vector<float> &Promedios)
{
    for (int i = 0; i < ALUMNOS; i++)
    {
        int suma = 0;
        for (int j = 0; j < NOTAS; j++)
        {
            suma += Notas[i][j];
        }
        Promedios[i] = (float)suma / NOTAS;
    }
}

void IntercambiarAlumnos(vector<string> &Nombres, int Notas[][NOTAS], vector<float> &Promedios, int a, int b)
{
    string auxNombre = Nombres[a];
    Nombres[a] = Nombres[b];
    Nombres[b] = auxNombre;

    for (int j = 0; j < NOTAS; j++)
    {
        int auxNota = Notas[a][j];
        Notas[a][j] = Notas[b][j];
        Notas[b][j] = auxNota;
    }

    float auxProm = Promedios[a];
    Promedios[a] = Promedios[b];
    Promedios[b] = auxProm;
}

void OrdenarAlumnos(vector<string> &Nombres, int Notas[][NOTAS], vector<float> &Promedios)
{
    int n = Nombres.size();

    for (int i = 0; i < n - 1; i++)
    {
        int posMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (Nombres[j] < Nombres[posMin])
                posMin = j;
        }

        if (posMin != i)
            IntercambiarAlumnos(Nombres, Notas, Promedios, i, posMin);
    }
}

void MostrarBoletin(const vector<string> &Nombres, int Notas[][NOTAS], const vector<float> &Promedios)
{
    cout << "Nombre\t\t| Nota 1 | Nota 2 | Nota 3 | Promedio" << endl;
    for (int i = 0; i < ALUMNOS; i++)
    {
        cout << Nombres[i] << "\t\t| ";
        for (int j = 0; j < NOTAS; j++)
        {
            cout << Notas[i][j] << "\t | ";
        }
        cout << Promedios[i] << endl;
    }
}