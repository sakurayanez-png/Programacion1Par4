// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 18/08/2026
#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "El numero es par." << endl;
    }
    else
    {
        cout << "El numero es impar." << endl;
    }
    return 0;
}