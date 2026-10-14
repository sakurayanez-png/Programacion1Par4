// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 7/10/2026
#include <iostream>
using namespace std;
void LeerMatriz(int matriz[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Ingrese el elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
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
void CambiarFilas(int matriz[100][100], int n)
{
    int auxiliar;
    for (int j = 0; j < n; j++)
    {
        auxiliar = matriz[0][j];
        matriz[0][j] = matriz[n - 1][j];
        matriz[n - 1][j] = auxiliar;
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
        LeerMatriz(matriz, n);
        cout << endl << "Matriz original:" << endl;
        MostrarMatriz(matriz, n);
        CambiarFilas(matriz, n);
        cout << endl << "Matriz intercambiada:" << endl;
        MostrarMatriz(matriz, n);
    }
    else
    {
        cout << "El orden debe estar entre 1 y 100." << endl;
    }
    return 0;
}