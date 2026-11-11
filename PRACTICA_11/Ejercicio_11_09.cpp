// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 11/11/2026
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Tarea
{
    string descripcion;
    bool completada;
};
void IngresarTareas(vector<Tarea> & tareas, int n)
{
    Tarea tarea;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la descripcion de la tarea " << i + 1 << ": ";
        getline(cin, tarea.descripcion);
        tarea.completada = false;
        tareas.push_back(tarea);
    }
}
void MostrarPendientes(vector<Tarea> tareas)
{
    bool hayPendientes = false;
    cout << "\nTAREAS PENDIENTES" << endl;
    for (int i = 0; i < tareas.size(); i++)
    {
        if (tareas[i].completada == false)
        {
            cout << i + 1 << ". " << tareas[i].descripcion << endl;
            hayPendientes = true;
        }
    }
    if (hayPendientes == false)
    {
        cout << "No hay tareas pendientes." << endl;
    }
}
void CompletarTarea(vector<Tarea> & tareas)
{
    int n;
    cout << "Ingrese el numero de la tarea que desea completar: ";
    cin >> n;
    if (n >= 1 && n <= tareas.size())
    {
        tareas[n - 1].completada = true;
        cout << "Tarea marcada como completada." << endl;
    }
    else
    {
        cout << "Numero de tarea incorrecto." << endl;
    }
}
void MenuTareas(vector<Tarea> & tareas)
{
    int opcion;
    do
    {
        cout << "\nMENU DE TAREAS" << endl;
        cout << "1. Mostrar tareas pendientes" << endl;
        cout << "2. Marcar tarea como completada" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
            case 1:
                MostrarPendientes(tareas);
                break;
            case 2:
                CompletarTarea(tareas);
                break;
            case 0:
                cout << "Fin del programa." << endl;
                break;
            default:
                cout << "Opcion incorrecta." << endl;
                break;
        }
    } while (opcion != 0);
}
int main()
{
    vector<Tarea> tareas;
    int n;
    cout << "Cuantas tareas desea ingresar: ";
    cin >> n;
    cin.ignore(1000, '\n');
    if (n > 0)
    {
        IngresarTareas(tareas, n);
        MenuTareas(tareas);
    }
    else
    {
        cout << "La cantidad debe ser mayor que cero." << endl;
    }
    return 0;
}