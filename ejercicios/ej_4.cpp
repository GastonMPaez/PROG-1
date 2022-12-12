#include <iostream>
using namespace std;

int rtaA(int nro){
 float resultado=0;

    resultado = nro/5;

 return resultado;
}

int rtaB(int nro){
 float resultado=0;

    resultado = nro%5;

 return resultado;
}

int rtaC(int nro){
 float resultado=0;

    resultado = nro/7;

 return resultado;
}

int main () {
 int valor=0;

 cout << "Ingrese un valor entero " << endl;
 cin >> valor;

 cout << "A) " << rtaA(valor) << endl;
 cout << "B) " << rtaB(valor) << endl;
 cout << "C) " << rtaC(rtaA(valor)) << endl;


 system("pause");
 return 0;
}


/*
A partir de un valor entero ingresado por teclado, se pide informar:
a) La quinta parte de dicho valor
b) El resto de la división por 5
c) La séptima parte del resultado del punto a)
*/
