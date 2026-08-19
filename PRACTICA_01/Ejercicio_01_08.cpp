// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 18/08/2026
#include <iostream>
using namespace std;
int main()
{
    double nota;
    cout << "Ingrese una nota entre 0 y 100: ";
    cin >> nota;
    while (nota < 0 || nota > 100)
    {
        cout << "Nota invalida. Ingrese nuevamente: ";
        cin >> nota;
    }
    cout << "Nota registrada correctamente" << endl;
    return 0;
}