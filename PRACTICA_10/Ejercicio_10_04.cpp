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
double GenerarPrecio()
{
    return (rand() % 9901 + 100) / 100.0;
}
void LlenarVector(vector<double>& Precios)
{
    for (int i = 0; i < Precios.size(); i++)
    {
        Precios[i] = GenerarPrecio();
    }
}
void MostrarVector(vector<double> Precios)
{
    for (int i = 0; i < Precios.size(); i++)
    {
        cout << Precios[i] << "\t";
    }
    cout << endl;
}
void OrdenarSeleccion(vector<double>& Precios)
{
    for (int i = 0; i < Precios.size() - 1; i++)
    {
        int menor = i;
        for (int j = i + 1; j < Precios.size(); j++)
        {
            if (Precios[j] < Precios[menor])
            {
                menor = j;
            }
        }
        double aux = Precios[i];
        Precios[i] = Precios[menor];
        Precios[menor] = aux;
    }
}
void MostrarBarato(vector<double> Precios)
{
    cout << "Producto mas barato: Bs " << Precios[0] << endl;
}
void MostrarCaro(vector<double> Precios)
{
    cout << "Producto mas caro: Bs " << Precios[Precios.size() - 1] << endl;
}
void MostrarMediana(vector<double> Precios)
{
    int N = Precios.size();
    if (N % 2 == 1)
    {
        cout << "Mediana: Bs " << Precios[N / 2] << endl;
    }
    else
    {
        double mediana = (Precios[N / 2 - 1] + Precios[N / 2]) / 2.0;
        cout << "Mediana: Bs " << mediana << endl;
    }
}
int main()
{
    srand(time(0));
    cout << fixed << setprecision(2);
    int N;
    cout << "Ingrese la cantidad de productos: ";
    cin >> N;
    if (N > 0)
    {
        vector<double> Precios(N);
        LlenarVector(Precios);
        cout << "Precios originales:" << endl;
        MostrarVector(Precios);
        OrdenarSeleccion(Precios);
        cout << "Precios ordenados:" << endl;
        MostrarVector(Precios);
        MostrarBarato(Precios);
        MostrarCaro(Precios);
        MostrarMediana(Precios);
    }
    else
    {
        cout << "Ingrese una cantidad mayor a cero." << endl;
    }
    return 0;
}