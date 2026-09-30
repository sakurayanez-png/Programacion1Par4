// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 24/09/2026
#include <iostream>
using namespace std;
void mostrarVector(double voltios[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << voltios[i] << " ";
        if ((i + 1) % 3 == 0)
        {
            cout << endl;
        }
    }
}
int main()
{
    double voltios[9] =
    {
        11.95, 16.32, 12.15,
        8.22, 15.98, 26.22,
        13.54, 6.45, 17.59
    };
    mostrarVector(voltios, 9);
    return 0;
}