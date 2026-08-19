// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 18/08/2026
#include <iostream>
using namespace std;
int main()
{
    int edad;
    char sexo;
    double altura;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su sexo (M/F): ";
    cin >> sexo;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    cout << "\nDatos ingresados:" << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << " metros" << endl;
    return 0;
}