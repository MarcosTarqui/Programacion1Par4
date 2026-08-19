//Materia: Programacion 1
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. mecatronica
//Fecha de creacion: 17/08/26
#include <iostream>

using namespace std;

int main ()
{
    double practicas = 0;
    double teoria = 0;
    double participacion = 0;
    cout << "Ingresar nota de practicas: ";
    cin >> practicas;
    cout << "Ingresar nota teorica: ";
    cin >> teoria;
    cout << "Ingresar nota de participacion: ";
    cin>> participacion;
    cout << "Nota final: " << ((practicas * 0.30) + (teoria * 0.60) + (participacion * 0.10));
    return 0;
}