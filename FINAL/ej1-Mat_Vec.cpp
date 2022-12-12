#include <iostream>
using namespace std;

int main () {
 int valor=0;
 int k=0;

 cout << "Ingrese un valor" << endl;
 cin >> valor;

 int vec[valor];

 for (int i = 0; i < valor; i++)
 {
    vec[i]=i*2;    
 }
 
 for (int i = 0; i < valor; i++)
 {
    cout << vec[i] << " ";
 }
 cout << endl;
 
 

 system("pause");
 return 0;
}