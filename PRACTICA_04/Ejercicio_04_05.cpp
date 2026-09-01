// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 1/09/2026
#include <iostream>
using namespace std;
bool esPar(int numero) 
{
    return numero % 2 == 0;
}
int main() 
{
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    if (esPar(numero)) 
    {
        cout << "El numero es par." << endl;
    } 
    else 
    {
        cout << "El numero es impar." << endl;
    }
    return 0;
}