//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>

using namespace std;

int Contador (int n);

int main ()
{
    int numero = 0;
    cout << "Ingresar numero: ";
    cin >> numero;
    cout << "Cantidad de digitos: " << Contador (numero);
    return 0;

}
int Contador (int n)
{
    int contador = 0;
    while(n > 0)
    {
        n /= 10;
        contador ++;
    }
    return contador;
}