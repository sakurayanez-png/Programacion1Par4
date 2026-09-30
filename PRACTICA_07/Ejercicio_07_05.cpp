// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 24/09/2026
#include <iostream>
using namespace std;
void leerVector(int vector[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> vector[i];
    }
}
void combinarVectores( int vector1[], int vector2[], int vector3[], int n)
{
    for (int i = 0; i < n; i++)
    {
        vector3[i] = vector1[i];
    }
    for (int i = 0; i < n; i++)
    {
        vector3[n + i] = vector2[i];
    }
}
void mostrarVector(int vector[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Ingrese la dimension de los vectores: ";
    cin >> n;
    int vector1[n];
    int vector2[n];
    int vector3[2 * n];
    cout << "Ingrese los elementos del vector 1:" << endl;
    leerVector(vector1, n);
    cout << "Ingrese los elementos del vector 2:" << endl;
    leerVector(vector2, n);
    combinarVectores(vector1, vector2, vector3, n);
    cout << "Vector combinado:" << endl;
    mostrarVector(vector3, 2 * n);
    return 0;
}