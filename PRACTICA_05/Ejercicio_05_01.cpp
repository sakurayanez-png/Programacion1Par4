// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 8/09/2026
#include <iostream>
using namespace std;
void IntercambiarValores(int &a, int &b) 
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}
int main() 
{
    int a = 10;
    int b = 20;
    cout << "Antes del intercambio:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    IntercambiarValores(a, b);
    cout << "\nDespues del intercambio:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}