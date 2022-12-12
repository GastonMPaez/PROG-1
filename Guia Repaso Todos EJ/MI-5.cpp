#include <iostream>
using namespace std;

void nroMayor(int nro1, int nro2){

    if (nro1 > nro2)
    {
        cout << "El numero Mayor es: " << nro1 << endl;
    } else if (nro1 < nro2)
    {
        cout << "El numero Mayor es: " << nro2 << endl;
    } else{
        cout << "Ambos numeros son iguales" << endl;
    }   
}


int main () {
 
 int val1=0;
 int val2=0;

 cout << "Valor 1: " << endl;
 cin >> val1;

 cout << "Valor 2: " << endl;
 cin >> val2;
 
 nroMayor(val1, val2);
 
 system("pause");
 return 0;
}

/*
Dados dos valores enteros y distintos,emitir una leyenda 
apropiada que informe cuál es el mayor entre ellos.
*/