#include <iostream>
using namespace std;

struct Inscripcion {
    int codMateria;
    int codLegajo;
    string nombreApellido;
};

void apareo(Inscripcion diasFinales[], int cantDiaria, Inscripcion maestroFinales[], int cantMaestro, Inscripcion finalesAct[], int &cant){
 int i, j = 0;
 cant=0;
 
 while (i < cantDiaria && j < cantMaestro)
 {
    if (diasFinales[i].codMateria < maestroFinales[i].codMateria)
    {
        finalesAct[cant] = diasFinales[i];
        i++;
    }
    else{
        finalesAct[cant] = maestroFinales[j];
        j++;
    }
    cant++;
 }

 while (i < cantDiaria)
 {
    finalesAct[cant] = diasFinales[i];
    i++;
    cant++;
 }

 while (j < cantMaestro)
 {
    finalesAct[cant] = maestroFinales[i];
    j++;
    cant++;
 }
}


void imprimir(Inscripcion inscripciones[], int cantidad) {
    cout << "Materia\t\tLegajo\t\tNombre"<< endl;
    for (int i = 0; i < cantidad; i++) {
        cout << inscripciones[i].codMateria << "\t\t" << inscripciones[i].codLegajo << "\t\t" << inscripciones[i].nombreApellido << endl;
    }
    return;
}

void imprimirXMateria(Inscripcion inscripciones[], int cantidad) {
    int i = 0, cantAlumnos = 0, cantMaterias = 0;

    while(i < cantidad) {
        int key = inscripciones[i].codMateria;
        cantAlumnos = 0;

        cout << "Materia: " << key << endl;
        cout << "Legajo\t\tNombre" << endl;
        while(i < cantidad && key == inscripciones[i].codMateria) {
            cout << inscripciones[i].codLegajo << "\t\t" << inscripciones[i].nombreApellido << endl;
            cantAlumnos++;
            i++;
        }

        cantMaterias++;
        cout << endl;
        cout << "Cantidad Alumnos: " << cantAlumnos << endl;
    }

    cout << "Cantidad de Materias: " << cantMaterias << endl;
    cout << endl;
}



int main () {
    Inscripcion inscDiarias[3] = {
        {111, 222, "Pepe"},
        {111, 223, "Leo"},
        {222, 222, "Pepe"},
    };

    Inscripcion maestro[5] = {
        {111, 777, "Juan"},
        {112, 223, "Carlos"},
        {333, 232, "Mario"},
        {333, 445, "Maria"},
        {333, 765, "Ana"},
    };

    Inscripcion actualizado[8];

    int cant = 0;
    apareo(inscDiarias, 3, maestro, 5, actualizado, cant);

    imprimir(actualizado, cant);

    cout << endl;
    cout << "Inscripciones por materias:" << endl;
    imprimirXMateria(actualizado, cant);

 system("pause");
 return 0;
}

/*

Ej. 9: Se dispone un vector de inscripción de alumnos a exámenes finales MAESTROFINALES y otro con
las inscripciones del día de hoy DIAFINALES, ambos ordenados ascendente por código de materia y con el
siguiente diseño:

Nro de legajo (8 dígitos)
Código de materia (6 dígitos)
ApellidoNombre(cadena)

Se pide desarrollar un procedimiento que complete un nuevo vector de inscripciones a finales

FINALESACT resultante del apareo de los dos vectores anteriores, con el mismo orden y diseño.

*/