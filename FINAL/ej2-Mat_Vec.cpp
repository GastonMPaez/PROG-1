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
    cout << "ingrese un nro" << endl;
    cin >> vec[i];

    if (vec[i] < 10 && k==0)
    {
        k=1;
    }
 }
 cout << endl;
 cout << "Impresion" << endl;

 int i=0;

 if (k == 1)
 {
    while (i < valor)
    {
        if (vec[i] < 0)
        {
            cout << vec[i] << " ";
        }
        i++;
    }
 } else{
    while (i < valor)
    {
        if (vec[i] > 0)
        {
            cout << vec[i] << " ";
        }
        i++;
    }
 }
 cout << endl;

 system("pause");
 return 0;
}