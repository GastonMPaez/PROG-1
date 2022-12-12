#include <iostream>
using namespace std;

int funcSuma(int a, int b){
    int resultado=0;
    resultado = a+b;
 return resultado;
}

int funcResta(int a, int b){
    int resultado=0;
    resultado = a-b;
 return resultado;
}

int funcProd(int a, int b){
    int resultado=0;
    resultado = a*b;
 return resultado;
}


int recurProducto(int valor1, int valor2){
    if (valor1==0 || valor2 == 0)
    {
        return 0;
    } else {
        return valor1 + recurProducto(valor1, (valor2-1));
    }
}

int main () {
 int valorA=0;
 int valorB=0;
 int resultado=0;

 cout << "valor A" << endl;
 cin >> valorA;

 cout << "valor B" << endl;
 cin >> valorB;
 
 //funciones
 
 resultado = funcSuma(valorA, valorB);
 cout << "Resultado Suma: " << resultado << endl;

 resultado = funcResta(valorA, valorB);
 cout << "Resultado Resta: " << resultado << endl;
 
 resultado = funcProd(valorA, valorB);
 cout << "Resultado Producto: " << resultado << endl;

 // recursiva
 resultado = recurProducto(valorA, valorB);
    cout << "Resultado Producto recurs: " << resultado << endl;

 system("pause");
 return 0;
}

/*

Dados dos valores enteros A y B, 
informar la suma, la resta y el producto.

*/