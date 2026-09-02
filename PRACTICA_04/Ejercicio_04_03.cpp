//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>

using namespace std;

float volumen (int radio, int altura);

int main ()
{
    int radio = 0;
    int altura = 0;
    cout << "Ingresar radio del cilindro:";
    cin >> radio;
    cout << "Ingresar altura del cilindro: ";
    cin >> altura;
    cout << "Volumen = " << volumen (radio, altura);
    return 0;
}
float volumen (int radio, int altura)
{
    float pi = 3.1416;
    float volumen = 0;
    volumen = pi * radio * radio * altura;
    return volumen;
}