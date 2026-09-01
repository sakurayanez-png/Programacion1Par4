// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 1/09/2026
#include <iostream>
using namespace std;
double calcularArea(double base, double altura) 
{
    return (base * altura) / 2;
}
int main() 
{
    double base, altura;
    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;
    double area = calcularArea(base, altura);
    cout << "El area del triangulo es: " << area << endl;
    return 0;
}