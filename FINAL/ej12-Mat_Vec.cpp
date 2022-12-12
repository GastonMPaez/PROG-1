#include <iostream>
using namespace std;

int busquedaSec(int vec[], int cant, int n){
    for (int i = 0; i < cant; i++)
    {
        if (vec[i] == n)
        {
            return i;
        }
        
    }
   return -1; 
}

int main () {
 
 int valorN=0;
 int pos=0;
 
 cout << "Valor N"<< endl;
 cin >> valorN;

 int refer[valorN];

 for (int i = 0; i < valorN; i++)
 {
   cout << "Valor " << i+1 << endl;
   cin >> refer[i];
 }

 int nroX=0;

 cout << "Ingrese un valor X" << endl;
 cin >> nroX;

 pos = busquedaSec(refer, valorN, nroX);

 cout << "A) El elemento " << nroX << " coincide con el elemento de la pos: " << pos << endl;
 cout << "B) Se encuentra entre las pos: " << pos-1 << " y " << pos+1 << endl;
 if (nroX < refer[0])
 {
    cout << "El elemento es menor que el primer numero del vector" << endl;
 } else if (nroX > refer[valorN])
 {
    cout << "El elemento es mayor que el ultimo numero del vector" << endl;
 }
 
 

 system("pause");
 return 0;
}