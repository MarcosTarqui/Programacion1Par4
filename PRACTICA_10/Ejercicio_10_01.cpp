// Materia: Programación I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa.
// Fecha creación: 14/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void GenerarNombresCompletos(string Nombres[], string Apellidos[], int N);

int main()
{
    srand(time(0));

    string Nombres[10] = {"Ana", "Luis", "Maria", "Carlos", "Sofia","Pedro", "Lucia", "Jorge", "Elena", "Diego"};
    string Apellidos[10] = {"Perez", "Gomez", "Lopez", "Rojas", "Mamani","Quispe", "Flores", "Vargas", "Torrez", "Rios"};
    int N;

    do
    {
        cout << "Cuantos nombres completos desea generar: ";
        cin >> N;
    } while (N < 1);

    GenerarNombresCompletos(Nombres, Apellidos, N);

    return 0;
}

void GenerarNombresCompletos(string Nombres[], string Apellidos[], int N)
{
    for (int i = 0; i < N; i++)
    {
        int posNombre = rand() % 10;
        int posApellido = rand() % 10;

        cout << i + 1 << ". " << Nombres[posNombre] << " "
             << Apellidos[posApellido] << endl;
    }
}
