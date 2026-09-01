// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 1/09/2026
#include <iostream>
using namespace std;
int sumarNaturales(int n) 
{
    int suma = 0;
    for (int i = 1; i <= n; i++) 
    {
        suma = suma + i;
    }
    return suma;
}
int main() 
{
    int n;
    cout << "Ingrese un numero positivo: ";
    cin >> n;
    if (n > 0) 
    {
        cout << "La suma desde 1 hasta " << n << " es: " << sumarNaturales(n) << endl;
    } 
    else 
    {
        cout << "Debe ingresar un numero positivo." << endl;
    }
    return 0;
}