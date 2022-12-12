#include <iostream>
using namespace std;

struct Ruleta
{
    char color;
    int numero;
};

void leer(string mensaje, int &valor){
    cout <<mensaje<<endl;
    cin >> valor;
}

void leer(string mensaje, char &valor){
    cout <<mensaje<<endl;
    cin >> valor;
}

Ruleta llenarMatriz(){
    Ruleta tiros;
    leer("Numero: ", tiros.numero);
    if (tiros.numero == 0)
    {
        tiros.color == 'V';
    }
    else{
         leer("Color (R/N): ", tiros.color);}
    return tiros;
}

//a)
void busquedaCero(Ruleta matrizA[], int n, int dato){
    int i=0;
    int contador=0;
    
    while (i < n)
    {
        if (matrizA[i].numero == dato)
        {
           contador++;
           cout << matrizA[i].numero << endl;
           cout << "Num anterior: ";
           cout << matrizA[i-1].numero << endl; 
        }
        i++;
    }

    cout << "Cantidad total de veces que salio el 0:" << contador << endl;

}

//b)

void imprimirMatriz (Ruleta tiros){
    if (tiros.color == 'N' || tiros.color == 'n')
    {
        cout << "Color: " << "NEGRO";
    }
    if (tiros.color == 'R' || tiros.color == 'r')
    {
        cout << "Color: " << "ROJO";
    } else cout << "Color: " << "VERDE";
    
    cout << "\t";
    cout << "Numero: " << tiros.numero;
    cout << endl;
}


int main () {

 int serieM=0;
 cout << "Ingrese la cantidad de tiros que se realizo" << endl;
 cin >> serieM;
 
 Ruleta tiros[serieM];

 for (int i = 0; i < serieM; i++)
 {
    cout << "Tiro " << i+1 << endl;
    tiros[i] = llenarMatriz();
    cout << "-----------------------" << endl;
 }

//----------------- a) -----------------
 int cero=0;
 busquedaCero(tiros, serieM, cero);
 
 

 cout << endl << endl;

 for (int i = 0; i < serieM; i++)
 {
    cout << "Tiro " << i+1 << ": " << endl;
    imprimirMatriz(tiros[i]);
    cout << "-----------------------" << endl;
 }


 system("pause");
 return 0;
}

/*

Dada una serie de M pares {color, número} 
que corresponden a los tiros de una ruleta. Se pide informar:

a) cuántas veces salió el número cero
y el número anterior a cada cero.

b) cuántas veces seguidas llegó a repetirse el color negro

c) cuántas veces seguidas llegó a repetirse el mismo número
y cuál fue.

d) el mayor número de veces seguidas que salieron
alternados el rojo y el negro.

e) el mayor número de veces seguidas que se negó la segunda
docenas.

*/