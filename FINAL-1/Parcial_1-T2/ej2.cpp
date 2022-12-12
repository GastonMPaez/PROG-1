#include <iostream>
using namespace std;

int sumatoria(int n){
    int suma=0;
    for (int i = 1; i <= n; i++)
    {
        suma = suma+i;
    }
    return suma;
}

int sumatoriaRec(int valor){
    if (valor == 1)
    {
        return 1;
    }
    return sumatoriaRec(valor - 1) + valor;
}

int main () {
 int cantidad=0;

 cout << "Ingrese una cantidad de numeros enteros: " << endl;
 cin >> cantidad;
 int nro;
 int promedio=0;

 for (int i = 0; i < cantidad; i++)
 {
    cout << "Ingrese un nro: " << endl;
    cin >> nro;
 }

 cout << promedio / cantidad << endl;
 

 system("pause");
 return 0;
}