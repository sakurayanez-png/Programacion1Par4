// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026
#include <iostream>
using namespace std;
int main()
{
    int n;
    int factorial = 1;
    int suma = 0;
    cout << "Ingrese n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
        suma = suma + factorial;
    }
    cout << "La suma de factoriales es: " << suma << endl;
    return 0;
}