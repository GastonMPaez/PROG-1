#include <iostream>
using namespace std;

void leer(string msj, int &valor){
    cout<<msj<<endl;
    cin>>valor;
}


bool esPos(int valor){
    if (valor >= 0)
    {
        return true;
    }else{
        return false;
    }
}

void informarVal(int valor){
 
 int contador=0;

 leer("ingrese un valor", valor);

 while (esPos(valor)==true)
 {
    cout << "valor pos: " << valor << endl;
    contador++;

    leer("ingrese un valor", valor);
 }

 cout << "Cantidad de valroes positivos: " << contador << endl;
    
}

int main () {
 
 int valor=0;

 informarVal(valor);

 system("pause");
 return 0;
}

/*
Ingresar e informar valores, mientras que el valor ingresado no sea negativo. Informar la cantidad de valores
ingresados.
*/