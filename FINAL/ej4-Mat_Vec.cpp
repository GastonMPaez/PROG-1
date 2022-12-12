#include <iostream>
using namespace std;

int main () {
 int valor=0;
 int suma=0;

 cout << "Ingrese un valor" << endl;
 cin >> valor;

 int vec[valor];

 for (int i = 0; i < valor; i++)
 {
    cout << "Valor " << i+1 << endl;
    cin >> vec[i];
    suma += vec[i];
 }
 
 if (suma > 0)
 {
    for (int i = 1; i <= valor; i+2)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
 } else{
    for (int i = 0; i < valor; i++)
    {
        if (i % 2 == 0)
        {
            cout << vec[i] << " ";
        }
    }
    cout << endl;
 }
 

 system("pause");
 return 0;
}

