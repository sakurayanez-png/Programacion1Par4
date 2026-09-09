// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 1/09/2026
#include <iostream>
#include <ctime>
using namespace std;
int main() 
{
    int numero;
    int factorial = 1;
    srand(time(0));
    numero = rand() % 10 + 1;
    for (int i = 1; i <= numero; i++) 
    {
        factorial = factorial * i;
    }
    cout << "Numero generado: " << numero << endl;
    cout << "Factorial: " << factorial << endl;
    return 0;
}