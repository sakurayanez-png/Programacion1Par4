// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 11/11/2026
#include <iostream>
#include <string>
using namespace std;
struct Cuenta
{
    string titular;
    int numeroCuenta;
    double saldo;
};
void Depositar(Cuenta & cuenta, double cantidad)
{
    if (cantidad > 0)
    {
        cuenta.saldo = cuenta.saldo + cantidad;
        cout << "Deposito realizado correctamente." << endl;
    }
    else
    {
        cout << "La cantidad debe ser mayor que cero." << endl;
    }
}
void Retirar(Cuenta & cuenta, double cantidad)
{
    if (cantidad <= 0)
    {
        cout << "La cantidad debe ser mayor que cero." << endl;
    }
    else if (cantidad <= cuenta.saldo)
    {
        cuenta.saldo = cuenta.saldo - cantidad;
        cout << "Retiro realizado correctamente." << endl;
    }
    else
    {
        cout << "No existe saldo suficiente." << endl;
    }
}
int main()
{
    Cuenta cuenta;
    double deposito, retiro;
    cout << "Ingrese el nombre del titular: ";
    getline(cin, cuenta.titular);
    cout << "Ingrese el numero de cuenta: ";
    cin >> cuenta.numeroCuenta;
    cout << "Ingrese el saldo inicial: ";
    cin >> cuenta.saldo;
    cout << "\nIngrese la cantidad a depositar: ";
    cin >> deposito;
    Depositar(cuenta, deposito);
    cout << "\nIngrese la cantidad a retirar: ";
    cin >> retiro;
    Retirar(cuenta, retiro);
    cout << "\nSALDO FINAL" << endl;
    cout << "Titular: " << cuenta.titular << endl;
    cout << "Numero de cuenta: " << cuenta.numeroCuenta << endl;
    cout << "Saldo: " << cuenta.saldo << endl;
    return 0;
}
