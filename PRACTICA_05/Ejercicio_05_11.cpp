// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 8/09/2026
#include <iostream>
#include <ctime>
using namespace std;
bool esPrimo(int numero) 
{
    if (numero < 2) 
    {
        return false;
    }
    for (int i = 2; i < numero; i++) 
    {
        if (numero % i == 0) 
        {
            return false;
        }
    }
    return true;
}
int main() 
{
    int N;
    int numero;
    int sumaPares = 0;
    int sumaImpares = 0;
    int cantidadImpares = 0;
    int mayorPrimo = 0;
    cout << "Ingrese N: ";
    cin >> N;
    srand(time(0));
    for (int i = 1; i <= N; i++) 
    {
        numero = rand() % 1000 + 1;
        cout << numero << endl;
        if (numero % 2 == 0) 
        {
            sumaPares = sumaPares + numero;
        }
        else 
        {
            sumaImpares = sumaImpares + numero;
            cantidadImpares++;
        }
        if (esPrimo(numero)) 
        {
            if (numero > mayorPrimo) 
            {
                mayorPrimo = numero;
            }
        }
    }
    cout << "\nSuma de pares: " << sumaPares << endl;
    if (cantidadImpares > 0) 
    {
        cout << "Promedio de impares: " << sumaImpares / cantidadImpares << endl;
    }
    cout << "Mayor primo: " << mayorPrimo << endl;
    return 0;
}