// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026
#include <iostream>
using namespace std;
int main()
{
    int numero, factorial = 1;
    cout << "Digite un numero: ";
    cin >> numero;
    for(int i = 1; i <= numero; i++)
    {
        factorial *= i;
    }
    cout << "\nEl factorial del numero es: " << factorial << endl;
    return 0;
}