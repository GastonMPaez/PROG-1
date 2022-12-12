#include <iostream>
using namespace std;
#define MAX_REGISTROS 3 //100

struct Producto
{
    char codigoProd;
    int stock;
};

struct Pedido
{
    int nroPedido;
    int nroCliente;
    char codProducto;
    int cantPedida;
};

void leer(string msg, int &valor){
    cout << msg << endl;
    cin >> valor;
}

void leer(string msg, char &valor){
    cout << msg << endl;
    cin >> valor;
}

Producto llenarMatriz(){
    Producto productos;
    leer("Codigo del producto:", productos.codigoProd);
    leer("Stock del producto:", productos.stock);
    return productos;
}

void procesar(Producto productos[], char cantProductos, Pedido pedidos[], int cantPedidos, Pedido rebotados[], int &cantRebotados){
   
 cout <<endl<<"Nro Pedido\tNro Cliente\tCod.Producto\tCant Pedida"<<endl;
 
 int j=0;

 for (int i = 0; i < cantPedidos; i++)
 {
    if (productos[pedidos[i].codProducto-1].stock >= pedidos[i].cantPedida)
    {
        //actualizo stock a)
        productos[pedidos[i].codProducto-1].stock -= pedidos[i].cantPedida;

        //imprimo pedido satisfecho b)
        cout << pedidos[i].nroPedido << "\t";
        cout << pedidos[i].nroCliente << "\t";
        cout << pedidos[i].codProducto << "\t";
        cout << pedidos[i].cantPedida << "\t";
    } else
    {
        //genero vector Rechazado c)
        rebotados[j]=pedidos[i];
        j++;
    }
 }
 cantRebotados=j;
 return;

}



int main () {


 system("pause");
 return 0;
}

/*

   prod 1: [1 - 10]
   prod 2: [6 - 55]
   prod 3: [9 - 25]
   prod 4: [10 - 60]
   prod 5: [20 - 40]

   Pedidos
   pedido 1: [3    12345   9   10]
   pedido 2: [9    67891   20  15]
   pedido 3: [10   66223   6   20]

*/

/*

Dado un vector de productos que contiene 100 registros, y cada registro corresponde a un producto
que está codificado del 1 a 100, ordenado por código de producto con el siguiente diseño:

Código de producto (1..100)
Stock (int)

y otro vector de pedidos, con el siguiente diseño:

Número de pedido(int) 
Número de cliente(long)
Código de producto (1..100, char)
Cantidad pedida (int)

Se pide desarrollar un procedimiento que reciba ambos vectores, y procese los pedidos haciendo lo siguiente

a) Actualizar el campo stock del vector de productos, por cada pedido que pueda ser realizado.
b) Imprima el listado de los pedidos satisfechos con el siguiente formato:
   
 Pedidos Satisfechos:
    NRO de pedido   NRO cliente     Cod producto    Cantidad peida
    9999               99999            999             9999

c) Complete un tercer vector con el mismo diseño que el vector de pedidos, con aquellos pedidos que no pueden ser satisfechos en su totalidad.

*/