// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creacion: 09/09/2026
#include <iostream>

using namespace std;

void Cambio (int n, int &cien,int &cincuenta,int &veinte, int &diez, int &cinco, int &uno );

int main ()
{
    int dolares , cien, cincuenta, veinte, diez, cinco, uno;
    cout << "ingresar cantidad en dolares: ";
    cin >> dolares;
    Cambio (dolares,cien,cincuenta, veinte, diez, cinco, uno);
    return 0;
}

void Cambio (int n, int &cien,int &cincuenta,int &veinte, int &diez, int &cinco, int &uno )
{
    cien = n / 100;
    n %= 100; 
    cincuenta = n / 50;
    n %= 50;
    veinte = n / 20;
    n %= 20;
    diez = n / 10;
    n %= 10;
    cinco = n / 5;
    n %= 5;
    uno = n;
    cout << "Billetes de 100: " << cien << endl;
    cout << "Billetes de 50 : " << cincuenta << endl;
    cout << "Billetes de 20 : " << veinte << endl;
    cout << "Billetes de 10 : " << diez << endl;
    cout << "Billetes de 5  : " << cinco << endl;
    cout << "Billetes de 1  : " << uno << endl;
}