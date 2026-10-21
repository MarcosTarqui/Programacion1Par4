// Materia: Programación I, Paralelo 4
// Autor: Marcos Fabio Tarqui| Aruquipa.
// Fecha creación: 14/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void LlenarPrecios(vector<double> &Precios, int N);
void MostrarPrecios(const vector<double> &Precios);
void OrdenarSeleccion(vector<double> &Precios);
void MostrarMasBarato(const vector<double> &Precios);
void MostrarMasCaro(const vector<double> &Precios);
void MostrarMediana(const vector<double> &Precios);

int main()
{
    srand(time(0));

    int N;
    do
    {
        cout << "Ingrese el numero de productos: ";
        cin >> N;
    } while (N < 1);

    vector<double> Precios;
    LlenarPrecios(Precios, N);

    cout << "\nPrecios originales:" << endl;
    MostrarPrecios(Precios);

    OrdenarSeleccion(Precios);

    cout << "\nPrecios ordenados (ascendente):" << endl;
    MostrarPrecios(Precios);

    cout << endl;
    MostrarMasBarato(Precios);
    MostrarMasCaro(Precios);
    MostrarMediana(Precios);

    return 0;
}

void LlenarPrecios(vector<double> &Precios, int N)
{
    for (int i = 0; i < N; i++)
    {
        // 1.00 a 50.00
        double precio = (rand() % 4901 + 100) / 100.0;
        Precios.push_back(precio);
    }
}

void MostrarPrecios(const vector<double> &Precios)
{
    for (size_t i = 0; i < Precios.size(); i++)
    {
        cout << Precios[i] << "  ";
    }
    cout << endl;
}

void OrdenarSeleccion(vector<double> &Precios)
{
    int n = Precios.size();

    for (int i = 0; i < n - 1; i++)
    {
        int posMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (Precios[j] < Precios[posMin])
                posMin = j;
        }

        double aux = Precios[i];
        Precios[i] = Precios[posMin];
        Precios[posMin] = aux;
    }
}

void MostrarMasBarato(const vector<double> &Precios)
{
    cout << "Producto mas barato: " << Precios[0] << endl;
}

void MostrarMasCaro(const vector<double> &Precios)
{
    cout << "Producto mas caro: " << Precios[Precios.size() - 1] << endl;
}

void MostrarMediana(const vector<double> &Precios)
{
    int n = Precios.size();
    double mediana;

    if (n % 2 == 1)
        mediana = Precios[n / 2];
    else
        mediana = (Precios[n / 2 - 1] + Precios[n / 2]) / 2;

    cout << "Mediana de los precios: " << mediana << endl;
}