// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 07/10/2026

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void mostrarAleatorio(string nombres[], string apellidos[], int edades[], int tam)
{
    int indice = rand() % tam;

    cout << "Nombre: " << nombres[indice] << endl;
    cout << "Apellido: " << apellidos[indice] << endl;
    cout << "Edad: " << edades[indice] << endl;
    cout << "----------------------" << endl;
}

int main()
{
    string nombres[10] = {"Marcos", "Juan", "Maria", "Pedro", "Lucia", "Andres", "Sofia", "Diego", "Valeria", "Carlos"};
    string apellidos[10] = {"Tarqui", "Perez", "Gonzalez", "Flores", "Rojas", "Mamani", "Choque", "Quispe", "Vargas", "Rivera"};
    int edades[10] = {20, 19, 22, 21, 23, 20, 18, 24, 19, 22};

    int n;

    srand(time(0));

    cout << "Ingrese la cantidad de veces: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Seleccion " << i << ":" << endl;
        mostrarAleatorio(nombres, apellidos, edades, 10);
    }

    return 0;
}