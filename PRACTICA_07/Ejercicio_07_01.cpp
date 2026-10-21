// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 24/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

void Voltajes();
void Temperaturas ();
void Caracteres();
void Años();
void Velocidades();
void Distancias();
float GenerarTemperaturas();
float GenerarVoltajes();


using namespace std;

int main ()
{
    srand(time(NULL));
    system ("cls");
    Voltajes();
    Temperaturas();
    Caracteres();
    Años();
    Velocidades();
    Distancias();
}

float GenerarVoltajes()
{
    float NumeroAleatorio = (rand()%(22000-2000+1)+2000);
    float VoltajesAleatorios = NumeroAleatorio / 100;
    return VoltajesAleatorios;
}

void Voltajes()
{
    float Voltajes[100];
    for (int i = 0; i<100; i++)
    {
        Voltajes[i] = GenerarVoltajes();
    }
    cout << "\tVOLTAJES"<<endl;
    for (int i = 0; i<100; i++)
    {
        cout << i+1 << ". " << Voltajes[i] <<endl;
    }
}

float GenerarTemperaturas()
{
    float Temperatura = (rand () % (10000)) / 100.00;
    return Temperatura;
}

void Temperaturas ()
{
    float Temperaturas[50];
    for (int i= 0; i<50 ;i++)
    {
        Temperaturas[i] = GenerarTemperaturas();
    }
    cout << "\tTEMPERATURAS" << endl;
    for (int i = 0; i < 50; i++)
    {
        cout << i+1 << ". "<< Temperaturas[i] << endl;
    }
}

void Caracteres()
{   
    char Caracteres [30];

    for (int i = 0; i < 30 ; i++)
    {
        char CaracterAlfabetico = rand () % (90-65+1)+65;
        char CaracterNumerico = rand() % (57-48+1)+48;
        int CaracterAlfanumerico = rand () % (2);

        if (CaracterAlfanumerico == 0)
        {
            Caracteres[i] = CaracterAlfabetico;
        }
        else if (CaracterAlfanumerico == 1)
        {
            Caracteres[i] = CaracterNumerico;
        }
    }
    cout << "CARACTERES" << endl;

    for (int i = 0; i < 30 ; i++)
    {
        cout << i+1 << ". " << Caracteres[i] << endl;
    }
}

void Años()
{
    int Años[100];
    for (int i=0; i<100; i++)
    {
        int año = rand () % (2025-1990+1)+1990;
        Años[i] = año;
    }
    cout << "ANIOS" << endl;
    for (int i= 0; i < 100 ; i++)
    {
        cout << i+1 << ". " << Años [i] << endl;
    }
}

void Velocidades ()
{
   float Velocidades[32];
   
   for (int i=0; i<32 ; i++)
   {
        float Velocidad = (rand () %(30000-1000+1)+1000) /100.00;
        Velocidades [i] = Velocidad;
   }

   cout << "VELOCIDADES" << endl;
   for (int i=0; i<32 ; i++)
   {
        cout << i+1 <<". " << Velocidades [i] << endl;
   }
   
}

void Distancias()
{
    float Distancias[1000];

    for (int i = 0; i < 1000; i++)
    {
        float Distancia = (rand () % (100000-100+1)+100)/100;
        Distancias [i] = Distancia;
    }
}