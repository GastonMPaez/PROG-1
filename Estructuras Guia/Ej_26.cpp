#include <iostream>
using namespace std;
#define MAX_CONT 5 //100

struct Contenedor
{
    string identificacion;
    float peso;
    int puerto;
}

void leer(string msg, int &valor){
    cout << msg << endl;
    cin >> valor;
}

void leer(string msg, float &valor){
    cout << msg << endl;
    cin >> valor;
}

void leer(string msg, string &valor){
    cout << msg << endl;
    cin >> valor;
}

void corteDeControl(Contenedor contenedores) {

    float pesoTotal=0;
    string idemMayorPeso;

    leer("Ingrese el Puerto de destino: ", contenedores.puerto);
    
    while (contenedores.puerto != 0 && MAX_CONT > 0)
    {
        int keyTipo = contenedores.puerto;
        
        int cantContenedoresXPuerto=0;
        
        float maxPeso=0;

        while (contenedores.puerto !=0 && keyTipo == contenedores.puerto)
        {
            leer("Ingrese la identificacion del contenedor:", contenedores.identificacion);
            
            leer("Ingrese el peso del contenedor:", contenedores.peso);

            pesoTotal += contenedores.peso;
            if (maxPeso = 0 || contenedores.peso > maxPeso )
            {
                maxPeso = contenedores.peso;
                idemMayorPeso = contenedores.identificacion;
            }
            
            cantContenedoresXPuerto++;

            MAX_CONT--;
       
            leer("Ingrese el Puerto de destino: ", contenedores.puerto);
        }
        cout << endl;
        //3) La cantidad de contenedores que debe trasladar a cada puerto
        cout << "Para el puerto" << keyTipo << "la cantidad de contenedores es:" << cantContenedoresXPuerto << endl;
    }
    cout << endl;

    // 1) El peso total que el buque debe trasladar
    cout << "El buque debe transladar: " << pesoTotal << "Kg" << endl;
    
    // 2) La identificación del contenedor de mayor peso
    cout << "El contenedor de mayor peso es: " << idemMayorPeso << endl;


}

int main () {
 Contenedor contenedores;

 corteDeControl(contenedores);

 system("pause");
 return 0;
}

/*

Un buque de carga traslada 100 contenedores a tres diferentes puertos del país.

Los puertos se identifican con los números 1, 2 y 3.

De cada contenedor que el buque traslade se registran los siguientes datos:
- Identificación del contenedor
- Peso del contenedor en kg
- Puerto de arribo (un valor de 1 a 3).
Se pide calcular e informar:

1) El peso total que el buque debe trasladar
2) La identificación del contenedor de mayor peso
3) La cantidad de contenedores que debe trasladar a cada puerto

*/