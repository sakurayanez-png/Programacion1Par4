// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 14/10/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;
int GenerarAleatorio(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void GenerarNombres(vector<string> Nombres, vector<string> Apellidos, int N)
{
    for (int i = 0; i < N; i++)
    {
        int n = GenerarAleatorio(0, 9);
        int a = GenerarAleatorio(0, 9);
        cout << Nombres[n] << " " << Apellidos[a] << endl;
    }
}
int main()
{
    srand(time(0));
    vector<string> Nombres =
    {
        "Leon", "Sakura", "Catalina", "Sebastian", "Mike",
        "Ana", "Pedro", "Lucia", "Carlos", "Maria"
    };
    vector<string> Apellidos =
    {
        "Perez", "Lopez", "Flores", "Garcia", "Mamani",
        "Rojas", "Vargas", "Torres", "Rivera", "Suarez"
    };
    int N;
    cout << "Cuantos nombres desea generar: ";
    cin >> N;
    if (N > 0)
    {
        GenerarNombres(Nombres, Apellidos, N);
    }
    else
    {
        cout << "Ingrese una cantidad mayor a cero." << endl;
    }
    return 0;
}