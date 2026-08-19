//Materia: Programacion 1
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. mecatronica
//Fecha de creacion: 17/08/26
#include <iostream>

using namespace std;

int main ()
{
    int numero = 0;
    cout << "ingresar numero: ";
    cin >> numero;
    switch (numero)
    {
        case 1:
        cout << "Lunes";
        break;

        case 2:
        cout << "Martes";
        break;

        case 3:
        cout << "Miercoles";
        break;

        case 4:
        cout << "Jueves";
        break;

        case 5:
        cout << "Viernes";
        break;

        case 6:
        cout << "Sabado";
        break;

        case 7:
        cout << "Domingo";
        break;

        default:
        cout << "Numero no valido";
        break;
    }
    return 0;
}