// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026
#include <iostream>
using namespace std;
int main()
{
    int n, suma = 0;
    cout << "Digite el numero de elementos: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }
    cout << "\nLa suma es: " << suma << endl;
    return 0;
}