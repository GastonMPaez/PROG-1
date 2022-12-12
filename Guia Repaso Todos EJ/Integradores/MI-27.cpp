#include <iostream>
using namespace std;

struct Partido
{
    int nroEquipo;
    char codigo;
};

void leer(string mensaje, char &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void corteControl(Partido equipos[], int cantEquipos){
    int i=0;
    
    while (i < cantEquipos)
    {
        int key = equipos[i].nroEquipo;
        int puntaje=0;

        while (i < cantEquipos && key == equipos[i].nroEquipo)
        {
            leer("Resultado del partido:", equipos[i].codigo);

            if (equipos[i].codigo == 'G' || equipos[i].codigo == 'g')
            {
                puntaje+=3;
            }
            
            if (equipos[i].codigo == 'E' || equipos[i].codigo == 'e')
            {
                puntaje+=1;
            }
           i++; 
        }
        cout << "Equipo: " << equipos[i].nroEquipo << endl;
        cout << "Puntaje: " << puntaje << endl;
    }
    
}


int main(){
 Partido equipos[]={};

 int k=0;
 int nroEquipo=0;
 int puntaje=0;

 char codigoRes=0;

 cout << "Ingrese el numero de equipos que juegan" << endl;
 cin >> k;

 /*

 for (int i = 0; i < k; i++)
 {
    cout << "Ingrese el numero del equipo" << endl;
    cin >> nroEquipo;

    for (int j = 0; j < k-1; j++)
    {
        cout << "Ingrese el resultado del partido" << endl;
        cin >> codigoRes;

        if (codigoRes == 'G' || codigoRes == 'g')
        {
            puntaje+=3;
        }
        
        if (codigoRes == 'E' || codigoRes == 'e')
        {
            puntaje+=1;
        }
    }
    cout << "Puntos totales del equipo: " << nroEquipo << endl;
    cout << puntaje << endl;
    puntaje =0;
 }
 */
 
 corteControl(equipos, k);


 system("pause");
 return 0;
}

/*
En un torneo de fútbol participan K equipos. El torneo se juega con el sistema de todos contra todos. Por
cada partido disputado por un equipo se dispone de la siguiente información:

a) Nro. de equipo,
b) Código del resultado ('P'= Perdido, 'E'= Empatado, 'G'= Ganado).

Se arma un lote de datos con todos los resultados del torneo, agrupados por Nro. de equipo.
Desarrollar el programa que imprima:

Por cada equipo, su número y el puntaje total que obtuvo (suma 3 si gana, y 1 si empata).
*/