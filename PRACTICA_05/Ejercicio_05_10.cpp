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
    int cantidadPrimos = 0;
    cout << "Ingrese N: ";
    cin >> N;
    srand(time(0));
    for (int i = 1; i <= N; i++) 
    {
        numero = rand() % 10000 + 1;
        cout << numero << endl;
        if (esPrimo(numero)) 
        {
            cantidadPrimos++;
        }
    }
    cout << "Cantidad de numeros primos: "
         << cantidadPrimos << endl;
    return 0;
}