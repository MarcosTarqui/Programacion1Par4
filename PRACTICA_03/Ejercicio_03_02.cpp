// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa 
// Carrera del estudiante: Ing. Mecatronica
// Fecha creacion: 21/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    int LimSuperior = 100;
    int LimInferior = 0;
    int numero = 0;
    int n = 0;
    int sumapar = 0;
    int sumaimpar = 0;
    int sumaprimos = 0;
    int divisores = 0;

    srand(time(NULL));

    cout << "Cuantos numeros desea generar: ";
    cin >> n;

    for (int i =1; i <= n ;i++)
    {
        numero = (rand () % (LimSuperior - LimInferior + 1 )) + LimInferior;
        cout << numero << endl;

        if ( numero % 2 == 0)
        {
            sumapar += numero ;
        }
        else 
        {
            sumaimpar += numero;
        }
        for (int i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                divisores += 1;
            }
        }
        if (divisores == 2)
        {
            sumaprimos += numero;
        }

    }
    cout << "Suma de numeros pares = " << sumapar << endl;
    cout << "Suma de numeros impares = " << sumaimpar << endl;
    cout << "Suma de numeros primos = " << sumaprimos << endl;
    return 0;
    
}