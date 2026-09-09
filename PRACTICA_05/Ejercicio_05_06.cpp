// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 8/09/2026
#include <iostream>
using namespace std;
void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos) 
{
    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;
}
int main() 
{
    int totalSegundos;
    int horas, minutos, segundos;
    cout << "Ingrese los segundos: ";
    cin >> totalSegundos;
    calcularTiempo(totalSegundos, horas, minutos, segundos);
    cout << horas << " horas, " << minutos << " minutos y " << segundos << " segundos." << endl;
    return 0;
}