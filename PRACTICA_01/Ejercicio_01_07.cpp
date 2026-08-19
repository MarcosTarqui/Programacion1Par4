//Materia: Programacion 1
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. mecatronica
//Fecha de creacion: 17/08/26
#include <iostream>

using namespace std;

int main ()
{
    int numero;
    int suma = 0;
    int contador = 0;
    cout << "Ingresar numero:";
    cin >> numero;
    while( numero != 0)
    {
        suma = suma + (numero % 10);
        contador ++;
        numero = numero / 10;
    }
    cout << numero << "tiene: " << contador <<" cifras" << endl ,
    cout << "La suma de sus digitos es: " << suma;
    return 0;

}