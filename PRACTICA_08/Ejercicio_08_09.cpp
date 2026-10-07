// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 30/09/2026
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
string convertirMinusculas(string texto)
{
    for (int i = 0; i < texto.length(); i++)
    {
        texto[i] = tolower(texto[i]);
    }
    return texto;
}
vector<string> buscarContactos(vector<string> contactos, string prefijo)
{
    vector<string> resultados;
    prefijo = convertirMinusculas(prefijo);
    for (int i = 0; i < contactos.size(); i++)
    {
        string contacto = convertirMinusculas(contactos[i]);
        string inicio = contacto.substr(0, prefijo.length());
        if (inicio == prefijo)
        {
            resultados.push_back(contactos[i]);
        }
    }
    return resultados;
}
int main()
{
    vector<string> contactos =
    {
        "Marcelo",
        "Maria",
        "Martin",
        "Juan",
        "Marcos"
    };
    string prefijo;
    cout << "Ingrese el prefijo: ";
    cin >> prefijo;
    vector<string> resultados =
        buscarContactos(contactos, prefijo);
    cout << "Resultados:" << endl;
    for (int i = 0; i < resultados.size(); i++)
    {
        cout << resultados[i] << endl;
    }
    return 0;
}