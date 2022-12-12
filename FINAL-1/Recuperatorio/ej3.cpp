#include <iostream>
using namespace std;

int ordenadoAscendente(int vec[], int cantidad){
    for (int i = 0; i < (cantidad-1); i++)
    {
        if (vec[i] > vec[i+1])
        {
            return 0;
        }
        
    }
    return 1;
}

int main () {

 int vec[] = {5,3,1,8,4};

 if (ordenadoAscendente(vec, 5) == 1)
 {
    cout << "Vector ordenado" << endl;
 } 
 else
 {
    cout << "Vector NO ordenado" << endl;
 }

/*--------------------------------------------------------------------------------*/
 
 int vec2[] = {1,2,3,4,5,6};

 if (ordenadoAscendente(vec2, 6) == 1)
 {
    cout << "Vector ordenado" << endl;
 } 
 else
 {
    cout << "Vector NO ordenado" << endl;
 }

 system("pause");
 return 0;
}
/*
Realizar la función ordenadoAscendente que reciba un vector y retorne un valor
indicando si el vector está ordenado en forma ascendente o no. 
Devolverá 1 si está ordenado, y 0 en caso contrario.
*/