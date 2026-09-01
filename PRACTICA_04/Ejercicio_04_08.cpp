// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 1/09/2026
#include <iostream>
using namespace std;
int contarDigitos(int numero) 
{
    int contador = 0;
    while (numero > 0) 
    {
        numero = numero / 10;
        contador++;
    }
    return contador;
}
int main() 
{
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    if (numero > 0) 
    {
        cout << "El numero tiene " << contarDigitos(numero) << " digitos." << endl;
    } 
    else 
    {
        cout << "Debe ingresar un numero positivo." << endl;
    }
    return 0;
}