#include <iostream>
using namespace std;


struct Fecha
{
    int dia;
    int mes;
    int anio;
};

struct Item
{
    int id;
    string descripcion;
    int cantidad;
    float precioUnit;
};

struct Factura
{
    int numFactura;
    Fecha fechaCompleta;
    string nombreCliente;
    int cuit;
    float total;
    Item items;
};

struct Venta
{
    int idSucursal;
    int dia;
    int valorTotal;
};


void ordenarXMonto(int dias[], int cantDias){
    //burbujeoMejorado
}


void definirListado(Venta ventas[][31], Factura facturas[][31], Fecha fechacompleta[], Item items[]){
    int dias[31];

    for (int i = 0; i < 3; i++) // sucursales
    {
        for (int j = 0; j < 31; j++) // dias
        {
            ventas[i][j].valorTotal = facturas[i][j].total;
        }
        
    }
    
}

//ventas [SUCURSAL][DIAS]
//id sucursal   /       dia

int main () {
 

 system("pause");
 return 0;
}

/*

registrar total de la factura
todas las ventas diarias de las 3 sucursales (corte control)
ordenado monto total.

*/


/*

corte decontrol
busquedas
matrices
estructuras

*/