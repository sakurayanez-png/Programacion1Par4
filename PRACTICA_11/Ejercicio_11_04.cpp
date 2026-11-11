// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 11/11/2026
#include <iostream>
#include <string>
using namespace std;
struct Paquete
{
    string codigoRastreo;
    char direccion[50];
    double pesoKg;
    char estado[20];
};
void IngresarPaquete(Paquete & paquete)
{
    cout << "Ingrese el codigo de rastreo: ";
    getline(cin, paquete.codigoRastreo);
    cout << "Ingrese la direccion: ";
    cin.getline(paquete.direccion, 50);
    cout << "Ingrese el peso en kg: ";
    cin >> paquete.pesoKg;
    cin.ignore(1000, '\n');
    const char estadoInicial[] = "En Transito";
    int i = 0;
    while (estadoInicial[i] != '\0')
    {
        paquete.estado[i] = estadoInicial[i];
        i++;
    }
    paquete.estado[i] = '\0';
}
void EntregarPaquete(Paquete & paquete)
{
    const char nuevoEstado[] = "Entregado";
    int i = 0;
    while (nuevoEstado[i] != '\0')
    {
        paquete.estado[i] = nuevoEstado[i];
        i++;
    }
    paquete.estado[i] = '\0';
    cout << "\n========== RECIBO DE ENVIO ==========" << endl;
    cout << "Codigo de rastreo: " << paquete.codigoRastreo << endl;
    cout << "Direccion: " << paquete.direccion << endl;
    cout << "Peso: " << paquete.pesoKg << " kg" << endl;
    cout << "Estado: " << paquete.estado << endl;
}
int main()
{
    Paquete paquete;
    IngresarPaquete(paquete);
    EntregarPaquete(paquete);
    cout << "\nTamano de la estructura Paquete: " << sizeof(Paquete) << " bytes" << endl;
    return 0;
}
