// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 14/10/2026
#include <iostream>
#include <string>
using namespace std;
void OrdenarPalabra(string& Palabra)
{
    for (int i = 0; i < Palabra.length() - 1; i++)
    {
        for (int j = 0; j < Palabra.length() - 1 - i; j++)
        {
            if (Palabra[j] > Palabra[j + 1])
            {
                char aux = Palabra[j];
                Palabra[j] = Palabra[j + 1];
                Palabra[j + 1] = aux;
            }
        }
    }
}
int main()
{
    string Palabra;
    cout << "Ingrese una palabra: ";
    cin >> Palabra;
    OrdenarPalabra(Palabra);
    cout << "Palabra ordenada: " << Palabra << endl;
    return 0;
}