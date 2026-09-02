//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>

using namespace std;

int Area (int base , int altura);

int main ()
{
    int base = 0;
    int altura = 0;
    cout << "ingresar base del triangulo: ";
    cin >> base;
    cout << "ingresar altura del triangulo: ";
    cin >> altura;
    cout << "El area del triangulo es: " << Area(base, altura);
    return 0;
}

int Area (int base , int altura)
{
    int area = 0;
    area = (base * altura)/2;
    return area;
}