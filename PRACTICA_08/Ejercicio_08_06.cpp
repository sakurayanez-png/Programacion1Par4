// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 30/09/2026
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<char> eliminarEspacios(vector<char> texto)
{
    vector<char> resultado;
    bool espacioAnterior = false;
    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] == ' ')
        {
            if (resultado.size() > 0)
            {
                espacioAnterior = true;
            }
        }
        else
        {
            if (espacioAnterior == true)
            {
                resultado.push_back(' ');
            }
            resultado.push_back(texto[i]);
            espacioAnterior = false;
        }
    }
    return resultado;
}
int main()
{
    string texto;
    vector<char> caracteres;
    cout << "Ingrese el texto: ";
    getline(cin, texto);
    for (int i = 0; i < texto.length(); i++)
    {
        caracteres.push_back(texto[i]);
    }
    vector<char> resultado = eliminarEspacios(caracteres);
    cout << "Resultado: ";
    for (int i = 0; i < resultado.size(); i++)
    {
        cout << resultado[i];
    }
    cout << endl;
    return 0;
}