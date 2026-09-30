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
void sumarVectores( int vector1[], int vector2[], int vector3[], int n)
{
    for (int i = 0; i < n; i++)
    {
        vector3[i] = vector1[i] + vector2[i];
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
    int vector1[5];
    int vector2[5];
    int vector3[5];
    cout << "Ingrese los valores del vector1:" << endl;
    leerVector(vector1, 5);
    cout << "Ingrese los valores del vector2:" << endl;
    leerVector(vector2, 5);
    sumarVectores(vector1, vector2, vector3, 5);
    cout << "Vector3:" << endl;
    mostrarVector(vector3, 5);
    return 0;
}