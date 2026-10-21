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
void LlenarNombres(vector<string>& Lista, vector<string> Nombres, vector<string> Apellidos)
{
    for (int i = 0; i < Lista.size(); i++)
    {
        int n = GenerarAleatorio(0, 9);
        int a = GenerarAleatorio(0, 9);
        Lista[i] = Nombres[n] + " " + Apellidos[a];
    }
}
void MostrarLista(vector<string> Lista)
{
    for (int i = 0; i < Lista.size(); i++)
    {
        cout << Lista[i] << endl;
    }
}
void OrdenarAlfabeticamente(vector<string>& Lista)
{
    for (int i = 0; i < Lista.size() - 1; i++)
    {
        for (int j = 0; j < Lista.size() - 1 - i; j++)
        {
            if (Lista[j] > Lista[j + 1])
            {
                string aux = Lista[j];
                Lista[j] = Lista[j + 1];
                Lista[j + 1] = aux;
            }
        }
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
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> N;
    if (N > 0)
    {
        vector<string> Lista(N);
        LlenarNombres(Lista, Nombres, Apellidos);
        cout << "Lista original:" << endl;
        MostrarLista(Lista);
        OrdenarAlfabeticamente(Lista);
        cout << "Lista ordenada alfabeticamente:" << endl;
        MostrarLista(Lista);
    }
    else
    {
        cout << "Ingrese una cantidad mayor a cero." << endl;
    }
    return 0;
}