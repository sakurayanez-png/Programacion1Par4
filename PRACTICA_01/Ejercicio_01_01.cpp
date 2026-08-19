// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 18/08/2026
#include <iostream>
using namespace std;
int main()
{
    int anio;
    cout << "Ingrese un año bisiesto: ";
    cin >> anio;
    if ((anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0))
    {
        cout << "El año es bisiesto." << endl;
    }
    else
    {
        cout << "El año no es bisiesto." << endl;
    }
    return 0;
}