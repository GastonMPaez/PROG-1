#include <iostream>
using namespace std;

void multiplos(int m){
 
 int i=0;
 int valor=0;

 while (i < m)
 {
    if (valor % 3 == 0 && valor % 5 != 0)
    {
        cout << valor << ", ";
        i++;
    }
    valor++;
 }

}

int main () {
 int m=0;

 cout << "Ingrese una cantidad" << endl;
 cin >> m;


 multiplos(m);

 system("pause");
 return 0;
}


/*
Dado un valor M determinar y emitir un listado con los M primeros múltiplos de 3 que no lo sean de 5,
dentro del conjunto de los números naturales.
*/