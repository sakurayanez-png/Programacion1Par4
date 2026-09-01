// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 1/09/2026
#include <iostream>
using namespace std;
const double PI = 3.141592;
double calcularVolumen(double radio, double altura) 
{
    return PI * radio * radio * altura;
}
int main() 
{
    double radio, altura;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;
    double volumen = calcularVolumen(radio, altura);
    cout << "El volumen del cilindro es: " << volumen << endl;
    return 0;
}