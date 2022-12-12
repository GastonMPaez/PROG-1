#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
    cout<<mensaje<<endl;
    cin>>valor;
}

int funcSucesiva(int n, int m){
 int resultado=0;
 
 for (int i = 0; i < m; i++)
 {
    resultado = resultado + n;
 }
 
 return resultado;
}

int recursivaSum(int n, int m){
    int total=0;

    if (n==0 || m==0)
    {
        total = 0;
    } else{
        total = n+recursivaSum(n, m-1);
    }
    return total;
}

int main () {
 
 int valorN, valorM = 0;
 int tot=0;

 leer("Ingrese valor 1: ", valorN);
 leer("Ingrese valor 2: ", valorM);

 tot = funcSucesiva(valorN, valorM);
 cout << "Total: " << tot << endl;
 
 cout << "Recursiva" << endl;
 cout << recursivaSum(valorN, valorM)<< endl;
 
 system("pause");
 return 0;
}

/*
Dados N y M números naturales,
informar su producto por sumas sucesivas.
*/