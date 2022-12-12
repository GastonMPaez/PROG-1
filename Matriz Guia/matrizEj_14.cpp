#include <iostream>
using namespace std;
#define MAX_ANIOS 10
#define CANT_ANIOS 1000
#define CANT_BANDAS 100

struct Venta
{
    string idDisco;
    int cantVendida;
};

struct Banda
{
    char id;
    string nombre;
    int ventas;
};

struct Disco
{
    string id;
    string nombre;
    char idBanda;
    string nombreBanda;
};

int busquedaBinaria(string idDisco, Disco discos[], int &cantDiscos){

    return 0; //devolver la posicion donde el idDisco coincida
}

void ordenar(Banda bandas[], int cantBandas){
    //ordena por burbujeoMejor por nombreBanda
    return;
}

void procesarVentas(Venta ventas[][MAX_ANIOS], int cantVentas, int cantAnios, Disco discos[], int cantDiscos, Banda bandas[], int &cantBandas){

    for (int i = 0; i < cantVentas; i++)
    {
        for (int j = 0; j < cantAnios; j++)
        {
            int posDisco = busquedaBinaria(ventas[i][j].idDisco, discos, cantDiscos);
            int idBanda = discos[posDisco].idBanda;
            bandas[idBanda].id = idBanda;
            bandas[idBanda].nombre = discos[posDisco].nombreBanda;
            bandas[idBanda].ventas += ventas[i][j].cantVendida;
        }
    }
    ordenar(bandas, CANT_BANDAS);
    return;

}


int main () {

    Venta ventas[100][10];

    Disco discos[1000];
    Banda bandas[100];
 
 system("pause");
 return 0;
}

/*

Ej. 14: Una discográfica desea obtener un listado de los discos más vendidos en un determinado período.
Para ello cuenta con los datos de los discos vendidos en una tabla donde cada columna representa un año y
cada fila una venta. Cada venta posee la siguiente información:
Id. del disco vendido (Código alfanumérico de 6 caracteres)
Cantidad de discos vendidos (Entero largo)
Ejemplo:



Nota: cada disco sólo aparecerá 1 vez por año, es decir, no se repetirá el mismo disco en la misma columna.
La discográfica cuenta además con la información de cada disco que comercializa. De cada disco posee los
siguientes datos:

● Id. del disco vendido (Código alfanumérico de 6 caracteres)
● Nombre del disco (Cadena de 40 caracteres).
● Id. de la banda:(Entero corto entre 0 y 100)
● Nombre de la banda (Cadena de 40 caracteres).
La discográfica tiene en su poder 1000 discos para vender. Los datos de los discos se encuentran ordenados
por id de disco.

Se pide:

● Obtener un listado ordenado por nombre de banda con las ventas realizadas en los últimos 10 años.
● Consideraciones: Realizar la menor cantidad de búsquedas posibles sobre el conjunto de discos.

*/