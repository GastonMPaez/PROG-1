#include <iostream>
using namespace std;

int ordenadoAscendente(int vec[], int cant){

    for (int i = 0; i < (cant-1); i++)
    {
        if (vec[i] > vec[i+1])
        {
            return 0;
        } else{
            return 1;
        }
    }
}


int main () {
 int vec[]={1,2,5,4,5};

 if (ordenadoAscendente(vec, 5) == 1)
 {
    cout << "El vector esta ordenado ascendentemente" << endl;
 } else{
    cout << "El vector NO esta ordenado ascendentemente" << endl;
 }
 
 system("pause");
 return 0;
}
/*
Realizar la función ordenadoAscendente que reciba un vector y retorne un valor indicando si el vector
está ordenado en forma ascendente o no. Devolverá 1 si está ordenado, y 0 en caso contrario.
*/