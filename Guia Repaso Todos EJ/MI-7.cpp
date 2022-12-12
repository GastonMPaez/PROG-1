#include <iostream>
using namespace std;

void leer(string msj, int &valor){
    cout << msj << endl;
    cin >> valor;
}

void esTriangulo(int l1, int l2, int l3){

 if ((l1 + l2) > l3 && (l1+l3) > l2 && (l2+l3) > l1)
 {
    cout << "forman triangulo" << endl;
 } else{
    cout << "no forman triangulo" << endl;  
 }

}


int main () {
 int l1, l2, l3=0; 

 leer("LADO 1: ", l1);
 leer("LADO 2: ", l2);
 leer("LADO 3: ", l3);

 esTriangulo(l1, l2, l3);

 system ("pause");
 return 0;
}

/*
Dado tres valores determinar e imprimir una leyenda según sea: 
“Forman triangulo” o “No forman triángulo”.
*/