#include <iostream>
using namespace std;

struct StockEnLocal
{
    int codigoLibro;
    string autor;
    int stockLocal;
    string titulo;
    string editorial;
    string genero;
};

struct StockEnDeposito
{
    int codigoLibro;
    int stockDeposito;
};

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void  leer(string mensaje, string &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void imprimirListado(int codigo, string mensaje){
    cout << codigo << "  " << mensaje << endl;
}

void apareoLibros(StockEnLocal local[], int cantLocal, StockEnDeposito deposito[], int cantDeposito){

    int i, j = 0;
    int cantFaltantes=0;

    while (i < cantLocal && j < cantDeposito)
    {
        if (local[i].codigoLibro == deposito[i].codigoLibro)
        {
            if (local[i].stockLocal == 0 && deposito[i].stockDeposito == 0)
            {
                imprimirListado(local[i].codigoLibro, "falta en local y deposito");
                cantFaltantes++;
            } else if (local[i].stockLocal == 0)
            {
                imprimirListado(local[i].codigoLibro, "Falta en Local");
                cantFaltantes++;
            } else {
                imprimirListado(deposito[i].codigoLibro, "Falta en Deposito");
                cantFaltantes++;
            }

            i++;
            j++;
        } else if (local[i].codigoLibro < deposito[i].codigoLibro)
        {
            if (local[i].stockLocal == 0)
            {
                imprimirListado(local[i].codigoLibro, "Falta en local");
                cantFaltantes++;
                
            }
            i++;
        } else{
            if (deposito[j].stockDeposito == 0)
            {
                imprimirListado(deposito[i].codigoLibro , "falta en deposito");
                cantFaltantes++;
            }
            j++;
        }

        while (i < cantLocal)
        {
            if (local[i].stockLocal == 0)
            {
                imprimirListado(local[i].codigoLibro, "Falta en local");
                cantFaltantes++;
            }
            i++;
        }

        while (j < cantDeposito)
        {
            if (deposito[j].stockDeposito == 0)
            {
                imprimirListado(deposito[i].codigoLibro, "Falta en deposito");
                cantFaltantes++;
            }
            j++;
        }
    }
    
    cout << "Tot libros faltantes" << cantFaltantes << endl;
}

int main () {
 
 StockEnLocal local[3] = {
    {1111, "Juan", 100, "La Casa", "Servantes", "misterio"},
    {1112, "Pedro", 150, "Prado Llano", "Casares", "geografia"},
    {1113, "Maria", 200, "La Noche Azul", "Servantes", "romance"},
 };

 StockEnDeposito deposito[3] = {
    {1112, 10},
    {1223, 0},
    {1224, 300},
 };

 apareoLibros(local, 3, deposito, 3);

 system("pause");
 return 0;
}


/*
a) StockEnLocal, ordenado por c??digo del libro, con un registro por cada libro que se encuentra en el local, con el siguiente dise??o:
??? C??digo de libro ( 4 d??gitos )
??? Autor (cadena)
??? Stock en el local (int)
??? T??tulo del libro (cadena)
??? Editorial (cadena)
??? Genero ( cadena)

b) StockEnDeposit, ordenado por c??digo del libro, con un registro por cada libro que se encuentra en el dep??sito, con el siguiente dise??o:
??? C??digo de libro ( 4 d??gitos )
??? Stock en dep??sito (int)


Se pide desarrollar la metodolog??a necesaria para escribir un algoritmo que reciba ambos conjuntos de datos
y emita un listado ordenado por c??digo de libro, con un rengl??n por cada libro que tenga faltante en stock sea
en dep??sito, local o en ambos lugares, con el siguiente formato:
*/