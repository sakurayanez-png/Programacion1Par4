// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 11/11/2026
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
struct Estudiante
{
    string nombres;
    int notaFinal;
};
void GenerarEstudiantes(vector<Estudiante> & estudiantes, int n)
{
    Estudiante estudiante;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        getline(cin, estudiante.nombres);
        estudiante.notaFinal = rand() % 101;
        estudiantes.push_back(estudiante);
    }
}
void MostrarAprobadosYReprobados(vector<Estudiante> estudiantes)
{
    cout << "\nESTUDIANTES APROBADOS" << endl;
    for (int i = 0; i < estudiantes.size(); i++)
    {
        if (estudiantes[i].notaFinal >= 60)
        {
            cout << estudiantes[i].nombres << " - Nota: " << estudiantes[i].notaFinal << endl;
        }
    }
    cout << "\nESTUDIANTES REPROBADOS" << endl;
    for (int i = 0; i < estudiantes.size(); i++)
    {
        if (estudiantes[i].notaFinal < 60)
        {
            cout << estudiantes[i].nombres << " - Nota: " << estudiantes[i].notaFinal << endl;
        }
    }
}
int main()
{
    vector<Estudiante> estudiantes;
    int n;
    srand(time(NULL));
    cout << "Cuantos estudiantes desea registrar: ";
    cin >> n;
    cin.ignore(1000, '\n');
    if (n > 0)
    {
        GenerarEstudiantes(estudiantes, n);
        MostrarAprobadosYReprobados(estudiantes);
    }
    else
    {
        cout << "La cantidad debe ser mayor que cero." << endl;
    }
    return 0;
}
