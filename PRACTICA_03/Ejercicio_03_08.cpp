// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
    int N;
    cout << "Ingrese la cantidad de productos vendidos: ";
    cin >> N;
    srand(time(0));
    double sumatotal = 0;
    double totalIVA = 0;
    double totaldescuento = 0;
    double productomascaro = 0;
    double productomasbarato = 0;
    for (int i = 1; i <= N; i++) {
        // Generar precio entre 10 y 10000
        double precio = 10 + rand() % 9991;
        // Calcular utilidad e IVA
        double utilidad = precio * 0.87;
        double iva = precio * 0.13;
        // El precio inicial es la suma de utilidad + IVA
        double total = utilidad + iva;
        // Descuento del 5% si supera 2500 Bs
        double descuento = 0;
        if (total > 2500) {
            descuento = total * 0.05;
            total = total - descuento;
        }
        // Acumular resultados
        sumatotal += total;
        totalIVA += iva;
        totaldescuento += descuento;
        // Determinar producto más caro y más barato
        if (i == 1) {
            productomascaro = total;
            productomasbarato = total;
        }
        else {
            if (total > productomascaro) {
                productomascaro = total;
            }
            if (total < productomasbarato) {
                productomasbarato = total;
            }
        }
        cout << "\nProducto " << i << endl;
        cout << "Precio inicial: " << precio << " Bs" << endl;
        cout << "Utilidad (87%): " << utilidad << " Bs" << endl;
        cout << "IVA (13%): " << iva << " Bs" << endl;
        cout << "Descuento: " << descuento << " Bs" << endl;
        cout << "Precio final: " << total << " Bs" << endl;
    }
    cout << fixed << setprecision(2);
    cout << "\n========== REPORTE FINAL ==========" << endl;
    cout << "Dinero total ingresado: "
         << sumatotal << " Bs" << endl;
    cout << "IVA total: "
         << totalIVA << " Bs" << endl;
    cout << "Total descontado a clientes: "
         << totaldescuento << " Bs" << endl;
    cout << "Producto mas caro: "
         << productomascaro << " Bs" << endl;
    cout << "Producto mas barato: "
         << productomasbarato << " Bs" << endl;
    return 0;
}