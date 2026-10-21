// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 14/10/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int GenerarAleatorio(int min, int max)
{
    return rand() % (max - min + 1) + min;
}
void LlenarVector(vector<int>& Puntuaciones)
{
    for (int i = 0; i < Puntuaciones.size(); i++)
    {
        Puntuaciones[i] = GenerarAleatorio(1, 100);
    }
}
void MostrarVector(vector<int> Puntuaciones)
{
    for (int i = 0; i < Puntuaciones.size(); i++)
    {
        cout << Puntuaciones[i] << "\t";
    }
    cout << endl;
}
void OrdenarBurbuja(vector<int>& Puntuaciones)
{
    for (int i = 0; i < Puntuaciones.size() - 1; i++)
    {
        for (int j = 0; j < Puntuaciones.size() - 1 - i; j++)
        {
            if (Puntuaciones[j] < Puntuaciones[j + 1])
            {
                int aux = Puntuaciones[j];
                Puntuaciones[j] = Puntuaciones[j + 1];
                Puntuaciones[j + 1] = aux;
            }
        }
    }
}
void MostrarPodio(vector<int> Puntuaciones)
{
    cout << "PODIO" << endl;
    int cantidad = Puntuaciones.size();
    if (cantidad >= 1)
    {
        cout << "Primer lugar: " << Puntuaciones[0] << endl;
    }
    if (cantidad >= 2)
    {
        cout << "Segundo lugar: " << Puntuaciones[1] << endl;
    }
    if (cantidad >= 3)
    {
        cout << "Tercer lugar: " << Puntuaciones[2] << endl;
    }
}
int main()
{
    srand(time(0));
    int N;
    cout << "Ingrese la cantidad de jugadores: ";
    cin >> N;
    if (N > 0)
    {
        vector<int> Puntuaciones(N);
        LlenarVector(Puntuaciones);
        cout << "Puntuaciones originales:" << endl;
        MostrarVector(Puntuaciones);
        OrdenarBurbuja(Puntuaciones);
        cout << "Puntuaciones ordenadas:" << endl;
        MostrarVector(Puntuaciones);
        MostrarPodio(Puntuaciones);
    }
    else
    {
        cout << "Ingrese una cantidad mayor a cero." << endl;
    }
    return 0;
}