// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 25/08/2026
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int numero, dato, contador = 0;
    srand (time(NULL)); //genera un numero aleatorio
    dato = 1 + rand() % (100); //25
    do {
        cout << "Digite un numero: ";
        cin >> numero; //15
        if (numero > dato) {
            cout << "\nDigite un numero menor\n" << endl;
        } 
        if (numero < dato) {
            cout << "\nDigite un numero mayor\n" << endl;
        }
        contador++;
    } while (numero != dato);
    cout << "\nFELICIDADES ADIVINASTE EL NUEMERO\n";
    cout << "Numero de intentos: " << contador << endl;
    return 0;
}