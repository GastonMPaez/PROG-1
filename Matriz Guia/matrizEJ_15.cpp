#include <iostream>
using namespace std;
#define CANT_ARTICULOS 30
#define CANT_SUCURSALES 4

struct Movimiento
{
    int codArticulo;
    int codSucursal;
    char tipoMovimiento;
    int cantidad;
};


void procesarSemana(int stockInicial[][CANT_SUCURSALES], Movimiento movimientos[], int cantMovimientos){

 for (int i = 0; i < cantMovimientos; i++)
 {
    int filaStockInicial = movimientos[i].codArticulo;
    int columnaStockInicial = movimientos[i].codArticulo;
   
    int cantidad = movimientos[i].cantidad;

    if (movimientos[i].tipoMovimiento != 'E')
    {
        cantidad = cantidad * -1;
    }
    
    stockInicial[filaStockInicial][columnaStockInicial] += cantidad;
 }
 

}

void imprimirListado(int stock[CANT_ARTICULOS][CANT_SUCURSALES]){
 int articulosSinStock[CANT_ARTICULOS];
 int cantArticulosSinStock = 0;
 for (int i = 0; i < CANT_ARTICULOS; i++)
 { 
    cout << "Articulos: " << i << endl;
    int ventas = 0;
    for (int j = 0; j < CANT_SUCURSALES; j++)
    {
        ventas += stock[i][j];
        cout << "Sucursal: " << j << ":";
        cout << stock[i][j] << endl;
    }
    cout << endl;

    if (ventas <= 0)
    {
        articulosSinStock[cantArticulosSinStock] = i;
        cantArticulosSinStock++;
    }
    
    cout << "Articulos sin Stock" << endl;
    for (int i = 0; i < cantArticulosSinStock; i++)
    {
        cout << "Articulo " << i << endl;
    }
    
 }


}


int main () {
 
 int stockInicial[CANT_ARTICULOS][CANT_SUCURSALES];
 Movimiento movimientos[100];

 procesarSemana(stockInicial, movimientos, 100);


 system("pause");
 return 0;
}

/*

Una casa de venta de repuestos automotores comercializa 30 artículos diferentes los que vende en
cada una de sus 4 sucursales. Al finalizar cada semana, se recibe la siguiente información de los movimientos
de artículos:

- Código de artículo (Entero entre 0 y 29).
- Código de sucursal (Entero entre 0 y 3).
- Tipo de movimiento (‘E’=>Entrada, ‘S’=>Salida).
- Cantidad (Entero mayor a cero).

El dueño desea un informe que muestre la cantidad en stock de cada artículo en cada sucursal y además una
lista de los artículos indicando el Código cuyo stock total sea igual a cero o menor que cero (se acepta stock
negativo).

*/