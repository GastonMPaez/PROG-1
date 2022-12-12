#include <iostream>
using namespace std;

int main () {
 int cantidad;

 cout << "Ingrese la cantidad de elementos" << endl;
 cin >> cantidad;

 int valores[cantidad];

 for (int i = 0; i < cantidad; i++)
 {
    valores[i] = i*2;
 }
 
 for (int i = 0; i < cantidad; i++)
 {
    cout << valores[i] << endl;
 }
 
 system ("pause");
 return 0;
}