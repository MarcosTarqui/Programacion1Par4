// Materia: Programación I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa.
// Fecha creación: 14/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<string> GenerarNombresCompletos(string Nombres[], string Apellidos[], int N);
void OrdenarAlfabeticamente(vector<string> &Lista);
void MostrarLista(const vector<string> &Lista);

int main()
{
    srand(time(0));

    string Nombres[10] = {"Ana", "Luis", "Maria", "Carlos", "Sofia",
                          "Pedro", "Lucia", "Jorge", "Elena", "Diego"};
    string Apellidos[10] = {"Perez", "Gomez", "Lopez", "Rojas", "Mamani",
                            "Quispe", "Flores", "Vargas", "Torrez", "Rios"};
    int N;

    do
    {
        cout << "Ingrese el numero de estudiantes: ";
        cin >> N;
    } while (N < 1);

    vector<string> Lista = GenerarNombresCompletos(Nombres, Apellidos, N);

    cout << "\nLista original:" << endl;
    MostrarLista(Lista);

    OrdenarAlfabeticamente(Lista);

    cout << "\nLista en orden alfabetico (A a Z):" << endl;
    MostrarLista(Lista);

    return 0;
}

vector<string> GenerarNombresCompletos(string Nombres[], string Apellidos[], int N)
{
    vector<string> lista;
    for (int i = 0; i < N; i++)
    {
        lista.push_back(Nombres[rand() % 10] + " " + Apellidos[rand() % 10]);
    }
    return lista;
}

void OrdenarAlfabeticamente(vector<string> &Lista)
{
    int n = Lista.size();

    for (int i = 0; i < n - 1; i++)
    {
        int posMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (Lista[j] < Lista[posMin])
                posMin = j;
        }

        string aux = Lista[i];
        Lista[i] = Lista[posMin];
        Lista[posMin] = aux;
    }
}

void MostrarLista(const vector<string> &Lista)
{
    for (size_t i = 0; i < Lista.size(); i++)
    {
        cout << i + 1 << ". " << Lista[i] << endl;
    }
}