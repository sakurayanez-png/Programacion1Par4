// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 30/09/2026
#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool validarTarjeta(vector<char> tarjeta)
{
    if (tarjeta.size() != 16)
    {
        return false;
    }
    int suma = 0;
    bool duplicar = false;
    for (int i = tarjeta.size() - 1; i >= 0; i--)
    {
        int digito = tarjeta[i] - '0';
        if (duplicar)
        {
            digito = digito * 2;
            if (digito > 9)
            {
                digito = digito - 9;
            }
        }
        suma = suma + digito;
        duplicar = !duplicar;
    }
    if (suma % 10 == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    string numero;
    vector<char> tarjeta;
    cout << "Ingrese los 16 digitos: ";
    cin >> numero;
    for (int i = 0; i < numero.length(); i++)
    {
        tarjeta.push_back(numero[i]);
    }
    if (validarTarjeta(tarjeta))
    {
        cout << "Tarjeta valida" << endl;
    }
    else
    {
        cout << "Tarjeta invalida" << endl;
    }
    return 0;
}