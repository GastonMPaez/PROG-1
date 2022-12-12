#include <iostream>
using namespace std;

struct Registro
{
    string nombre;
    int fechaCompleta;
};

void leer(string mensaje, int &valor){
    cout<<mensaje<<endl;
    cin>>valor;
}

void leer(string mensaje, string &valor){
    cout<<mensaje<<endl;
    cin>>valor;
}


void cargarRegistro(Registro personas){

    int mayorEdad=0;
    string mayorNombre;

    leer("Nombre", personas.nombre);

    while (personas.nombre != "FIN" )
    {
        leer("Fecha Nac", personas.fechaCompleta);

        if (mayorEdad == 0)
        {
            mayorEdad = personas.fechaCompleta;
            mayorNombre = personas.nombre;
        }

        if (personas.fechaCompleta < mayorEdad)
        {
            mayorEdad = personas.fechaCompleta;
            mayorNombre = personas.nombre;
        }
        
        
        leer("Nombre", personas.nombre);
    }
    
    cout << "nombre de la persona de mayor edad: " << mayorNombre << " Edad: " << mayorEdad << endl;
    
}

int main () {
 Registro persoans;

 cargarRegistro(persoans);

 system("pause");
 return 0;
}

/*
Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un
Nombre = “FIN”, informar el nombre de la persona de mayor edad.
*/