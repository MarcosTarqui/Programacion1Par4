// Programa: Adivina el numero
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    int numero1 = 0;
    int numero2 = 0;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2)
    {
        cout << "Serie descendente: " << endl;
        for (int i = numero1; i >= numero2; i--)
        {
            cout << i << ", ";
        }
    }
    else
    {
        cout << "Serie ascendente: " << endl;
        for (int i = numero1; i <= numero2; i++)
        {
            cout << i << ", ";
        }
    }

    cout << endl;
    return 0;
}
