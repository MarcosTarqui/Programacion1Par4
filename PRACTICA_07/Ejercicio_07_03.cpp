// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 24/09/2026
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void IntroducirCalificaciones(vector <int> &Calificaciones, int n, int calificacion);
float SumaTotal(vector <int> &Calificaciones, int n);
float Promedio (vector <int> &Calificaciones, int n) ;
float Varianza (vector <int> &Calificaciones, int n);
void Desviacion(vector <int> &Calificaciones, int n);

int main ()
{
    system ("cls");
    int n;
    int calificacion = 0;
    cout << "Cuantas calificaciones introducira: ";
    cin >> n;
    vector <int> Calificaciones(n);
    IntroducirCalificaciones(Calificaciones, n, calificacion);
    cout << "La suma total de las calificaciones es : " << SumaTotal(Calificaciones,n) << endl;
    cout << "El promedio es : " << Promedio(Calificaciones,n) << endl;
    Desviacion(Calificaciones,n);
    cout << "La varianza es de: " << Varianza(Calificaciones,n);
    return 0;
}


void IntroducirCalificaciones(vector <int> &Calificaciones, int n, int calificacion)
{
    for (int i = 0; i < n ; i++)
    {
        cout << "Calificacion " << i+1 << ": ";
        cin >> calificacion;
        Calificaciones[i] = calificacion;
    }

    for (int i = 0; i < n ; i++)
    {
        cout << Calificaciones[i]<< endl;
    }
}

float SumaTotal(vector <int> &Calificaciones, int n)
{
    int suma = 0;
    for (int i = 0; i < n ; i++)
    {
        suma += Calificaciones[i];
    }
    return suma;
}

float Promedio (vector <int> &Calificaciones, int n) 
{
    float promedio = SumaTotal(Calificaciones,n)/n;
    return promedio;
}

void Desviacion(vector <int> &Calificaciones, int n)
{
    float desviacion = 0;
    float promedio = Promedio(Calificaciones,n);
    cout << "Calificaciones \t|" << "Desviacion" << endl;
    for (int i = 0; i < n ; i++)
    {
        desviacion = Calificaciones[i]-promedio;
        cout << Calificaciones[i] << "\t        |" << desviacion << endl;
    }
}

float Varianza (vector <int> &Calificaciones, int n)
{
    float promedio = Promedio(Calificaciones,n);
    float varianza = 0;
    for (int i= 0; i< n; i++)
    {
        varianza += ((Calificaciones[i] - promedio)*(Calificaciones[i] - promedio))/n; 
    }
    return varianza;
}
