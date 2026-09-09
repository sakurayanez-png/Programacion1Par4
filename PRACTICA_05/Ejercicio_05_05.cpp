// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 8/09/2026
#include <iostream>
using namespace std;
double calcularArea(double lado) 
{
    return lado * lado;
}
double calcularArea(double largo, double ancho) 
{
    return largo * ancho;
}
float calcularArea(float radio, float PI) 
{
    return PI * radio * radio;
}
int main() 
{
    cout << "Area del cuadrado: "
         << calcularArea(5.0) << endl;
    cout << "Area del rectangulo: "
         << calcularArea(5.0, 10.0) << endl;
    cout << "Area del circulo: "
         << calcularArea(5.0f, 3.1416f) << endl;
    return 0;
}