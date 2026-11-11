// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 11/11/2026
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Producto
{
    string nombre;
    string codigo;
    double precio;
};
void IngresarProductos(vector<Producto> & productos, int n)
{
    Producto producto;
    for (int i = 0; i < n; i++)
    {
        cout << "\nPRODUCTO " << i + 1 << endl;
        cout << "Ingrese el nombre: ";
        getline(cin, producto.nombre);
        cout << "Ingrese el codigo: ";
        getline(cin, producto.codigo);
        cout << "Ingrese el precio: ";
        cin >> producto.precio;
        cin.ignore(1000, '\n');
        productos.push_back(producto);
    }
}
void EncontrarMayorYMenor(vector<Producto> productos)
{
    if (productos.size() == 0)
    {
        cout << "No existen productos registrados." << endl;
        return;
    }
    int posicionMayor = 0;
    int posicionMenor = 0;
    for (int i = 1; i < productos.size(); i++)
    {
        if (productos[i].precio > productos[posicionMayor].precio)
        {
            posicionMayor = i;
        }
        if (productos[i].precio < productos[posicionMenor].precio)
        {
            posicionMenor = i;
        }
    }
    cout << "\nPRODUCTO MAS CARO" << endl;
    cout << "Nombre: " << productos[posicionMayor].nombre << endl;
    cout << "Precio: " << productos[posicionMayor].precio << endl;
    cout << "\nPRODUCTO MAS BARATO" << endl;
    cout << "Nombre: " << productos[posicionMenor].nombre << endl;
    cout << "Precio: " << productos[posicionMenor].precio << endl;
}
int main()
{
    vector<Producto> productos;
    int n;
    cout << "Cuantos productos desea registrar: ";
    cin >> n;
    cin.ignore(1000, '\n');
    if (n > 0)
    {
        IngresarProductos(productos, n);
        EncontrarMayorYMenor(productos);
    }
    else
    {
        cout << "La cantidad debe ser mayor que cero." << endl;
    }
    return 0;
}
