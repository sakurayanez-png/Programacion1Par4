// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 7/10/2026
#include <iostream>
using namespace std;
void GenerarMatriz(int matriz[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = i * 2 + j + 1;
        }
    }
}
void MostrarMatriz(int matriz[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    int matriz[100][100];
    cout << "Ingrese el orden de la matriz: ";
    cin >> n;
    if (n >= 1 && n <= 100)
    {
        GenerarMatriz(matriz, n);
        MostrarMatriz(matriz, n);
    }
    else
    {
        cout << "El orden debe estar entre 1 y 100." << endl;
    }
    return 0;
}