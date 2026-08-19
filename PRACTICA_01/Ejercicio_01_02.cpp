// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 18/08/2026
#include <iostream>
using namespace std;
int main()
{
    double precio, precio_final;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    precio_final = precio * 1.13;
    cout << "Precio con IVA: " << precio_final << endl;
    return 0;
}