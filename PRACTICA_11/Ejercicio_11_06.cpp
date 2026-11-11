// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 11/11/2026
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Contacto
{
    string nombreCompleto;
    int telefono;
};
void IngresarContactos(vector<Contacto> & contactos, int n)
{
    Contacto contacto;
    for (int i = 0; i < n; i++)
    {
        cout << "\nCONTACTO " << i + 1 << endl;
        cout << "Ingrese el nombre completo: ";
        getline(cin, contacto.nombreCompleto);
        cout << "Ingrese el telefono: ";
        cin >> contacto.telefono;
        cin.ignore(1000, '\n');
        contactos.push_back(contacto);
    }
}
void BuscarContactos(vector<Contacto> contactos, string busqueda)
{
    bool encontrado = false;
    cout << "\nRESULTADOS DE LA BUSQUEDA" << endl;
    for (int i = 0; i < contactos.size(); i++)
    {
        if (contactos[i].nombreCompleto.find(busqueda) != string::npos)
        {
            cout << "Nombre: " << contactos[i].nombreCompleto << endl;
            cout << "Telefono: " << contactos[i].telefono << endl;
            cout << "------------------------" << endl;
            encontrado = true;
        }
    }
    if (encontrado == false)
    {
        cout << "No se encontraron contactos." << endl;
    }
}
int main()
{
    vector<Contacto> contactos;
    int n;
    string busqueda;
    cout << "Cuantos contactos desea ingresar: ";
    cin >> n;
    cin.ignore(1000, '\n');
    if (n > 0)
    {
        IngresarContactos(contactos, n);
        cout << "\nIngrese el nombre o texto que desea buscar: ";
        getline(cin, busqueda);
        BuscarContactos(contactos, busqueda);
    }
    else
    {
        cout << "La cantidad debe ser mayor que cero." << endl;
    }
    return 0;
}
