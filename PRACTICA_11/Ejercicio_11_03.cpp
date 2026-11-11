// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 11/11/2026
#include <iostream>
using namespace std;
struct Tiempo
{
    int horas;
    int minutos;
    int segundos;
};
Tiempo SumarTiempos(Tiempo tiempo1, Tiempo tiempo2)
{
    Tiempo resultado;
    resultado.segundos = tiempo1.segundos + tiempo2.segundos;
    resultado.minutos = tiempo1.minutos + tiempo2.minutos;
    resultado.horas = tiempo1.horas + tiempo2.horas;
    if (resultado.segundos >= 60)
    {
        resultado.segundos = resultado.segundos - 60;
        resultado.minutos = resultado.minutos + 1;
    }
    if (resultado.minutos >= 60)
    {
        resultado.minutos = resultado.minutos - 60;
        resultado.horas = resultado.horas + 1;
    }
    return resultado;
}
void IngresarTiempo(Tiempo & tiempo)
{
    cout << "Ingrese las horas: ";
    cin >> tiempo.horas;
    cout << "Ingrese los minutos: ";
    cin >> tiempo.minutos;
    cout << "Ingrese los segundos: ";
    cin >> tiempo.segundos;
}
void MostrarTiempo(Tiempo tiempo)
{
    cout << tiempo.horas << " horas, " << tiempo.minutos << " minutos y " << tiempo.segundos << " segundos." << endl;
}
int main()
{
    Tiempo tiempo1, tiempo2, suma;
    cout << "PRIMER TIEMPO" << endl;
    IngresarTiempo(tiempo1);
    cout << "\nSEGUNDO TIEMPO" << endl;
    IngresarTiempo(tiempo2);
    suma = SumarTiempos(tiempo1, tiempo2);
    cout << "\nRESULTADO DE LA SUMA" << endl;
    MostrarTiempo(suma);
    return 0;
}
