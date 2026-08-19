//Materia: Programacion 1
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. mecatronica
//Fecha de creacion: 17/08/26
#include <iostream>

using namespace std;

int main ()
{
    int numero;
    int digito;
    cout << "igresar numero: ";
    cin >> numero;

    while (numero != 0)
    {
        digito = numero % 10;
        for(int i = 0; i<= digito ; i++)
        {
            for(int j = 0; j < digito ; j++)
            
                cout << digito;
                cout << endl; 
        }
        numero = numero / 10;
    }
    return 0;
}