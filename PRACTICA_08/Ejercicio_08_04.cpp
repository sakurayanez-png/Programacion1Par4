// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 30/09/2026
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
vector<string> separarPalabras(string mensaje)
{
    vector<string> palabras;
    string palabra;
    stringstream texto(mensaje);
    while (texto >> palabra)
    {
        palabras.push_back(palabra);
    }
    return palabras;
}
void censurar(vector<string>& mensaje, vector<string> prohibidas)
{
    for (int i = 0; i < mensaje.size(); i++)
    {
        for (int j = 0; j < prohibidas.size(); j++)
        {
            if (mensaje[i] == prohibidas[j])
            {
                mensaje[i] = "***";
            }
        }
    }
}
int main()
{
    string texto;
    cout << "Ingrese el mensaje: ";
    getline(cin, texto);
    vector<string> mensaje = separarPalabras(texto);
    vector<string> prohibidas;
    prohibidas.push_back("manco");
    prohibidas.push_back("tonto");
    prohibidas.push_back("noob");
    censurar(mensaje, prohibidas);
    cout << "Mensaje censurado: ";
    for (int i = 0; i < mensaje.size(); i++)
    {
        cout << mensaje[i] << " ";
    }
    cout << endl;
    return 0;
}