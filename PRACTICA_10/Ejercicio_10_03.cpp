// Materia: Programación I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa.
// Fecha creación: 14/10/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarTiempos(vector<float> &Tiempos, int N);
void MostrarTiempos(const vector<float> &Tiempos);
void OrdenarInsercion(vector<float> &Tiempos);

int main()
{
    srand(time(0));

    int N;
    do
    {
        cout << "Ingrese el numero de corredores: ";
        cin >> N;
    } while (N < 1);

    vector<float> Tiempos;
    LlenarTiempos(Tiempos, N);

    cout << "\nTiempos antes de ordenar:" << endl;
    MostrarTiempos(Tiempos);

    OrdenarInsercion(Tiempos);

    cout << "\nTiempos despues de ordenar (menor a mayor):" << endl;
    MostrarTiempos(Tiempos);

    return 0;
}

void LlenarTiempos(vector<float> &Tiempos, int N)
{
    for (int i = 0; i < N; i++)
    {
        float tiempo = (rand() % 1001 + 1000) / 100.0f;
        Tiempos.push_back(tiempo);
    }
}

void MostrarTiempos(const vector<float> &Tiempos)
{
    for (size_t i = 0; i < Tiempos.size(); i++)
    {
        cout << Tiempos[i] << " s" << "   ";
    }
    cout << endl;
}

void OrdenarInsercion(vector<float> &Tiempos)
{
    int n = Tiempos.size();

    for (int i = 1; i < n; i++)
    {
        float clave = Tiempos[i];
        int j = i - 1;

        while (j >= 0 && Tiempos[j] > clave)
        {
            Tiempos[j + 1] = Tiempos[j];
            j--;
        }
        Tiempos[j + 1] = clave;
    }
}