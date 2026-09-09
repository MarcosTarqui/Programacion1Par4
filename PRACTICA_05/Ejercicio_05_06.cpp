// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 27/08/2026
#include <iostream>

using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota);

int main() 
{
    double sumaTotal = 0.0;
    int cantidadNotas = 0;
    int n = 0;

    cout << "Ingrese la cantidad de notas: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        double nota = 0.0;
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        
        agregarNota(sumaTotal, cantidadNotas, nota);
    }

    cout << "Total acumulado: " << sumaTotal << endl;
    cout << "Cantidad de notas: " << cantidadNotas << endl;
    return 0;
}

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal += nuevaNota;
    cantidadNotas++;
}