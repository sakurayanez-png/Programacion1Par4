// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 30/09/2026
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
void mostrarPersonas( vector<string> nombres, vector<string> apellidos, vector<int> edades, int n)
{
    for (int i = 0; i < n; i++)
    {
        int posicion = rand() % 10;
        cout << nombres[posicion] << " ";
        cout << apellidos[posicion] << " ";
        cout << edades[posicion] << " anos" << endl;
    }
}
int main()
{
    srand(time(0));
    vector<string> nombres =
    {
        "Ana", "Luis", "Maria", "Carlos", "Sofia",
        "Juan", "Laura", "Pedro", "Camila", "Diego"
    };

    vector<string> apellidos =
    {
        "Perez", "Gomez", "Flores", "Mamani", "Lopez",
        "Rojas", "Vargas", "Quispe", "Torrez", "Castro"
    };
    vector<int> edades =
    {
        18, 20, 19, 21, 22,
        18, 20, 23, 19, 21
    };
    int n;
    cout << "Cuantas personas desea generar: ";
    cin >> n;
    mostrarPersonas(nombres, apellidos, edades, n);
    return 0;
}