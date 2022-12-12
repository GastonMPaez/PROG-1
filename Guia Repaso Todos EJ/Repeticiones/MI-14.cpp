#include <iostream>
using namespace std;

void leer(string msj, int &valor){
    cout<<msj<<endl;
    cin>>valor;
}

int main () {
 
 int valor=0;
 int contador=0;

 float promMayor=0;
 float sumaMen=0;

 for (int i = 0; i < 50; i++)
 {
    leer("Ingrese un valor", valor);

    if (valor >= 100)
    {
        promMayor = promMayor + valor;
        contador++;
    }
    
    if (valor <= -10)
    {
        sumaMen = sumaMen + valor;
    }
 }

 if (promMayor == 0)
 {
    cout << "Promedio Mayor: 0" << endl;
 } else {
    cout << "Promedio Mayor: " << promMayor / contador << endl;
 }
 
 cout << "Suma Menores: " << sumaMen << endl;

 system("pause");
 return 0;
}

/*
Dados 50 números enteros, informar el promedio de los mayores
que 100 y la suma de los menores que –10.
*/