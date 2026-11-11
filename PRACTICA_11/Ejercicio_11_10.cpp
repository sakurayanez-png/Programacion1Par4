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
struct Equipo
{
    string nombre;
    int partidosJugados;
    int victorias;
    int puntosTotales;
};
void RegistrarEquipos(vector<Equipo> & equipos, int n)
{
    Equipo equipo;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el nombre del equipo " << i + 1 << ": ";
        getline(cin, equipo.nombre);
        equipo.partidosJugados = 0;
        equipo.victorias = 0;
        equipo.puntosTotales = 0;
        equipos.push_back(equipo);
    }
}
void SimularPartido(vector<Equipo> & equipos)
{
    if (equipos.size() < 2)
    {
        cout << "Se necesitan al menos dos equipos para simular un partido." << endl;
        return;
    }
    int equipo1 = rand() % equipos.size();
    int equipo2 = rand() % equipos.size();
    while (equipo2 == equipo1)
    {
        equipo2 = rand() % equipos.size();
    }
    cout << "\nPARTIDO" << endl;
    cout << equipos[equipo1].nombre << " vs " << equipos[equipo2].nombre << endl;
    int ganador = rand() % 2;
    if (ganador == 0)
    {
        cout << "Ganador: " << equipos[equipo1].nombre << endl;
        equipos[equipo1].victorias++;
        equipos[equipo1].partidosJugados++;
        equipos[equipo1].puntosTotales = equipos[equipo1].puntosTotales + 3;
        equipos[equipo2].partidosJugados++;
    }
    else
    {
        cout << "Ganador: " << equipos[equipo2].nombre << endl;
        equipos[equipo2].victorias++;
        equipos[equipo2].partidosJugados++;
        equipos[equipo2].puntosTotales = equipos[equipo2].puntosTotales + 3;
        equipos[equipo1].partidosJugados++;
    }
}
void SimularVariosPartidos(vector<Equipo> & equipos)
{
    int cantidad;
    cout << "Cuantos partidos desea simular: ";
    cin >> cantidad;
    if (cantidad > 0)
    {
        for (int i = 0; i < cantidad; i++)
        {
            cout << "\nPARTIDO NUMERO " << i + 1 << endl;
            SimularPartido(equipos);
        }
    }
    else
    {
        cout << "La cantidad debe ser mayor que cero." << endl;
    }
}
void OrdenarEquipos(vector<Equipo> & equipos)
{
    Equipo auxiliar;
    for (int i = 0; i < equipos.size() - 1; i++)
    {
        for (int j = 0; j < equipos.size() - 1 - i; j++)
        {
            if (equipos[j].puntosTotales < equipos[j + 1].puntosTotales)
            {
                auxiliar = equipos[j];
                equipos[j] = equipos[j + 1];
                equipos[j + 1] = auxiliar;
            }
        }
    }
}
void MostrarTabla(vector<Equipo> equipos)
{
    cout << "\n========== TABLA DE POSICIONES ==========" << endl;
    cout << "Posicion | Equipo | Jugados | Victorias | Puntos" << endl;
    for (int i = 0; i < equipos.size(); i++)
    {
        cout << i + 1 << " | " << equipos[i].nombre << " | " << equipos[i].partidosJugados << " | " << equipos[i].victorias << " | " << equipos[i].puntosTotales << endl;
    }
}
int main()
{
    vector<Equipo> equipos;
    int n;
    srand(time(NULL));
    cout << "Cuantos equipos participaran: ";
    cin >> n;
    cin.ignore(1000, '\n');
    if (n >= 2)
    {
        RegistrarEquipos(equipos, n);
        SimularVariosPartidos(equipos);
        OrdenarEquipos(equipos);
        MostrarTabla(equipos);
    }
    else
    {
        cout << "Debe registrar al menos dos equipos." << endl;
    }
    return 0;
}
