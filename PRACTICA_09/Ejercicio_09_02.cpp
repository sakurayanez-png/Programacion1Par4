// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 7/10/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int GenerarAleatorio(int min, int max)
{
    return rand() % (max - min + 1) + min;
}
void LlenarMatriz(int matrix[100][100], int n, int a, int b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = GenerarAleatorio(a, b);
        }
    }
}
void MostrarMatriz(int matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}
int SumaUltimaColumna(int matrix[100][100], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += matrix[i][n - 1];
    }
    return suma;
}
int ProductoUltimaFila(int matrix[100][100], int n)
{
    int producto = 1;
    for (int j = 0; j < n; j++)
    {
        producto *= matrix[n - 1][j];
    }
    return producto;
}
void ElementoMayor(int matrix[100][100], int n, int &mayor, int &fila, int &columna)
{
    mayor = matrix[0][0];
    fila = 1;
    columna = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] > mayor)
            {
                mayor = matrix[i][j];
                fila = i + 1;
                columna = j + 1;
            }
        }
    }
}
double Promedio(int matrix[100][100], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            suma += matrix[i][j];
        }
    }
    return (double)suma / (n * n);
}
int main()
{
    srand(time(0));
    int n, a, b;
    int mayor, fila, columna;
    int suma, producto;
    double promedio;
    int matrix[100][100];
    cout << "Ingrese el tamano de la matriz:" << endl;
    cin >> n;
    if (n >= 1 && n <= 100)
    {
        cout << "Ingrese el limite inferior:" << endl;
        cin >> a;
        cout << "Ingrese el limite superior:" << endl;
        cin >> b;
        if (a <= b)
        {
            LlenarMatriz(matrix, n, a, b);
            cout << endl << "Matriz generada:" << endl;
            MostrarMatriz(matrix, n);
            suma = SumaUltimaColumna(matrix, n);
            producto = ProductoUltimaFila(matrix, n);
            ElementoMayor(matrix, n, mayor, fila, columna);
            promedio = Promedio(matrix, n);
            cout << "La suma de la ultima columna es: " << suma << endl;
            cout << "El producto de la ultima fila es: " << producto << endl;
            cout << "El elemento mayor es: " << mayor << endl;
            cout << "La fila del elemento mayor es: " << fila << endl;
            cout << "La columna del elemento mayor es: " << columna << endl;
            cout << "El promedio es: " << promedio << endl;
        }
        else
        {
            cout << "El limite inferior no puede ser mayor que el superior." << endl;
        }
    }
    else
    {
        cout << "El orden debe estar entre 1 y 100." << endl;
    }
    return 0;
}