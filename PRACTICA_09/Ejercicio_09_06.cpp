// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 7/10/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int GenerarAleatorio(int min, int max)
{
    return rand() % (max - min + 1) + min;
}
void LlenarTemperaturas(int temperaturas[4][7])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            temperaturas[i][j] = GenerarAleatorio(5, 35);
        }
    }
}
void MostrarTemperaturas(int temperaturas[4][7])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Semana " << i + 1 << ": ";
        for (int j = 0; j < 7; j++)
        {
            cout << temperaturas[i][j] << "\t";
        }
        cout << endl;
    }
}
void TemperaturaMaxima(int temperaturas[4][7], int &mayor, int &semana, int &dia)
{
    mayor = temperaturas[0][0];
    semana = 1;
    dia = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (temperaturas[i][j] > mayor)
            {
                mayor = temperaturas[i][j];
                semana = i + 1;
                dia = j + 1;
            }
        }
    }
}
void PromedioSemanal(int temperaturas[4][7])
{
    double suma;
    double promedio;
    for (int i = 0; i < 4; i++)
    {
        suma = 0;
        for (int j = 0; j < 7; j++)
        {
            suma += temperaturas[i][j];
        }
        promedio = suma / 7;
        cout << "Promedio de la semana " << i + 1 << ": " << promedio << " grados C" << endl;
    }
}
int ContarMayoresA30(int temperaturas[4][7])
{
    int contador = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (temperaturas[i][j] > 30)
            {
                contador++;
            }
        }
    }
    return contador;
}
int main()
{
    srand(time(0));
    int temperaturas[4][7];
    int mayor, semana, dia;
    int diasCalurosos;
    LlenarTemperaturas(temperaturas);
    cout << "Temperaturas registradas:" << endl;
    MostrarTemperaturas(temperaturas);
    TemperaturaMaxima(temperaturas, mayor, semana, dia);
    cout << "\nTemperatura maxima: " << mayor << " grados C" << endl;
    cout << "Semana: " << semana << endl;
    cout << "Dia: " << dia << endl;
    cout << "\nPromedios semanales:" << endl;
    PromedioSemanal(temperaturas);
    diasCalurosos = ContarMayoresA30(temperaturas);
    cout << "\nDias con temperatura superior a 30 grados: " << diasCalurosos << endl;
    return 0;
}