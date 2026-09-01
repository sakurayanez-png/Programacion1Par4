// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 1/09/2026
#include <iostream>
using namespace std;
double convertirDolares(double bolivianos, double tipoCambio) 
{
    return bolivianos / tipoCambio;
}
int main() 
{
    double bolivianos;
    double cambioOficial;
    double cambioParalelo;
    cout << "Ingrese la cantidad en bolivianos: ";
    cin >> bolivianos;
    cout << "Ingrese el tipo de cambio oficial: ";
    cin >> cambioOficial;
    cout << "Ingrese el tipo de cambio paralelo: ";
    cin >> cambioParalelo;
    double dolaresOficial = convertirDolares(bolivianos, cambioOficial);
    double dolaresParalelo = convertirDolares(bolivianos, cambioParalelo);
    cout << "\nConversion oficial: " << dolaresOficial << " dolares" << endl;
    cout << "Conversion paralela: " << dolaresParalelo << " dolares" << endl;
    return 0;
}