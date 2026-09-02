//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>

using namespace std;

int Mayor (int num1, int num2, int num3);

int main ()
{
    int num1,num2,num3 = 0;
    cout << "Ingresar primer numero: ";
    cin >> num1;
    cout << "Ingresar segundo numero: ";
    cin >> num2;
    cout << "Ingresar tercer numero: ";
    cin >> num3;
    cout << "El numero mayor es: " << Mayor(num1, num2, num3); 

}

int Mayor (int num1, int num2, int num3)
{
    int mayor = 0;
    if (num1 > num2 && num1 > num3)
    {
        mayor = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        mayor = num2;
    }
    else if (num3 > num2 && num3 > num1)
    {
        mayor = num3;
    }
    return mayor;
}