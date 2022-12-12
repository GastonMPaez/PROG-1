#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void leer(string mensaje, string &valor){
    cout << mensaje << endl;
    cin >> valor;
}

int main () {

    string nombre;
    string nombreMayor;
    string nombreMenor;

    int fecha=0;
    int fechaMayor=0;
    int fechaMenor=0;
 
    leer("Ingrese un nombre", nombre);

    while (nombre != "fin" || nombre != "FIN")
    {
        if (fecha == 0)
        {
            fechaMayor = fecha;
            fechaMenor = fecha;

            nombreMayor = nombre;
            nombreMenor = nombre;
        }
        
        leer("Ingrese la fecha de nacimiento", fecha);

        if (fecha > fechaMenor)
        {
            fechaMenor = fecha;
            nombreMenor = nombre;
        }
        
        if (fecha < fechaMayor)
        {
            fechaMayor = fecha;
            nombreMayor = nombre;
        }
        
    }
    
    cout << "Persona mayor: " << nombreMayor << " Fecha: " << fechaMayor << endl;
    cout << "Persona menor: " << nombreMenor << " Fecha: " << fechaMenor << endl; 

 system("pause");
 return 0;
}

/*
Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un Nombre =
‘FIN’, informar el nombre de la persona con mayor edad y el de la más joven.
*/