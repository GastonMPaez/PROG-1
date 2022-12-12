#include <iostream>
using namespace std;

int main () {

 int cantEquipos=0;
 int puntajeTot=0;

 char numEquipo;
 char numRival;

 char codigoResult;

 cout << "Ingrese la cantidad de equipos que participan" << endl;
 cin >> cantEquipos;

for (int i = 0; i < cantEquipos; i++)
{
    cout << "Num. del equipo" << endl;
    cin >> numEquipo;

    puntajeTot=0;

        for (int j = 1; j < cantEquipos; j++)
        {
            cout << "Resultado del partido " << j << " de " << cantEquipos-1 << endl;
            cin >> codigoResult;

            if (codigoResult == 'G' || codigoResult == 'g')
            {
                puntajeTot = puntajeTot+2;
            }else if (codigoResult == 'E' || codigoResult == 'e')
            {
                puntajeTot= puntajeTot+1;
            }            
        }

 cout << "-------------------------------------------------------" << endl;
 cout << "Resultados del equipo " << numEquipo << " Puntaje total: " << puntajeTot <<  endl;
 cout << "-------------------------------------------------------" << endl;

}

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