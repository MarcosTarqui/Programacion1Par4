//Materia: Programacion 1
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. mecatronica
//Fecha de creacion: 17/08/26
#include <iostream>

using namespace std;

int main ()
{
    double a, b, c, d, resultado;

    cout << "Digite el valor de a: "; 
    cin >> a;
    cout << "Digite el valor de b: "; 
    cin >> b;
    cout << "Digite el valor de c: "; 
    cin >> c;
    cout << "Digite el valor de d: "; 
    cin >> d;

    resultado = (a + b) / (c + d);

    cout << "El resultado es: " << resultado << endl;

    return 0;
}