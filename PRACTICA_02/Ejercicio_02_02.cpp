// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026
#include <iostream>
using namespace std;
int main()
{
    int suma = 0, cuadrado;
    for (int i = 1; i <= 10; i++)
    {
        cuadrado = i * i;
        suma += cuadrado; // suma = suma + cuadrado
    }
    cout << "El resultado de la suma es: " << suma << endl;
    return 0;
}