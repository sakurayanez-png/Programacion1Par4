// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 14/10/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>
using namespace std;
float GenerarTiempo()
{
    return (rand() % 1001 + 10000) / 1000.0;
}
void LlenarVector(vector<float>& Tiempos)
{
    for (int i = 0; i < Tiempos.size(); i++)
    {
        Tiempos[i] = GenerarTiempo();
    }
}
void MostrarVector(vector<float> Tiempos)
{
    for (int i = 0; i < Tiempos.size(); i++)
    {
        cout << Tiempos[i] << " segundos" << endl;
    }
}
void OrdenarInsercion(vector<float>& Tiempos)
{
    for (int i = 1; i < Tiempos.size(); i++)
    {
        float aux = Tiempos[i];
        int j = i - 1;
        while (j >= 0 && Tiempos[j] > aux)
        {
            Tiempos[j + 1] = Tiempos[j];
            j--;
        }
        Tiempos[j + 1] = aux;
    }
}
int main()
{
    srand(time(0));
    cout << fixed << setprecision(2);
    int N;
    cout << "Ingrese la cantidad de corredores: ";
    cin >> N;
    if (N > 0)
    {
        vector<float> Tiempos(N);
        LlenarVector(Tiempos);
        cout << "Tiempos originales:" << endl;
        MostrarVector(Tiempos);
        OrdenarInsercion(Tiempos);
        cout << "Tiempos ordenados de menor a mayor:" << endl;
        MostrarVector(Tiempos);
    }
    else
    {
        cout << "Ingrese una cantidad mayor a cero." << endl;
    }
    return 0;
}