#include <iostream>
using namespace std;

struct StockEnLocal
{
    int codigo;
    string autor;
    int stock;
    string titulo;
    string editorial;
    string genero;
};

struct StockEnDeposito
{
    int codigo;
    int stock;
};


void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void leer(string mensaje, string &valor){
    cout << mensaje << endl;
    cin >> valor;
}


void imprimirLibro(int codLibro, string mensaje){
    cout << codLibro << "\t\t" << mensaje << endl;
    return;
}

void emitirListado(StockEnLocal local[], int cantLocal, StockEnDeposito deposito[], int cantDeposito)
{

    cout << "Libros Faltantes" << endl;
    cout << "Codigo\tObservacion" << endl;
    
    int i = 0;
    int j = 0;
    int cantFaltantes=0;
      
    while (i < cantLocal && j < cantDeposito)
    {
        if (local[i].codigo == deposito[i].codigo)
        {
            if (local[i].stock == 0 && deposito[i].stock == 0)
            {
                imprimirLibro(local[i].codigo, "Falta en Local y en Deposito");
                cantFaltantes++;
            } else if (local[i].stock == 0)
            {
                imprimirLibro(local[i].codigo, "Falta en Local");
                cantFaltantes++;
            } else if (deposito[i].stock == 0)
            {
                imprimirLibro(deposito[i].codigo, "Falta en Deposito");
                cantFaltantes++;
            }
                      
            
            i++;
            j++;
        } else if (local[i].codigo < deposito[j].codigo){
            if (local[i].stock == 0)
            {
                imprimirLibro(local[i].codigo, "Falta en Local");
                cantFaltantes++;
            }
            
            i++;
        } else {
            if (deposito[i].stock == 0)
            {
                imprimirLibro(deposito[i].codigo, "Falta en Deposito");
                cantFaltantes++;
            }
            j++;
        }
    
        while(i < cantLocal) {
            if(local[i].stock == 0) {
                imprimirLibro(local[i].codigo, "Faltante en local");
                cantFaltantes++;
            }
            i++;
        }

        while(j < cantDeposito) {
            if(deposito[j].stock == 0) {
                imprimirLibro(deposito[j].codigo, "Faltante en deposito");
                cantFaltantes++;
            }
            j++;
        }
        
    
    
    }   
 
 
 cout << "Total libros faltantes: " << cantFaltantes << endl;
}


int main () {
 
 int n=0;
 int m=0;
 
 cout << "Ingrese la cantidad de libros que desea cargar en el local" << endl;
 cin >> n;
 
 cout << "Ingrese la cantidad de libros que desea cargar en el deposito" << endl;
 cin >> m;



 StockEnLocal local[n];
 StockEnDeposito deposito[m];


 emitirListado(local, n, deposito, m);



 system("pause");
 return 0;
}

/*

a) StockEnLocal, ordenado por c??digo del libro, con un registro por cada libro que se encuentra en el
local, con el siguiente dise??o:

??? C??digo de libro ( 4 d??gitos )
??? Autor (cadena)
??? Stock en el local (int)
??? T??tulo del libro (cadena)
??? Editorial (cadena)
??? Genero ( cadena)

b) StockEnDeposit, ordenado por c??digo del libro, con un registro por cada libro que se encuentra en el
dep??sito, con el siguiente dise??o:

??? C??digo de libro ( 4 d??gitos )
??? Stock en dep??sito (int)




void cargarLibros(StockEnLocal local[], int cantLocal, StockEnDeposito deposito[], int cantDeposito, StockTotal vecC[], int &cantTotal){
    cout << endl;
    cout << "Local: " << endl;

    for (int i = 0; i < cantLocal; i++)
    {
        leer("Codigo", local[i].codigo);
        leer("Stock", local[i].stockLocal);
    }
    ordenarXcodigoL(local, cantLocal);

    cout << endl;
    cout << "Deposito: " << endl;
    
    for (int i = 0; i < cantDeposito; i++)
    {
        leer("Codigo", deposito[i].codigo);
        leer("Stock", deposito[i].stock);
    }
    ordenarXcodigoD(deposito, cantDeposito);
    cout << endl;

    apareo(local, cantLocal, deposito, cantDeposito, vecC, cantTotal);
    
}

*/

/*
apareo, recorrer ambos vectores e imprimirlos
pregunt ocual es menor (va primero) y despues veo si tiene stock;
*/