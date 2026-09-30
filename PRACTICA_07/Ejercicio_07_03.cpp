// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 24/09/2026
#include <iostream>
#include <cmath>
using namespace std;
void leerCalificaciones(int calificaciones[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
    }
}
int calcularSuma(int calificaciones[], int n)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma = suma + calificaciones[i];
    }
    return suma;
}
double calcularPromedio(int suma, int n)
{
    return (double)suma / n;
}
void calcularDesviaciones( int calificaciones[], double desviacion[], int n, double promedio)
{
    for (int i = 0; i < n; i++)
    {
        desviacion[i] = calificaciones[i] - promedio;
    }
}
double calcularVarianza(double desviacion[], int n)
{
    double sumaCuadrados = 0;
    for (int i = 0; i < n; i++)
    {
        sumaCuadrados = sumaCuadrados + pow(desviacion[i], 2);
    }
    return sumaCuadrados / n;
}
void mostrarResultados( int calificaciones[], double desviacion[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Calificacion: " << calificaciones[i];
        cout << " | Desviacion: " << desviacion[i] << endl;
    }
}
int main()
{
    int n;
    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> n;
    int calificaciones[n];
    double desviacion[n];
    leerCalificaciones(calificaciones, n);
    int suma = calcularSuma(calificaciones, n);
    double promedio = calcularPromedio(suma, n);
    calcularDesviaciones( calificaciones, desviacion, n, promedio);
    double varianza = calcularVarianza(desviacion, n);
    cout << endl;
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << endl;
    mostrarResultados(calificaciones, desviacion, n);
    cout << endl;
    cout << "Varianza: " << varianza << endl;
    return 0;
}