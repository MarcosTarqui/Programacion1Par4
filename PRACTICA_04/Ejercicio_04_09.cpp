//Materia: Pregramacion I, Paralelo 4
//Autor: Marcos Fabio Tarqui Aruquipa
//Carrera del estudiante: Ing. Mecatronica
//Fecha de creacion: 28/08/2026
#include <iostream>

using namespace std;

float pedirNota(string mensaje);

int main(){
    int estudiantes;
    cout << "Cantidad de estudiantes: ";
    cin >> estudiantes;

    int aprobados = 0;
    int reprobados = 0;
    float sumaNotas = 0;

    for(int i = 0; i < estudiantes; i++){
        cout << "\nEstudiante " << i+1 << endl;

        float parcial1 = pedirNota("P1: ");
        float parcial2 = pedirNota("P2: ");
        float parcial3 = pedirNota("P3: ");

        float examenFinal = 0;
        float notaFinal = 0;

        if(parcial1 < 60 || parcial2 < 60 || parcial3 < 60){
            cout << "No rinde examen final." << endl;
            examenFinal = 0;
            notaFinal = ((parcial1 + parcial2 + parcial3) / 3.0) * 0.5;
        } 
        else {
            examenFinal = pedirNota("Examen Final: ");
            float promedio = (parcial1 + parcial2 + parcial3) / 3.0;
            notaFinal = (promedio * 0.5) + (examenFinal * 0.5);
        }

        cout << "Parciales: " << parcial1 << " " << parcial2 << " " << parcial3 << endl;
        cout << "Examen: " << examenFinal << endl;
        cout << "Nota Final: " << notaFinal << endl;

        if(notaFinal >= 51 && parcial1 >= 60 && parcial2 >= 60 && parcial3 >= 60){
            cout << "Estado: Aprovado" << endl;
            aprobados++;
        } else {
            cout<<"Estado: Reprovado" << endl;
            reprobados++;
        }

        sumaNotas = sumaNotas + notaFinal;
    }

    float porcAprobados = ((float)aprobados / estudiantes) * 100;
    float porcReprobados = ((float)reprobados / estudiantes) * 100;
    float promedioGeneral = sumaNotas / estudiantes;

    cout << "\n--- RESUMEN ---" << endl;
    cout << "Aprobados: " << porcAprobados << "%" <<endl;
    cout << "Reprovados: " << porcReprobados<<"%" << endl;
    cout << "Promedio General: " << promedioGeneral << endl;

    return 0;
}

float pedirNota(string mensaje){
    float nota;
    do{
        cout << mensaje;
        cin >> nota;
        if(nota < 0 || nota > 100){
            cout<<"Nota invalida!"<<endl;
        }
    }while(nota < 0 || nota > 100);
    return nota;
}