#include <iostream>
using namespace std;

struct ApellidoNombre
{
    string apellido;
    string nombre;
};

struct Clasificacion
{
    int nota1;
    int nota2;
    int nota3;
};

struct Alumnos
{
    int legajo;
    ApellidoNombre nombreCompleto;
    Clasificacion notas;
};

void leer(string msj, int &valor){
    cout << msj << endl;
    cin >> valor;
}

void leer(string msj, string &valor){
    cout << msj << endl;
    cin >> valor;
}

void leerNotas(Clasificacion &notas) {
    leer("Nota 1: ", notas.nota1);
    leer("Nota 2: ", notas.nota2);
    leer("Nota 3:", notas.nota3);
}

void imprimirNotas(Clasificacion notas) {
    cout << notas.nota1 << " - " << notas.nota2 << " - " << notas.nota3;
};

Alumnos llenarAlumno(){
    Alumnos alumno;
    leer("Legajo: ", alumno.legajo);
    leer("Apellido: ", alumno.nombreCompleto.apellido);
    leer("Nombre: ", alumno.nombreCompleto.nombre);
    leer("Nota 1: ", alumno.notas.nota1);
    leer("Nota 2: ", alumno.notas.nota2);
    leer("Nota 3: ", alumno.notas.nota3);
 return alumno;
}

void imprimirAlumno(Alumnos alumno){
    cout << "Legajo: " << alumno.legajo << endl;
    cout << "Nombre: " << alumno.nombreCompleto.nombre << endl;
    cout << "Apellido: " << alumno.nombreCompleto.apellido << endl;
    
    cout << "Notas: ";
    imprimirNotas(alumno.notas);
    cout << endl;
}


int main () {
 int cantAlumnos=0;
 cout << "cant alumnos a cargar: " << endl;
 cin >> cantAlumnos;

 Alumnos alumno[cantAlumnos]; 

 for (int i = 0; i < cantAlumnos; i++)
 {
    alumno[i] = llenarAlumno();
 }
  
 cout << "------------------------------------" << endl;

 for (int i = 0; i < cantAlumnos; i++)
 {
    cout << "Alumno " << i+1 << ": "<< endl;
    imprimirAlumno(alumno[i]);
    cout << endl;
 }
 

 system("pause");
 return 0;
}