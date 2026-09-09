// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 8/09/2026
#include <iostream>
using namespace std;
double CalcularPrecioTotal(double precio, double impuesto = 13) 
{
    double total;
    total = precio + (precio * impuesto / 100);
    return total;
}
int main() 
{
    double precio;
    double total;
    cout << "Ingrese el precio: ";
    cin >> precio;
    cout << "Precio total con IVA: " << CalcularPrecioTotal(precio) << endl;
    return 0;
}