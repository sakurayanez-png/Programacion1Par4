// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026
#include <iostream>
using namespace std;
int main()
{
    int numero;
    int suma = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }
    if (suma == numero) {
        cout << numero << " es un numero perfecto." << endl;
    } else {
        cout << numero << " no es un numero perfecto." << endl;
    }
    return 0;
}