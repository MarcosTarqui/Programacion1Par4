//Materia: Programacion 1
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. mecatronica
//Fecha de creacion: 17/08/26
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double cateto1;
    double cateto2;
    double hipotenusa;

    cout << "Ingrese cateto 1: "; 
    cin >> cateto1;
    cout << "Ingrese cateto 2: "; 
    cin >> cateto2;

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}