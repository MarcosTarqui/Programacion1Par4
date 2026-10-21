// Materia: Programación I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa.
// Fecha creación: 14/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarPuntuaciones(vector<int> &Puntos, int N);
void MostrarPuntuaciones(const vector<int> &Puntos);
void OrdenarBurbuja(vector<int> &Puntos);
void MostrarPodio(const vector<int> &Puntos);

int main()
{
    srand(time(0));

    int N;
    do
    {
        cout << "Ingrese el numero de jugadores: ";
        cin >> N;
    } while (N < 1);

    vector<int> Puntos;
    LlenarPuntuaciones(Puntos, N);

    cout << "\nPuntuaciones originales:" << endl;
    MostrarPuntuaciones(Puntos);

    OrdenarBurbuja(Puntos);

    cout << "\nPuntuaciones ordenadas (mayor a menor):" << endl;
    MostrarPuntuaciones(Puntos);

    cout << endl;
    MostrarPodio(Puntos);

    return 0;
}

void LlenarPuntuaciones(vector<int> &Puntos, int N)
{
    for (int i = 0; i < N; i++)
    {
        Puntos.push_back(rand() % 100 + 1);   // 1 a 100
    }
}

void MostrarPuntuaciones(const vector<int> &Puntos)
{
    for (size_t i = 0; i < Puntos.size(); i++)
    {
        cout << Puntos[i] << "  ";
    }
    cout << endl;
}

void OrdenarBurbuja(vector<int> &Puntos)
{
    int n = Puntos.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (Puntos[j] < Puntos[j + 1])   // mayor a menor
            {
                int aux = Puntos[j];
                Puntos[j] = Puntos[j + 1];
                Puntos[j + 1] = aux;
            }
        }
    }
}

void MostrarPodio(const vector<int> &Puntos)
{
    string lugares[3] = {"1er lugar", "2do lugar", "3er lugar"};
    int cantidad = Puntos.size() < 3 ? Puntos.size() : 3;

    cout << "===== PODIO =====" << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << lugares[i] << ": " << Puntos[i] << " puntos" << endl;
    }
}