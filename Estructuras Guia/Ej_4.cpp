#include <iostream>
using namespace std;

struct Fecha
{
    int dia;
    int mes;
    int anio;
};

struct BoletasAlumnos
{
    string apellido;
    int legajo;
    int codMateria;
    Fecha fechaExamen;
};

void leer(string msg, int &valor){
    cout << msg << endl;
    cin >> valor;
}

void leer(string msg, string &valor){
    cout << msg << endl;
    cin >> valor;
}


void leerFecha(Fecha &fecha) {
    leer("Anio:", fecha.anio);
    leer("Mes: ", fecha.mes);
    leer("Dia:", fecha.dia);
}

BoletasAlumnos llenarBoletas(){
    BoletasAlumnos boleta;
    leer("Apellido:", boleta.apellido);
    leer("Codigo de la materia:", boleta.codMateria);
    leerFecha(boleta.fechaExamen);
    return boleta;
}

void imprimirFecha(Fecha fecha) {
    cout << "Dia: " << fecha.dia << endl;
    cout << "Mes: " << fecha.mes << endl;
    cout << "Anio: " << fecha.anio << endl;
};

void imprimirAlumnos(BoletasAlumnos alumnos){
    cout << "Legajo: " << alumnos.legajo << endl;
    cout << "Cod Materia: " << alumnos.codMateria << endl;
    cout << "Fecha del Examen: " << endl;
    imprimirFecha(alumnos.fechaExamen);
    cout << "Apellido: " << alumnos.apellido << endl;
    cout << endl;
}



int main () {

 int cantidadBoletas=0;
 cout << "Ingrese la cantidad de boletas a cargar" << endl;
 cin >> cantidadBoletas;

 int examenFinal[cantidadBoletas];

 int legajo=0;
 
 
 BoletasAlumnos boleta[cantidadBoletas];

 cout << "Ingrese legajo" << endl;
 cin >> boleta.legajo;

 while (legajo != 0 || cantidadBoletas != 0)
 {

    for (int i = 0; i < cantidadBoletas; i++)
    {
        boleta[i] = llenarBoletas();
    }

    cout << "Ingrese Legajo" << endl;
    cin >> boleta.legajo;
 }
 

 system("pause");
 return 0;
}

/*

Se dispone de un conjunto de boletas de inscripción de alumnos (100 como máximo) a examen en el mes de mayo.

Cada boleta tiene los siguientes datos: apellido, número de legajo, código de materia, día, mes y año del examen.

Los datos finalizan con un legajo igual a 0.

Desarrollar un programa que, a partir del ingreso de las boletas mencionadas, por teclado genere un vector de
inscripción de alumnos a exámenes finales según el siguiente diseño:

a.1 Nro. de legajo (8 dígitos)
a.2 Código de materia (6 dígitos)
a.3 Día del examen (1..31)
a.4 Mes del examen (1..12)
a.5 Año del examen (4 dígitos)
a.6 Apellido (25 caract)

*/