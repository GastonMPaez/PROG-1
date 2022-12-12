#include <iostream>
using namespace std;

int fechaCompleta(int dia, int mes, int anio){
    int mesC, anioC = 0;
    int fechaC=0;

    anioC = anio * 10000;
    mesC = mes * 100;
    return fechaC = anioC + mesC + dia; 
}


int main () {
 int d=3;
 int m=7;
 int a=2022;
 cout << fechaCompleta(d, m, a) << endl;

 system("pause");
 return 0;
}

/*

Dada una terna de números naturales que representan 
al día, al mes y al año de una determinada fecha
informarla como un solo número natural de 8 dígitos 
con la forma (AAAAMMDD).

*/