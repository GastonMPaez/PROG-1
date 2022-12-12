#include <iostream>
using namespace std;

void funcTot(int num){
 float rtA=0;
 float rtB=0;
 float rtC=0;
 
 //a-
 rtA = num / 5;
 
 //b-
 rtB = num % 5;

 //c-
 rtC = rtA / 7;


 cout << "A) " << rtA << endl;
 cout << "B) " << rtB << endl;
 cout << "C) " << rtC << endl;

}


int main () {
 int valor=12;

 funcTot(valor);

 system("pause");
 return 0;
}

/*

A partir de un valor entero ingresado por teclado, 
se pide informar:
a) La quinta parte de dicho valor
b) El resto de la división por 5
c) La séptima parte del resultado del punto a)

*/