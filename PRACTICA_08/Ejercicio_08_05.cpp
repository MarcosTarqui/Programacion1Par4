// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa
// Fecha creacion: 07/10/2026

#include <iostream>
#include <string>

using namespace std;

int contarCaracteres(string texto);
void extraerURL(string url);

int main()
{
    string url;
    cout << "Ingrese la URL: ";
    cin >> url;
    extraerURL(url);
    return 0;
}

int contarCaracteres(string texto)
{
    int contador = 0;
    while (texto[contador] != '\0')
    {
        contador++;
    }
    return contador;
}

void extraerURL(string url)
{
    int longitud = contarCaracteres(url);
    string protocolo = "";
    string dominio = "";
    string ruta = "";
    int i = 0;
    while (i < longitud && url[i] != ':')
    {
        protocolo += url[i];
        i++;
    }
    i = i + 3;

    while (i < longitud && url[i] != '/')
    {
        dominio += url[i];
        i++;
    }

    while (i < longitud)
    {
        ruta += url[i];
        i++;
    }

    cout << "Protocolo: " << protocolo << endl;
    cout << "Dominio: " << dominio << endl;
    cout << "Ruta: " << ruta << endl;
}