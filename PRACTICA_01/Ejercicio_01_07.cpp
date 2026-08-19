// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 18/08/2026
#include <iostream>
using namespace std;
int main()
{
    int N;
    int cantidad = 0;
    int suma = 0;
    int digito;
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;
    while (N > 0)
    {
        digito = N % 10;
        suma = suma + digito;
        cantidad = cantidad + 1;
        N = N / 10;
    }
    cout << "Cantidad de digitos: " << cantidad << endl;
    cout << "Suma de los digitos: " << suma << endl;
    return 0;
}