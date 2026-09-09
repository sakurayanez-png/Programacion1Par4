// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 8/09/2026
#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int N;
    int n1;
    int n2;
    int n3;
    int restantes;
    int totalPanales;
    cout << "Ingrese la cantidad de niños: ";
    cin >> N;
    srand(time(0));
    // Niños de 1 año
    n1 = rand() % (N + 1);
    restantes = N - n1;
    // Niños de 2 años
    n2 = rand() % (restantes + 1);
    restantes = restantes - n2;
    // Niños de 3 años
    n3 = restantes;
    // Calcular pañales
    totalPanales = (n1 * 6) + (n2 * 3) + (n3 * 2);
    cout << "Niños de 1 año: " << n1 << endl;
    cout << "Niños de 2 años: " << n2 << endl;
    cout << "Niños de 3 años: " << n3 << endl;
    cout << "Total de pañales por dia: " << totalPanales << endl;
    return 0;
}