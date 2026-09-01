// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 1/09/2026
#include <iostream>
using namespace std;
int obtenerMayor(int num1, int num2, int num3) 
{
    int mayor = num1;
    if (num2 > mayor) 
    {
        mayor = num2;
    }
    if (num3 > mayor) 
    {
        mayor = num3;
    }
    return mayor;
}
int main() 
{
    int num1, num2, num3;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    cout << "El numero mayor es: " << obtenerMayor(num1, num2, num3) << endl;
    return 0;
}