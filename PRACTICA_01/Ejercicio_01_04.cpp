// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 18/08/2026
#include <iostream>
using namespace std;
int main()
{
    double practicas, teorica, participacion, nota_final;
    cout << "Ingrese la nota de practicas: ";
    cin >> practicas;
    cout << "Ingrese la nota teorica: ";
    cin >> teorica;
    cout << "Ingrese la nota de participacion: ";
    cin >> participacion;
    nota_final = (practicas * 0.30) + (teorica * 0.60) + (participacion * 0.10);
    cout << "Nota final: " << nota_final << endl;
    return 0;
}