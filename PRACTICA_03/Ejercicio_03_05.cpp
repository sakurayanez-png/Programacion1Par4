// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int numerousuario;
    int numeroaleatorio;
    int intentos = 0;
    srand(time(0));
    numeroaleatorio = 1 + rand() % 100;
    cout << "He generado un numero entre 1 y 100." << endl;
    do {
        cout << "Adivina el numero: ";
        cin >> numerousuario;
        intentos++;
        if (numerousuario < numeroaleatorio) {
            cout << "El numero que ingresaste es MENOR." << endl;
        }
        else if (numerousuario > numeroaleatorio) {
            cout << "El numero que ingresaste es MAYOR." << endl;
        }
        else {
            cout << "¡Correcto!" << endl;
        }
    } while (numerousuario != numeroaleatorio);
    cout << "Lo adivinaste en " << intentos << " intentos." << endl;    
    return 0;
}