//Materia: Programacion 1
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. mecatronica
//Fecha de creacion: 17/08/26
#include <iostream>

using namespace std;

int main ()
{
    double precio = 0;
    cout <<"Ingresar precio del producto:";
    cin >> precio;
    cout << "Precio sin IVA: " << precio <<endl;
    cout << "Precio con IVA: " << precio + ( precio*0.13 );
    return 0;
}