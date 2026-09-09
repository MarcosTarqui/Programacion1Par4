//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 08/09/2026
#include <iostream>

using namespace std;
#include <iostream>
using namespace std;

void calc_años(int dias, int &año, int &mes, int &dia)
{
    año = 2000 + dias / 365;
    int diasRestantes = dias % 365;

    mes = diasRestantes / 30;
    dia = diasRestantes % 30;
}

int main()
{
    int dias;
    int año, mes, dia;

    cout << "Ingrese el numero de dias desde el 1/1/2000: ";
    cin >> dias;

    calc_años(dias, año, mes, dia);

    cout << "Año: " << año << endl;
    cout << "Mes: " << mes << endl;
    cout << "Dia: " << dia << endl;

    return 0;
}