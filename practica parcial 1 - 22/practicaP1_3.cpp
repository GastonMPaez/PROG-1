#include <iostream>
using namespace std;

int main () {
 int hora;
 int dia = 30;
 
 float ventas;
 float facturacionTotal;
 
 int clientes;
 int clientesTotales;

 for (int i = 1; i <= dia; i++)
 {
     cout << "Dia: " << i << endl;
    clientes=0; 
    for (int j = 9; j <= 21; j++)
    {
        cout << "Hora " << j << endl;
    
        cout << "Cantidad de ventas: " << endl;
        cin >> ventas;

       if (ventas != 0)
       {
           clientes++;
       }
        

        facturacionTotal += ventas;
        clientesTotales += clientes;
    }
    
    
 }
 
 cout << "Promedio facturacion por cliente: " << facturacionTotal / clientesTotales << endl;

 system ("pause");
 return 0;
}


/*

Un local de comida al paso necesita de nuestra ayuda para procesar los datos que ha relevado de su
desempeño. Los datos que ha registrado son las ventas (en pesos facturados) y cantidad de clientes por hora.

Realice el programa que le permita cargar los datos registrados durante un mes (30 días) a cada hora (el local
trabaja de 9hs a 21hs) y luego informe:

a. El día y hora con menor facturación registrada.
b. El día con mayor facturación diaria.
c. El promedio de facturación por cliente (facturación total / clientes totales)

*/