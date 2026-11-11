// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 11/11/2026
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Cancion
{
    string titulo;
    string artista;
    int duracionSegundos;
};
void IngresarCanciones(vector<Cancion> & canciones, int n)
{
    Cancion cancion;
    for (int i = 0; i < n; i++)
    {
        cout << "\nCANCION " << i + 1 << endl;
        cout << "Ingrese el titulo: ";
        getline(cin, cancion.titulo);
        cout << "Ingrese el artista: ";
        getline(cin, cancion.artista);
        cout << "Ingrese la duracion en segundos: ";
        cin >> cancion.duracionSegundos;
        cin.ignore(1000, '\n');
        canciones.push_back(cancion);
    }
}
void MostrarPlaylist(vector<Cancion> canciones)
{
    cout << "\nPLAYLIST" << endl;
    for (int i = 0; i < canciones.size(); i++)
    {
        cout << i + 1 << ". " << canciones[i].titulo << " - " << canciones[i].artista << " (" << canciones[i].duracionSegundos << " segundos)" << endl;
    }
}
void CalcularDuracionTotal(vector<Cancion> canciones)
{
    int totalSegundos = 0;
    for (int i = 0; i < canciones.size(); i++)
    {
        totalSegundos = totalSegundos + canciones[i].duracionSegundos;
    }
    int minutos = totalSegundos / 60;
    int segundos = totalSegundos % 60;
    cout << "\nDuracion total: " << minutos << " minutos y " << segundos << " segundos." << endl;
}
int main()
{
    vector<Cancion> canciones;
    int n;
    cout << "Cuantas canciones desea registrar: ";
    cin >> n;
    cin.ignore(1000, '\n');
    if (n > 0)
    {
        IngresarCanciones(canciones, n);
        MostrarPlaylist(canciones);
        CalcularDuracionTotal(canciones);
    }
    else
    {
        cout << "La cantidad debe ser mayor que cero." << endl;
    }
    return 0;
}
