// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 18/08/2026
#include <iostream>
using namespace std;
int main()
{
    float practica, teorica, participacion, nota_final = 0;
    cout << "Digite la nota de práctica: ";
    cin >> practica;
    cout << "Digite la nota teorica: ";
    cin >> teorica;
    cout << "Digite la nota de participación: ";
    cin >> participacion;
    practica *= 0.3; 
    // practica = practica * 0.3;
    teorica *= 0.6;
    participacion *= 0.10;
    nota_final = practica + teorica + participacion;
    cout << "\nLa nota final es: " << nota_final;
    return 0;
}