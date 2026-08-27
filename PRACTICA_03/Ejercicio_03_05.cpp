#include <iostream>

using namespace std;

int main ()
{
    int LimInferior = 1;
    int LimSuperior = 100;
    int numaleatorio = 0;
    int numeroUsuario = 0;
    int intentos = 0;

    srand(time(NULL));
    numaleatorio = (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;

    cout << "Piensa un numero entero entre " << LimInferior << " y " << LimSuperior << endl;

    do
    {
        cout << "Ingresa un numero: ";
        cin >> numeroUsuario;
        intentos++;

        if (numeroUsuario < numaleatorio)
        {
            cout << "El numero es mayor" << endl;
        }
        else if (numeroUsuario > numaleatorio)
        {
            cout << "El numero es menor" << endl;
        }
        else
        {
            cout << "Adivinaste el numero" << endl;
        }

    } while (numeroUsuario != numaleatorio);

    cout << "Lo lograste en " << intentos << " intentos" << endl;

    return 0;
}