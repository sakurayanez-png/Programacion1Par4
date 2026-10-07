// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 30/09/2026
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
bool esSegura(vector<char> contrasena)
{
    bool mayuscula = false;
    bool minuscula = false;
    bool numero = false;
    bool especial = false;
    if (contrasena.size() < 8)
    {
        return false;
    }
    for (int i = 0; i < contrasena.size(); i++)
    {
        if (isupper(contrasena[i]))
        {
            mayuscula = true;
        }
        if (islower(contrasena[i]))
        {
            minuscula = true;
        }
        if (isdigit(contrasena[i]))
        {
            numero = true;
        }
        if (!isalnum(contrasena[i]))
        {
            especial = true;
        }
    }
    if (mayuscula && minuscula && numero && especial)
    {
        return true;
    }
    return false;
}
int main()
{
    string texto;
    vector<char> contrasena;
    cout << "Ingrese la contrasena: ";
    cin >> texto;
    for (int i = 0; i < texto.length(); i++)
    {
        contrasena.push_back(texto[i]);
    }
    if (esSegura(contrasena))
    {
        cout << "Contrasena segura" << endl;
    }
    else
    {
        cout << "Contrasena vulnerable" << endl;
    }
    return 0;
}