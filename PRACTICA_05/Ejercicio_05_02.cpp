// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 8/09/2026
#include <iostream>
using namespace std;
void ModificarValores(int valor, int &referencia) 
{
    valor = valor * 2;
    referencia = referencia + 10;
    cout << "\nDentro de la funcion:" << endl;
    cout << "valor = " << valor << endl;
    cout << "referencia = " << referencia << endl;
}
int main() 
{
    int a = 5;
    int b = 10;
    cout << "Antes:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    ModificarValores(a, b);
    cout << "\nDespues:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}