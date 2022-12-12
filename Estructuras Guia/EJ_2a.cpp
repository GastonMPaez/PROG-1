#include <iostream>
using namespace std;

struct Fecha
{
    int dia;
    int mes;
    int anio;
};

struct Persona
{
    string nombre;
    Fecha fechaNacimiento;
};

void leer(string msj, int &valor){
    cout << msj << endl;
    cin >> valor;
}

void leer(string msj, string &valor){
    cout << msj << endl;
    cin >> valor;
}

void leerFecha(Fecha &fecha) {
    leer("Anio:", fecha.anio);
    leer("Mes: ", fecha.mes);
    leer("Dia:", fecha.dia);
}

void imprimirFecha(Fecha fecha) {
    cout << fecha.dia << "/" << fecha.mes << "/" << fecha.anio;
};

Persona llenarPersonas(){
    Persona persona;
    leer("Nombre:", persona.nombre);
    leerFecha(persona.fechaNacimiento);
    return persona;
}

void imprimirPersona(Persona personas){
    cout << "Nombre: " << personas.nombre << endl;
    cout << "Fecha nacimiento: " << endl;
    imprimirFecha(personas.fechaNacimiento);
    cout << endl;
}

int main () {

 int cantidadPersonas=0;
 cout << "Ingrese cant personas a cargar" << endl;
 cin >> cantidadPersonas;

 Persona personas[cantidadPersonas];

 for (int i = 0; i < cantidadPersonas; i++)
 {
    personas[i] = llenarPersonas();
 }
 
 for (int i = 0; i < cantidadPersonas; i++)
 {
    imprimirPersona(personas[i]);
 }
 
 

 system("pause");
 return 0;
}