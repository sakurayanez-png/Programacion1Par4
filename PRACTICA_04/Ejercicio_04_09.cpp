// Materia: Programación I, Paralelo 4
// Autora: Sakura Grace Yañez Luna
// Carrera: Ingenieria Mecatronica
// Fecha de Creación: 1/09/2026
#include <iostream>
using namespace std;
bool notaValida(double nota) 
{
    return nota >= 0 && nota <= 100;
}
double calcularPromedioParciales(double nota1, double nota2, double nota3) 
{
    return (nota1 + nota2 + nota3) / 3;
}
double calcularNotaFinal(double promedioParciales, double examenFinal) 
{
    return (promedioParciales * 0.5) + (examenFinal * 0.5);
}
bool estaHabilitado(double nota1, double nota2, double nota3) 
{
    return nota1 >= 60 && nota2 >= 60 && nota3 >= 60;
}
bool aproboMateria(double notaFinal) 
{
    return notaFinal >= 51;
}
int main() 
{
    int cantidadEstudiantes;
    int aprobados = 0;
    int reprobados = 0;
    double sumaNotasFinales = 0;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantidadEstudiantes;
    for (int i = 1; i <= cantidadEstudiantes; i++) 
    {
        double nota1;
        double nota2;
        double nota3;
        double examen;
        cout << "\n===== ESTUDIANTE " << i << " =====" << endl;
        do {
            cout << "Ingrese Nota Parcial 1: ";
            cin >> nota1;
        } while (!notaValida(nota1));
        do {
            cout << "Ingrese Nota Parcial 2: ";
            cin >> nota2;
        } while (!notaValida(nota2));
        do {
            cout << "Ingrese Nota Parcial 3: ";
            cin >> nota3;
        } while (!notaValida(nota3));
        double notaFinal = 0;
        if (estaHabilitado(nota1, nota2, nota3)) 
        {
            do {
                cout << "Ingrese Nota Examen Final: ";
                cin >> examen;
            } while (!notaValida(examen));
            double promedio = calcularPromedioParciales(nota1, nota2, nota3);
            notaFinal = calcularNotaFinal(promedio, examen);
            cout << "\nNota Parcial 1: " << nota1 << endl;
            cout << "Nota Parcial 2: " << nota2 << endl;
            cout << "Nota Parcial 3: " << nota3 << endl;
            cout << "Nota Examen Final: " << examen << endl;
            cout << "Nota Final: " << notaFinal << endl;
            if (aproboMateria(notaFinal)) 
            {
                cout << "ESTADO: APROBADO" << endl;
                aprobados++;
            } 
            else 
            {
                cout << "ESTADO: REPROBADO" << endl;
                reprobados++;
            }
        } 
        else 
        {
            cout << "\nEl estudiante no esta " << "habilitado para dar el examen." << endl;
            cout << "ESTADO: REPROBADO" << endl;
            notaFinal = 0;
            reprobados++;
        }
        sumaNotasFinales = sumaNotasFinales + notaFinal;
    }
    double porcentajeAprobados = (double) aprobados / cantidadEstudiantes * 100;
    double porcentajeReprobados = (double) reprobados / cantidadEstudiantes * 100;
    double promedioFinal = sumaNotasFinales / cantidadEstudiantes;
    cout << "\n==============================" << endl;
    cout << "RESUMEN GENERAL" << endl;
    cout << "==============================" << endl;
    cout << "Porcentaje de aprobados: " << porcentajeAprobados << "%" << endl;
    cout << "Porcentaje de reprobados: " << porcentajeReprobados << "%" << endl;
    cout << "Promedio de notas finales: " << promedioFinal << endl;
    return 0;
}