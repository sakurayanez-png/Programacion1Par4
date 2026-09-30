// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 24/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void generarVoltajes(double voltajes[])
{
    for (int i = 0; i < 100; i++)
    {
        voltajes[i] = 20.00 + (rand() % 20001) / 100.0;
    }
}
void generarTemperaturas(double temperaturas[])
{
    for (int i = 0; i < 50; i++)
    {
        temperaturas[i] = (rand() % 10001) / 100.0;
    }
}
void generarCaracteres(char caracteres[])
{
    for (int i = 0; i < 30; i++)
    {
        int numero = rand() % 36;
        if (numero < 10)
        {
            caracteres[i] = '0' + numero;
        }
        else
        {
            caracteres[i] = 'A' + (numero - 10);
        }
    }
}
void generarAnos(int anos[])
{
    for (int i = 0; i < 100; i++)
    {
        anos[i] = 1990 + rand() % 36;
    }
}
void generarVelocidades(double velocidades[])
{
    for (int i = 0; i < 32; i++)
    {
        velocidades[i] = 10.00 + (rand() % 29001) / 100.0;
    }
}
void generarDistancias(double distancias[])
{
    for (int i = 0; i < 1000; i++)
    {
        distancias[i] = 1.00 + (rand() % 99901) / 100.0;
    }
}
int main()
{
    srand(time(0));
    double voltajes[100];
    double temperaturas[50];
    char caracteres[30];
    int anos[100];
    double velocidades[32];
    double distancias[1000];
    generarVoltajes(voltajes);
    generarTemperaturas(temperaturas);
    generarCaracteres(caracteres);
    generarAnos(anos);
    generarVelocidades(velocidades);
    generarDistancias(distancias);
    cout << "Voltajes generados:" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << voltajes[i] << " ";
    }
    cout << endl << endl;
    cout << "Temperaturas generadas:" << endl;
    for (int i = 0; i < 50; i++)
    {
        cout << temperaturas[i] << " ";
    }
    cout << endl << endl;
    cout << "Caracteres generados:" << endl;
    for (int i = 0; i < 30; i++)
    {
        cout << caracteres[i] << " ";
    }
    cout << endl << endl;
    cout << "Anos generados:" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << anos[i] << " ";
    }
    cout << endl << endl;
    cout << "Velocidades generadas:" << endl;
    for (int i = 0; i < 32; i++)
    {
        cout << velocidades[i] << " ";
    }
    cout << endl << endl;
    cout << "Distancias generadas:" << endl;
    for (int i = 0; i < 1000; i++)
    {
        cout << distancias[i] << " ";
    }

    return 0;
}