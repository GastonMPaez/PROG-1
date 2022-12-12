#include <iostream>
using namespace std;


int fechaCompleta(int d, int m, int a) {
 int fecha=0;
 
 fecha= (a*10000) + (m*100) + (d);
    
 return fecha;
}

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}


int main () {
 
 int dia=0;
 int mes=0;
 int anio=0;

 int fecha=0;

 leer("Ingrese un dia", dia);
 leer("Ingrese un mes", mes);
 leer("Ingrese un anio", anio);
 
 fecha = fechaCompleta(dia, mes, anio);

 cout << "Fecha completa: " << fecha << endl;

 system("pause");
 return 0;
}


/*
Dada una terna de números naturales que representan al día, al mes y al año de una determinada
fecha informarla como un solo número natural de 8 dígitos con la forma (AAAAMMDD).
*/