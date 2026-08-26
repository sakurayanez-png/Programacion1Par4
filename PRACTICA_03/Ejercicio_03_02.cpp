// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026
#include <iostream>
#include <time.h>
using namespace std;
bool esprimo(int numero) {
    if (numero < 2) {
        return false;
    }

    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int N;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;
    srand(time(0));
    int sumaTotal = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int sumaPrimos = 0;
    for (int i = 1; i <= N; i++) {
        int numero = 1 + rand() % 100;
        cout << "Numero generado: " << numero << endl;
        sumaTotal += numero;
        if (numero % 2 == 0) {
            sumaPares += numero;
        } else {
            sumaImpares += numero;
        }
        if (esprimo(numero)) {
            sumaPrimos += numero;
        }
    }
    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Suma total: " << sumaTotal << endl;
    cout << "Suma de pares: " << sumaPares << endl;
    cout << "Suma de impares: " << sumaImpares << endl;
    cout << "Suma de primos: " << sumaPrimos << endl;
    return 0;
}