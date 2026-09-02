//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>

using namespace std;

void conversion (int bs, float Oficial, float Paralelo);

int main ()
{
    int bs = 0;
    float CambioOficial = 0;
    float CambioParalelo = 0;
    cout << "Ingresar cantidad en Bs: ";
    cin >> bs;
    cout << "Ingresar cotizacion oficial: ";
    cin >> CambioOficial;
    cout << "Ingresar cotizacion paralela: ";
    cin >> CambioParalelo;
    conversion(bs, CambioOficial, CambioParalelo);
    return 0;
}

void conversion (int bs, float Oficial, float Paralelo)
{
    float DolarOficial = 0 ;
    float DolarParalelo =  0;
    DolarOficial = bs / Oficial;
    DolarParalelo = bs / Paralelo;
    cout << "Cambio Oficial: " << DolarOficial << "$" << endl;
    cout << "Cambio Paralelo: " << DolarParalelo << "$" << endl;
}