// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 24/09/2026
#include <iostream>
using namespace std;
void llenarVector(int vector[], int n, int &cantidad)
{
    int numero = 0;
    while (cantidad < n && numero >= 0)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero >= 0)
        {
            vector[cantidad] = numero;
            cantidad++;
        }
    }
}
void mostrarVector(int vector[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}
int main()
{
    int vector[100];
    int cantidad = 0;
    llenarVector(vector, 100, cantidad);
    cout << "Elementos introducidos:" << endl;
    mostrarVector(vector, cantidad);
    return 0;
}