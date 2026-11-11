// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 11/11/2026
#include <iostream>
#include <string>
using namespace std;
struct Jugador
{
    string nickname;
    int nivel;
    int experiencia;
};
void IngresarDatos(Jugador & jugador)
{
    cout << "Ingrese el nickname: ";
    getline(cin, jugador.nickname);
    cout << "Ingrese el nivel: ";
    cin >> jugador.nivel;
    cout << "Ingrese la experiencia: ";
    cin >> jugador.experiencia;
}
void MostrarDatos(Jugador jugador)
{
    cout << "Nickname: " << jugador.nickname << endl;
    cout << "Nivel: " << jugador.nivel << endl;
    cout << "Experiencia: " << jugador.experiencia << endl;
}
void AgregarExperiencia(Jugador & jugador, int puntos)
{
    jugador.experiencia = jugador.experiencia + puntos;
    if (jugador.experiencia > 100)
    {
        jugador.nivel = jugador.nivel + 1;
        jugador.experiencia = 0;
    }
}
int main()
{
    Jugador jugador;
    int puntos;
    IngresarDatos(jugador);
    cout << "\nDATOS ANTES DE AGREGAR EXPERIENCIA" << endl;
    MostrarDatos(jugador);
    cout << "\nIngrese los puntos de experiencia que desea agregar: ";
    cin >> puntos;
    AgregarExperiencia(jugador, puntos);
    cout << "\nDATOS DESPUES DE AGREGAR EXPERIENCIA" << endl;
    MostrarDatos(jugador);
    return 0;
}
