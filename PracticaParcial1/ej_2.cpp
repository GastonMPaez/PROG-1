#include <iostream>
using namespace std;

float sacarDescuento(char tipo, float &valor){
    float resultado=0;

    switch (tipo)
    {
    case 'O':
        resultado = valor * 0.4;
        break;
    case 'E':
        resultado = valor * 0.1;
        break;
    case 'T':
        resultado = valor * 0.15;
        break;
    
    default:
        break;
    }


 return resultado;
}

int main () {
 
 int nroFactura=0;
 float importe;
 char codigo;
 

 cout << "Ingrese el codigo de la operacion (O, E, T)" << endl;
 cin >> codigo;

 float descuento=0;
 float valorFinal=0;

 int operacionesXdia=0;
 float montoXdia=0;

 int operacionesEfvo=0;
 float montoEfvo=0;

 int operacionesEfvoOS=0;
 float montoEfvoOS=0;

 int operacionesXtarjeta=0;
 float montoXtarjeta=0;
 
 while (codigo != '*')
 {
    
    cout << "Ingrese el numero e factura" << endl;
    cin >> nroFactura;

    cout << "Ingrese el importe" << endl;
    cin >> importe;

    descuento = sacarDescuento(codigo, importe);

    if(codigo == 'T')
    {
        valorFinal = importe + descuento;
    }else{
        valorFinal = importe - descuento;
    }

    cout << "Factura: " << nroFactura << endl;
    cout << "Codigo: " << codigo << endl;
    cout << "Importe: " << importe << " - Descuento / Recargo: " << descuento << " - ValorF: " << valorFinal << endl;

    operacionesXdia++;
    montoXdia += valorFinal;

    if (codigo == 'O')
    {
        operacionesEfvoOS ++;
        montoEfvoOS += valorFinal;
    }
    if (codigo == 'E')
    {
        operacionesEfvo++;
        montoEfvo+=valorFinal;
    }
    if (codigo == 'T')
    {
        operacionesXtarjeta++;
        montoXtarjeta+=valorFinal;
    }
    
    
    
    cout << "Ingrese el codigo de la operacion (O, E, T) / [ * para finalizar]" << endl;
    cin >> codigo;
 }
 
 cout << "Total operaciones X dia: " << operacionesXdia << endl;
 cout << "valor total X dia: " << montoXdia << endl;

 cout << endl;
 
 cout << "Total de operaciones OS: " << operacionesEfvoOS << endl;
 cout << "valor total OS: " << montoEfvoOS << endl;
 
 cout << endl;

 cout << "Total operaciones efvo: " << operacionesEfvo << endl;
 cout << "valor total EFVO: " << montoEfvo << endl;
 
 cout << endl;
 
 cout << "Total operacion tarjeta: " << operacionesXtarjeta << endl;
 cout << "valor total tarjeta: " << montoXtarjeta << endl;

 system("pause");
 return 0;
}

/*
Ejercicio 2
Desarrollar una aplicación que lea las ventas efectuadas por una farmacia.
Por cada venta se ingresa un número de factura, código indicador de la operación (O, E ó T) y su importe.
● Si el código es 'O, significa que corresponde a una obra social (se abona sólo en efectivo), le
corresponde un 40% de descuento.
● Si el código es E, significa que se abona en efectivo, le corresponde un 10% de descuento.
● Si el código es T, significa que se abona con tarjeta, le corresponde un 15% de recargo.
Al terminar el día se ingresa un movimiento con ‘*’ en el código.
Se pide informar:
● Total de operaciones y monto del día
● Total de operaciones y total de montos en efectivo, discriminando cuáles fueron por obra social y
cuáles no
● Total de operaciones y montos por tarjeta.
● Las 3 facturas de mayor monto.
NOTA: el total de montos debe ser el efectivamente cobrado luego de efectuar los descuentos o recargos
correspondientes.
*/