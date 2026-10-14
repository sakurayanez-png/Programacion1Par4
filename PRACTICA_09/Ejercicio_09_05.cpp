// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 7/10/2026
#include <iostream>
using namespace std;
void InicializarSala(int sala[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sala[i][j] = 0;
        }
    }
}
void MostrarSala(int sala[5][5])
{
    cout << "\nL = Libre, O = Ocupado\n\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sala[i][j] == 0)
            {
                cout << "L\t";
            }
            else
            {
                cout << "O\t";
            }
        }
        cout << endl;
    }
}
void ComprarEntrada(int sala[5][5])
{
    int fila, asiento;
    cout << "Ingrese la fila (1-5): ";
    cin >> fila;
    cout << "Ingrese el asiento (1-5): ";
    cin >> asiento;
    if (fila >= 1 && fila <= 5 && asiento >= 1 && asiento <= 5)
    {
        if (sala[fila - 1][asiento - 1] == 0)
        {
            sala[fila - 1][asiento - 1] = 1;
            cout << "Reserva exitosa." << endl;
        }
        else
        {
            cout << "Asiento no disponible." << endl;
        }
    }
    else
    {
        cout << "Fila o asiento no valido." << endl;
    }
}
void MostrarEstadisticas(int sala[5][5])
{
    int libres = 0;
    int ocupados = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (sala[i][j] == 0)
            {
                libres++;
            }
            else
            {
                ocupados++;
            }
        }
    }
    cout << "Asientos libres: " << libres << endl;
    cout << "Porcentaje libre: " << libres * 100.0 / 25 << "%" << endl;
    cout << "Asientos ocupados: " << ocupados << endl;
    cout << "Porcentaje ocupado: " << ocupados * 100.0 / 25 << "%" << endl;
}
void MostrarMenu()
{
    cout << "\n--- CINE VIP ---" << endl;
    cout << "1. Mostrar sala" << endl;
    cout << "2. Comprar entrada" << endl;
    cout << "3. Estadisticas" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opcion: ";
}
int main()
{
    int sala[5][5];
    int opcion = 0;
    InicializarSala(sala);
    while (opcion != 4)
    {
        MostrarMenu();
        cin >> opcion;
        if (opcion == 1)
        {
            MostrarSala(sala);
        }
        if (opcion == 2)
        {
            ComprarEntrada(sala);
        }
        if (opcion == 3)
        {
            MostrarEstadisticas(sala);
        }
        if (opcion < 1 || opcion > 4)
        {
            cout << "Opcion no valida." << endl;
        }
    }
    cout << "Fin del programa." << endl;
    return 0;
}