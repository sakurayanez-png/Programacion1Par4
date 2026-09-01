// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 1/09/2026
#include <iostream>
using namespace std;
double calcularDistancia(double velocidad, double tiempo) 
{
    return velocidad * tiempo;
}
int main() 
{
    double velocidad, tiempo;
    cout << "Ingrese la velocidad: ";
    cin >> velocidad;
    cout << "Ingrese el tiempo: ";
    cin >> tiempo;
    double distancia = calcularDistancia(velocidad, tiempo);
    cout << "La distancia recorrida es: " << distancia << "m" << endl;
    return 0;
}