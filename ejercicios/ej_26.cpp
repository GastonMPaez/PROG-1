#include <iostream>
using namespace std;

int main () {
 
 int contenedores=100;
 int puerto=0;
 int pesoC=0;
 
 string iDContenedor;

 int pesoTot=0;
 int pesoMax=0;
 string iDMax;

 int cantP1;
 int cantP2;
 int cantP3;

 for (int i = 1; i <= contenedores; i++)
 {
     cout << "ID del contenedor: " << endl;
     cin >> iDContenedor;

     cout << "Peso del contenedor: " << endl;
     cin >> pesoC;

     cout << "Puerto de destino (1/2/3): " << endl;
     cin >> puerto;

     if (pesoC > pesoMax)
     {
        pesoMax = pesoC;
        iDMax = iDContenedor;
     }
     
     if (puerto = 1)
     {
        cantP1++;
     } else if (puerto = 2)
     {
        cantP2++;
     }else if (puerto = 3)
     {
        cantP3++;
     }

    pesoTot += pesoC;

 }
 
 cout << "Peso total " << pesoTot << endl;
 cout << "Contenedor mas pesado: " << iDMax << endl;
 cout << "Cantidad total de contenedores a cada puerto" << endl;
 cout << "P1: " << cantP1 << endl;
 cout << "P2: " << cantP2 << endl;
 cout << "P3: " << cantP3 << endl;

 system("pause");
 return 0;
}