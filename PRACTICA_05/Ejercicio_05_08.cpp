// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 8/09/2026
#include <iostream>
#include <ctime>
using namespace std;
int main() 
{
    int N;
    int resultado;
    int caras = 0;
    int cruces = 0;
    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> N;
    srand(time(0));
    for (int i = 1; i <= N; i++) 
    {
        resultado = rand() % 2 + 1;
        if (resultado == 1) 
        {
            caras++;
        }
        else 
        {
            cruces++;
        }
    }
    double porcentajeCaras = caras * 100.0 / N;
    double porcentajeCruces = cruces * 100.0 / N;
    cout << "Caras: " << caras << endl;
    cout << "Cruces: " << cruces << endl;
    cout << "Porcentaje de caras: " << porcentajeCaras << "%" << endl;
    cout << "Porcentaje de cruces: " << porcentajeCruces << "%" << endl;
    return 0;
}