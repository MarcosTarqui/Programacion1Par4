// Materia: Programación I, Paralelo 4
// Autor:Marcos Fabio Tarqui Aruquipa.
// Fecha creación: 07/10/2026
// Número de ejercicio: 5

#include <iostream>

using namespace std;

const int FILAS = 5;
const int COLUMNAS = 5;

void InicializarSala(int Sala[][COLUMNAS]);
void MostrarSala(int Sala[][COLUMNAS]);
void ComprarEntrada(int Sala[][COLUMNAS]);
void Estadisticas(int Sala[][COLUMNAS]);
int MostrarMenu();

int main()
{
    int Sala[FILAS][COLUMNAS];
    int opcion;

    InicializarSala(Sala);

    do
    {
        opcion = MostrarMenu();

        switch (opcion)
        {
            case 1:
                MostrarSala(Sala);
                break;
            case 2:
                ComprarEntrada(Sala);
                break;
            case 3:
                Estadisticas(Sala);
                break;
            case 4:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}

int MostrarMenu()
{
    int opcion;
    cout << "\n===== CINE VIP =====" << endl;
    cout << "1. Mostrar la sala" << endl;
    cout << "2. Comprar entrada" << endl;
    cout << "3. Estadisticas" << endl;
    cout << "4. Salir" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion;
    return opcion;
}

void InicializarSala(int Sala[][COLUMNAS])
{
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            Sala[i][j] = 0;
        }
    }
}

void MostrarSala(int Sala[][COLUMNAS])
{
    cout << "\n    ";
    for (int j = 0; j < COLUMNAS; j++)
    {
        cout << j + 1 << " ";
    }
    cout << endl;

    for (int i = 0; i < FILAS; i++)
    {
        cout << "F" << i + 1 << "  ";
        for (int j = 0; j < COLUMNAS; j++)
        {
            if (Sala[i][j] == 0)
                cout << "L ";
            else
                cout << "O ";
        }
        cout << endl;
    }
}

void ComprarEntrada(int Sala[][COLUMNAS])
{
    int fila, asiento;

    cout << "Ingrese la fila (1 a " << FILAS << "): ";
    cin >> fila;
    cout << "Ingrese el asiento (1 a " << COLUMNAS << "): ";
    cin >> asiento;

    if (fila < 1 || fila > FILAS || asiento < 1 || asiento > COLUMNAS)
    {
        cout << "Fila o asiento fuera de rango" << endl;
    }
    else if (Sala[fila - 1][asiento - 1] == 0)
    {
        Sala[fila - 1][asiento - 1] = 1;
        cout << "Reserva exitosa" << endl;
    }
    else
    {
        cout << "Asiento no disponible" << endl;
    }
}

void Estadisticas(int Sala[][COLUMNAS])
{
    int ocupados = 0;
    int total = FILAS * COLUMNAS;

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            if (Sala[i][j] == 1)
                ocupados++;
        }
    }

    int libres = total - ocupados;

    cout << "Asientos libres: " << libres << " ("
         << (double)libres * 100 / total << "%)" << endl;
    cout << "Asientos ocupados: " << ocupados << " ("
         << (double)ocupados * 100 / total << "%)" << endl;
}