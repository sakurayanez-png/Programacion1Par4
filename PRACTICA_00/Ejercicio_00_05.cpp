// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 18/08/2026
#include <iostream>
using namespace std;
int main()
{
    int x, y, aux;
    cout << "Digite el valor de x: ";
    cin >> x;
    cout << "Digite el valor de y: ";
    cin >> y;
    /*
    x = 5;
    y = 10;
    */
    aux = x;
    x = y;
    y = aux;
    cout << "\nEl nuevo valor de x es: " << x << endl;
    cout << "El nuevo valor de y es: " << y << endl;
    return 0;
}