// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 30/09/2026
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> separarURL(string url)
{
    vector<string> partes;
    int posicion = url.find("://");
    string protocolo = url.substr(0, posicion);
    int inicioDominio = posicion + 3;
    int inicioRuta = url.find("/", inicioDominio);
    string dominio = url.substr(inicioDominio, inicioRuta - inicioDominio);
    string ruta = url.substr(inicioRuta);
    partes.push_back(protocolo);
    partes.push_back(dominio);
    partes.push_back(ruta);
    return partes;
}
int main()
{
    string url;
    cout << "Ingrese la URL: ";
    cin >> url;
    vector<string> partes = separarURL(url);
    cout << "Protocolo: " << partes[0] << endl;
    cout << "Dominio: " << partes[1] << endl;
    cout << "Ruta: " << partes[2] << endl;
    return 0;
}