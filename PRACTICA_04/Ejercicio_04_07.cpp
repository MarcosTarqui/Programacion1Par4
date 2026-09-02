//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>

using namespace std;

int distancia (int velocidad, int tiempo);

int main ()
{
    int velocidad  = 0;
    int tiempo = 0;
    cout << "Ingresar velocidad en m/s: ";
    cin >> velocidad;
    cout << "ingresar tiempo en s: ";
    cin >> tiempo;
    cout << "Distancia recorrida = " << distancia ( velocidad ,tiempo) << " m";
}
int distancia (int velocidad, int tiempo)
{
    int distancia = 0;
    distancia = velocidad * tiempo;
    return distancia;
}