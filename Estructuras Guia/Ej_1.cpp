#include <iostream>
using namespace std;

struct Alumno
{
    int legajo;
    string apellidoNombre;
    int nota;
};

void leer(string msj, int &valor){
    cout << msj << endl;
    cin >> valor;
}

void leer(string msj, string &valor){
    cout << msj << endl;
    cin >> valor;
}

Alumno llenarAlumno(){
    Alumno alumno;
    leer("Legajo: ", alumno.legajo);
    leer("Apellido y Nombre: ", alumno.apellidoNombre);
    leer("Nota: ", alumno.nota);
}

void imprimirAlumno(Alumno alumno){
    cout << alumno.legajo << endl;
    cout << alumno.apellidoNombre << endl;
    cout << alumno.nota << endl;
}


int main () {
 int cantAlumnos=0;
 cout << "Ingrese cant alumnos a cargar: " << endl;
 cin >> cantAlumnos;

 Alumno alumno[cantAlumnos];

 for (int i = 0; i < cantAlumnos; i++)
 {
    alumno[i] = llenarAlumno();
 }
 
 cout << "------------------------------------" << endl;

 for (int i = 0; i < cantAlumnos; i++)
 {
    cout << "Alumno " << i+1 << ": "<< endl;
    imprimirAlumno(alumno[i]);
 }
 
 system("pause");
 return 0;
}

/*
Alumno 1:
[1235 - MartinPerez - 6]

Alumno 2:
[9582 - RaulAlf - 10]

Alumno 3:
[7324 - MarcosMix - 8]
*/