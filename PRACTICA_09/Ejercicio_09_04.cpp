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
void LlenarMatriz(int matriz[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz[i][j] = GenerarAleatorio(1, 10);
        }
    }
}
void MostrarMatriz(int matriz[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
bool EsPuntoDeSilla(int matriz[100][100], int n, int m, int &valor, int &fila, int &columna)
{
    bool encontrado = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool menorFila = true;
            bool mayorColumna = true;
            for (int k = 0; k < m; k++)
            {
                if (matriz[i][k] < matriz[i][j])
                {
                    menorFila = false;
                }
            }
            for (int k = 0; k < n; k++)
            {
                if (matriz[k][j] > matriz[i][j])
                {
                    mayorColumna = false;
                }
            }
            if (menorFila && mayorColumna && !encontrado)
            {
                valor = matriz[i][j];
                fila = i + 1;
                columna = j + 1;
                encontrado = true;
            }
        }
    }
    return encontrado;
}
int main()
{
    srand(time(0));
    int n, m;
    int valor = 0, fila = 0, columna = 0;
    int matriz[100][100];
    cout << "Ingrese el numero de filas: ";
    cin >> n;
    cout << "Ingrese el numero de columnas: ";
    cin >> m;
    if (n >= 1 && n <= 100 && m >= 1 && m <= 100)
    {
        LlenarMatriz(matriz, n, m);
        cout << endl << "Matriz generada:" << endl;
        MostrarMatriz(matriz, n, m);
        if (EsPuntoDeSilla(matriz, n, m, valor, fila, columna))
        {
            cout << "Punto de silla encontrado: " << valor << endl;
            cout << "Fila: " << fila << endl;
            cout << "Columna: " << columna << endl;
        }
        else
        {
            cout << "No se encontro ningun punto de silla." << endl;
        }
    }
    else
    {
        cout << "Las dimensiones deben estar entre 1 y 100." << endl;
    }
    return 0;
}