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
    Fecha fechaCompleta;
};

void leer(string mensaje, int &valor){
    cout<<mensaje<<endl;
    cin>>valor;
}

void leer(string mensaje, string &valor){
    cout<<mensaje<<endl;
    cin>>valor;
}



void imprimirPersona(Persona personas[], int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Nombre: " << personas[i].nombre << endl;;
        cout << "Fecha Nacimiento" << endl;
        cout << "\tDia: " << personas[i].fechaCompleta.dia << endl;; 
        cout << "\tMes: " << personas[i].fechaCompleta.mes << endl; 
        cout << "\tAnio: " << personas[i].fechaCompleta.anio << endl; 
    }
    
}

void cargarPersonas(Persona personas[], int cantPersonas){
    for (int i = 0; i < cantPersonas; i++)
    {
        leer("Nombre: ", personas[i].nombre);
        cout << "\t FECHA NACIMIENTO" << endl;
        leer("Dia", personas[i].fechaCompleta.dia);
        leer("Mes", personas[i].fechaCompleta.mes);
        leer("Anio", personas[i].fechaCompleta.anio);
        cout << endl;
    }

    imprimirPersona(personas, cantPersonas);
}



int main () {
 Persona personas[4];

 cargarPersonas(personas, 4);
 

 system("pause");
 return 0;
}