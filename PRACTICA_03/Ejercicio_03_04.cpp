// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa 
// Carrera del estudiante: Ing. Mecatronica
// Fecha creacion: 21/08/2026
#include <iostream>

using namespace std;

int main ()
{
   int numero = 0;
   int factorial = 0 ;
   int sumafactorial = 0;
   
   cout << "Numero limite de suma factorial: ";
   cin >> numero;

   for (int i = 1 ; i <= numero ; i++)
   {
        factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        sumafactorial += factorial;
   }
   cout << "Suma de factoriales: " << sumafactorial + 1 ;
   return 0;
}