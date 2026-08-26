// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    long  suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma += i;
    }
    cout << "La suma de 1 hasta " << n << " es: " << suma << "\n";
    return 0;
}