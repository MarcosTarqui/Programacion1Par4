// Materia: Programación I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa.
// Fecha creación: 07/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarTemperaturas(int T[][DIAS]);
void MostrarTemperaturas(int T[][DIAS]);
void MayorTemperatura(int T[][DIAS], int &mayor, int &semana, int &dia);
void PromedioSemanal(int T[][DIAS]);
int ContarMayoresA(int T[][DIAS], int limite);

int main()
{
    srand(time(0));
    
    int SEMANAS = 4;
    int DIAS = 7;
    int T[SEMANAS][DIAS];

    LlenarTemperaturas(T);

    cout << "Temperaturas registradas (semanas en filas, dias en columnas):" << endl;
    MostrarTemperaturas(T);

    int mayor, semana, dia;
    MayorTemperatura(T, mayor, semana, dia);
    cout << "\nTemperatura mas alta del mes: " << mayor << " C (Semana " << semana + 1 << ", Dia " << dia + 1 << ")" << endl;

    cout << "\nPromedio de cada semana:" << endl;
    PromedioSemanal(T);

    cout << "\nDias con temperatura mayor a 30 C: " << ContarMayoresA(T, 30) << endl;

    return 0;
}

void LlenarTemperaturas(int T[][DIAS])
{
    for (int i = 0; i < SEMANAS; i++)
    {
        for (int j = 0; j < DIAS; j++)
        {
            T[i][j] = rand() % (35-5+1)+5;   
        }
    }
}

void MostrarTemperaturas(int T[][DIAS])
{
    cout << "          ";
    for (int j = 0; j < DIAS; j++)
    {
        cout << "D" << j + 1 << "\t";
    }
    cout << endl;

    for (int i = 0; i < SEMANAS; i++)
    {
        cout << "Semana " << i + 1 << ": ";
        for (int j = 0; j < DIAS; j++)
        {
            cout << T[i][j] << "\t";
        }
        cout << endl;
    }
}

void MayorTemperatura(int T[][DIAS], int &mayor, int &semana, int &dia)
{
    mayor = T[0][0];
    semana = 0;
    dia = 0;

    for (int i = 0; i < SEMANAS; i++)
    {
        for (int j = 0; j < DIAS; j++)
        {
            if (T[i][j] > mayor)
            {
                mayor = T[i][j];
                semana = i;
                dia = j;
            }
        }
    }
}

void PromedioSemanal(int T[][DIAS])
{
    for (int i = 0; i < SEMANAS; i++)
    {
        int suma = 0;
        for (int j = 0; j < DIAS; j++)
        {
            suma += T[i][j];
        }
        cout << "Semana " << i + 1 << ": " << (double)suma / DIAS << " C" << endl;
    }
}

int ContarMayoresA(int T[][DIAS], int limite)
{
    int contador = 0;
    for (int i = 0; i < SEMANAS; i++)
    {
        for (int j = 0; j < DIAS; j++)
        {
            if (T[i][j] > limite)
                contador++;
        }
    }
    return contador;
}
