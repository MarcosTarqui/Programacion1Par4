// Materia: Programacion I, Paralelo 4
// Autor: Marcos Fabio Tarqui Aruquipa 
// Carrera del estudiante: Ing. Mecatronica
// Fecha creacion: 21/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GeneraNumeroAleatorio(int min, int max);
int SimulacionVentas(int n);

int main()
{
    int n = 0;

    srand(time(NULL)); 
    system("cls");
    cout << "Ingrese la cantidad de ventas: ";
    cin >> n;
    SimulacionVentas(n);
    return 0;
}

int GeneraNumeroAleatorio(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

int SimulacionVentas(int n)
{
    int compra = 0;
    int utilidad = 0;
    int impuesto = 0;
    int descuento = 0;
    int sumaTotalVentas = 0;
    int sumaTotalIVA = 0;
    int sumaDescuentos = 0;
    int productoMasCaro = 0;
    int productoMasBarato = 10000;
    int nroProductoMasCaro = 0;
    int nroProductoMasBarato = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << "COMPRA " << i << endl;
        compra = GeneraNumeroAleatorio(10, 10000);
        cout << "La compra inicial sin descuento es: " << compra << endl;
        // Para saber si hay descuento
        if (compra >= 2500)
        {
            descuento = compra * 0.05;
            compra = compra - descuento;
        }

        // Para saber el producto mas caro
        if (compra > productoMasCaro)
        {
            productoMasCaro = compra;
            nroProductoMasCaro = i;
        }

        // Para saber el producto mas barato
        if (compra < productoMasBarato)
        {
            productoMasBarato = compra;
            nroProductoMasBarato = i;
        }

        utilidad = compra * 0.87;
        impuesto = compra * 0.13;
        sumaTotalVentas += compra;
        sumaTotalIVA += impuesto;
        sumaDescuentos += descuento;
        cout << "La compra es: " << compra << endl;
        cout << "La utilidad es: " << utilidad << endl;
        cout << "El impuesto es: " << impuesto << endl;
        cout << "El descuento es: " << descuento << endl;
        cout << "--------------------------------" << endl;
    }

    cout << "REPORTE TOTAL DE COMPRAS" << endl;
    cout << "El total de compra es: " << sumaTotalVentas << endl;
    cout << "El total del impuesto es: " << sumaTotalIVA << endl;
    cout << "El total del descuento es: " << sumaDescuentos << endl;
    cout << "El producto mas caro es de la venta: " << nroProductoMasCaro << endl;
    cout << "Y el monto es de: " << productoMasCaro << endl;
    cout << "El producto mas barato es de la venta: " << nroProductoMasBarato << endl;
    cout << "Y el monto es de: " << productoMasBarato << endl;

    return 0;
}