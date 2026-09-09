// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 27/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Simulacion(int n);

int main ()
{
    srand(time(NULL));
    int n;
    cout << "Cuantas veces desea lazar la moneda: ";
    cin >> n;
    Simulacion(n);
    return 0;
}

void Simulacion(int n)
{   
    double cara;
    double cruz ;
    for (int i = 1; i <= n; i++ )
    {
        int Lanzamiento = rand()%(2);
        if (Lanzamiento == 0)
        {
            cara ++;
        }
        else
        {
            cruz++;
        }
    }
    cout << "caras: " << cara << endl;
    cout << "cruz: " << cruz << endl;
    cout << "Porcentaje de caras en " <<n << " lanzamientos:" << (cara / n)*100 << " %"<< endl;
    cout << "Porcentaje de cruz en " << n << " lanzamientos: " << (cruz / n)*100 << " %"<< endl;
}
