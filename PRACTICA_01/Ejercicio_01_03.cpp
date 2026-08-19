//Materia: Programacion 1
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. mecatronica
//Fecha de creacion: 17/08/26
#include <iostream>

using namespace std;

int main ()
{
    int edad = 0;
    char sexo = 0;
    double altura = 0;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su sexo M/F: ";
    cin >> sexo;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;

    cout << "Datos ingresados"<<endl;
    cout << "Edad: " << edad << " anios" << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << " metros" << endl;
    return 0;
}