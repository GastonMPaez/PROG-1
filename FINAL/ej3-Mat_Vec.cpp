#include <iostream>
using namespace std;

int calcularFactorial(int n){
    int resultado=0;
    if (n < 0)
    {
        return 0;
    } else if (n > 1)
    {
        return n*calcularFactorial(n-1);
        return 1;
    }
}

void imprimir(int vec[], int cant){
    for (int i = 0; i < cant; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main () {
 int valor=0;

 cout << "Ingrese un valor" << endl;
 cin >> valor;

 int vec[valor];
 int fact[valor];

 for (int i = 0; i < valor; i++)
 {
    cout << "Valor " << i+1 << endl;
    cin >> vec[i];
    fact[i] = calcularFactorial(vec[i]);
 }
 cout << endl;

 cout << "--------------------------------" << endl;
 imprimir(vec, valor);
 imprimir(fact, valor); 


 system("pause");
 return 0;
}