// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026
#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Ingrese un numero entero del 1 al 10: ";
    cin >> numero;
    if (numero >= 1 && numero <= 10) {
        cout << "Tabla de multiplicar de " << numero << ":\n";
        for (int i = 1; i <= 10; ++i) {
            cout << numero << " x " << i << " = " << numero * i << "\n";
        }
    } else {
        cout << "Numero fuera de rango.\n";
    }
    return 0;
}