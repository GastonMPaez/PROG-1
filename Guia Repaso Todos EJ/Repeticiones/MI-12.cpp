#include <iostream>
using namespace std;

int sumatoria(int n){

    int suma=0;
    
    if (n==1)
    {
        suma=1;
    } else{
        suma = n+sumatoria(n-1);
    }
    return suma;
}

void funcSumat(int n){
    int sumatoria=0;

    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
        sumatoria = sumatoria + i;
    }

 cout << "La sumatoria es :" << sumatoria << endl;
}

int main () {
 int nro=100;

 funcSumat(nro);

 cout << "La sumatoria de los primeros 100 numeros es: " << sumatoria(nro) << endl;


 system("pause");
 return 0;
}

/*
Informar los primeros 100 números naturales y su sumatoria
*/