#include <iostream>
using namespace std;

struct Personas
{
    string nombre;
    int fecha;
};

void leer(string msj, int &valor){
    cout << msj << endl;
    cin >> valor;
}

void leer(string msj, string &valor){
    cout << msj << endl;
    cin >> valor;
}


int main () {
 Personas persona;
 Personas personaMasVieja;

 personaMasVieja.fecha=0;

 leer("Nombre: ", persona.nombre);
 while (persona.nombre != "FIN")
 {
    leer("Fecha (AAAAMMDD): ", persona.fecha);

    if (persona.fecha < personaMasVieja.fecha || personaMasVieja.fecha == 0)
    {
        personaMasVieja = persona;
    }    

    leer("Nombre: ", persona.nombre);
 }
 
 cout << "La persona mas vieja es: " << personaMasVieja.nombre << endl;

 system("pause");
 return 0;
}

/*
Enunciado: Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un
Nombre = “FIN”, informar el nombre de la persona de mayor edad.

 - Nombre del registro REG -
    Nombre - Cadena
    Fecha (AAAAMMDD) - 8 dígitos enteros
*/