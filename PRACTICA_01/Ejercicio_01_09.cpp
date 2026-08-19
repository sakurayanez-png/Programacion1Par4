// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 18/08/2026
#include <iostream>
using namespace std;
int main()
{
    int N;
    int digito;
    int filas, columnas;
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;
    while (N > 0)
    {
        digito = N % 10;
        cout << "\nCuadricula para el digito " << digito << ":" << endl;
        filas = 1;
        while (filas <= digito)
        {
            columnas = 1;
            while (columnas <= digito)
            {
                cout << "*";
                columnas++;
            }
            cout << endl;
            filas++;
        }
        N = N / 10;
    }
    return 0;
}