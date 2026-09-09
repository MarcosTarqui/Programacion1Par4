// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 27/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    srand (time(NULL));
    int aux = 1;
    int numero = rand () % (10-1+1)+1;
    for (int i=1; i <= numero ; i++)
    {
       aux *= i;
    } 
    cout << "Numero generado: " << numero << endl;
    cout << "Factorial: " << aux;

}

