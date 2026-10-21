// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 14/10/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
int GenerarAleatorio(int min, int max)
{
    return rand() % (max - min + 1) + min;
}
void LlenarMatriz(int Notas[5][3])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Notas[i][j] = GenerarAleatorio(1, 100);
        }
    }
}
void MostrarMatriz(int Notas[5][3])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Notas[i][j] << "\t";
        }
        cout << endl;
    }
}
void CalcularPromedio(vector<float>& NotasFinales, int Notas[5][3])
{
    for (int i = 0; i < 5; i++)
    {
        float suma = 0;
        for (int j = 0; j < 3; j++)
        {
            suma += Notas[i][j];
        }
        NotasFinales[i] = suma / 3;
    }
}
void OrdenarEstudiantes(vector<string>& Estudiantes, int Notas[5][3], vector<float>& NotasFinales)
{
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - 1 - i; j++)
        {
            if (Estudiantes[j] > Estudiantes[j + 1])
            {
                string auxNombre = Estudiantes[j];
                Estudiantes[j] = Estudiantes[j + 1];
                Estudiantes[j + 1] = auxNombre;
                float auxPromedio = NotasFinales[j];
                NotasFinales[j] = NotasFinales[j + 1];
                NotasFinales[j + 1] = auxPromedio;
                for (int k = 0; k < 3; k++)
                {
                    int auxNota = Notas[j][k];
                    Notas[j][k] = Notas[j + 1][k];
                    Notas[j + 1][k] = auxNota;
                }
            }
        }
    }
}
void MostrarBoletin(vector<string> Estudiantes, int Notas[5][3], vector<float> NotasFinales)
{
    cout << "\nBOLETIN DE NOTAS" << endl;
    cout << left
         << setw(15) << "Nombre"
         << setw(10) << "Nota 1"
         << setw(10) << "Nota 2"
         << setw(10) << "Nota 3"
         << setw(10) << "Promedio" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << left
             << setw(15) << Estudiantes[i]
             << setw(10) << Notas[i][0]
             << setw(10) << Notas[i][1]
             << setw(10) << Notas[i][2]
             << fixed << setprecision(2)
             << NotasFinales[i] << endl;
    }
}
int main()
{
    srand(time(0));
    vector<string> Estudiantes =
    {
        "Leon", "Sakura", "Catalina", "Sebastian", "Mike"
    };
    int Notas[5][3];
    vector<float> NotasFinales(5);
    LlenarMatriz(Notas);
    cout << "Matriz de notas originales:" << endl;
    MostrarMatriz(Notas);
    CalcularPromedio(NotasFinales, Notas);
    OrdenarEstudiantes(Estudiantes, Notas, NotasFinales);
    MostrarBoletin(Estudiantes, Notas, NotasFinales);
    return 0;
}