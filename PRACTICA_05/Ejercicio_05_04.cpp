// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 27/08/2026
#include <iostream>

using namespace std;

double CalcularArea (double lado);
double CalcularArea (double base, double altura);
double CalcularArea (float radio, float PI);



int main ()
{
    float PI = 3.1416;
    float radio;
    double lado, base, altura;
    int opcion;
    cout << "Calcular area"<<endl;
    cout<< "1. Cuadrado"<< endl;
    cout << "2. Rectangulo"<<endl;
    cout << "3. Circulo"<< endl;
    cin >> opcion;
    switch (opcion)
    {
        case 1:
        cout << "ingresar lado de cuadrado: ";
        cin >> lado;
        cout << "Area: " << CalcularArea(lado);
        break;

        case 2:
        cout << "ingresar Base de rectangulo: ";
        cin >> base;
        cout << "ingresar altura: ";
        cin >> altura;
        cout << "Area: " << CalcularArea(base, altura);
        break;

        case 3:
        cout << "ingresar radio : ";
        cin >> radio;
        cout << "Area: " << CalcularArea(radio, PI);
        break;

        default:
        cout << "Error ";
        break;
    }

}

double CalcularArea (double lado)
{
    double AreaCuadrado = lado * lado;
    return AreaCuadrado;
}

double CalcularArea (double base, double altura)
{
    double AreaRectangulo = base * altura;
    return AreaRectangulo;
}

double CalcularArea (float radio, float PI)
{
    double AreaCirculo = PI * radio *radio;
    return AreaCirculo;
}