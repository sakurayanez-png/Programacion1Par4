// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 8/09/2026
#include <iostream>
using namespace std;
void tiempo(int, int&, int&, int&);
int main()
{
    int totalsegundos;
    int horas;
    int minutos;
    int segundos;
    cout << "Digite el numero total de segundos: "<< endl;
    cin >> totalsegundos;
    tiempo(totalsegundos, horas, minutos, segundos);
    cout << "\nTiempo equivalente a la cantidad de segundos digitados: " << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;
    return 0;
}
void tiempo(int totalsegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalsegundos / 3600;
    totalsegundos %= 3600;
    minutos = totalsegundos / 60;
    segundos = totalsegundos % 60;
}