// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 30/09/2026
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
vector<string> separarPalabras(string texto)
{
    vector<string> palabras;
    string palabra;
    stringstream datos(texto);
    while (datos >> palabra)
    {
        palabras.push_back(palabra);
    }
    return palabras;
}
bool detectarPlagio(string oracionA, string oracionB)
{
    vector<string> palabrasA = separarPalabras(oracionA);
    vector<string> palabrasB = separarPalabras(oracionB);
    int coincidencias = 0;
    for (int i = 0; i < palabrasA.size(); i++)
    {
        bool encontrada = false;
        for (int j = 0; j < palabrasB.size(); j++)
        {
            if (palabrasA[i] == palabrasB[j])
            {
                coincidencias++;
                encontrada = true;
            }
            if (encontrada == true)
            {
                j = palabrasB.size();
            }
        }
    }
    if (coincidencias > 3)
    {
        return true;
    }
    return false;
}
int main()
{
    string oracionA;
    string oracionB;
    cout << "Ingrese la oracion A: ";
    getline(cin, oracionA);
    cout << "Ingrese la oracion B: ";
    getline(cin, oracionB);
    bool plagio = detectarPlagio(oracionA, oracionB);
    if (plagio == true)
    {
        cout << "Alerta de plagio: Verdadero" << endl;
    }
    else
    {
        cout << "Alerta de plagio: Falso" << endl;
    }
    return 0;
}