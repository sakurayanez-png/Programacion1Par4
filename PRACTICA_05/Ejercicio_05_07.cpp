// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 8/09/2026
#include <iostream>
using namespace std;
void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota) 
{
    sumaTotal = sumaTotal + nuevaNota;
    cantidadNotas = cantidadNotas + 1;
}
int main() 
{
    double sumaTotal = 0;
    int cantidadNotas = 0;
    int N;
    double nota;
    cout << "Cuantas notas ingresara? ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cout << "Ingrese la nota " << i << ": ";
        cin >> nota;
        agregarNota(sumaTotal, cantidadNotas, nota);
    }
    cout << "Suma total: " << sumaTotal << endl;
    cout << "Cantidad de notas: " << cantidadNotas << endl;
    return 0;
}