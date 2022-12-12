#include <iostream>
using namespace std;

void leer(string msj, int &valor){
    cout << msj << endl;
    cin >> valor;
}

void esTriangulo(int l1, int l2, int l3){

 if (l1 == l2 == l3)
 {
    cout << "Triangulo equilatero" << endl;
 }

 if (l1 != l2 != l3)
 {
    cout << "Triangulo escaleno" << endl;
 }
 
 if (l1 == l2 || l1 == l3 || l2 == l3)
 {
    cout << "Triangulo isosceles" << endl;
 }
 
}


int main () {
 int l1, l2, l3=0; 

 leer("LADO 1: ", l1);
 leer("LADO 2: ", l2);
 leer("LADO 3: ", l3);

 esTriangulo(l1, l2, l3);

 system("pasue");
 return 0;
}
/*
Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir una leyenda según sea:
equilátero, isósceles o escalenos.
*/