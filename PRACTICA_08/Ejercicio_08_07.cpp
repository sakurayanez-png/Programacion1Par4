// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 30/09/2026
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
vector<string> obtenerHashtags(string texto)
{
    vector<string> hashtags;
    string palabra;
    stringstream datos(texto);
    while (datos >> palabra)
    {
        if (palabra[0] == '#')
        {
            hashtags.push_back(palabra);
        }
    }
    return hashtags;
}
int main()
{
    string texto;
    cout << "Ingrese la publicacion: ";
    getline(cin, texto);
    vector<string> hashtags = obtenerHashtags(texto);
    cout << "Lista de hashtags:" << endl;
    for (int i = 0; i < hashtags.size(); i++)
    {
        cout << hashtags[i] << endl;
    }
    return 0;
}