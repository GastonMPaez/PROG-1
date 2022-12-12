#include <iostream>
using namespace std;

bool esPar(int valor){
    
    if (valor % 2 == 0)
    {
        return true;
    }
    return false;
}

int main () {
 
 char direccion;
 int metros=0;
 int bateria=1000;

 cout << "Ingrese la direccion del robot ('F' - Adelante, 'B' - Atras, 'L' - Izquierda, 'R' - Derecha) 'E' finalizar" << endl;
 cin >> direccion;

 int metrosRecorridos=0;
 int metrosAvanzados=0;
 int trayectoMasLargo=0;

 char direccionLarga;

 while (direccion != 'E' || bateria < 0)
 {
    cout << "cantidad de metros" << endl;
    cin >> metros;

    if (metros > trayectoMasLargo)
    {
        trayectoMasLargo = metros;
        direccionLarga = direccion;
    }
    
    if (esPar(metros))
    {
        bateria = bateria - (metros / 4);
    }
    else
    {
        bateria = bateria - (metros / 3);
    }
    
    metrosRecorridos += metros;

    if (direccion == 'F' || direccion == 'R')
    {
        metrosAvanzados += metros;
    }
     


    cout << "Bateria restante: " << bateria << endl;
    cout << "------------------------------------------" << endl;
    
    cout << "Ingrese la direccion del robot ('F' - Adelante, 'B' - Atras, 'L' - Izquierda, 'R' - Derecha) 'E' finalizar" << endl;
    cin >> direccion;
 }
 
    cout << "a. Cantidad total de metros recorridos: " << metrosRecorridos << "m" << endl;
    cout << "b. Cantidad total de metros avanzados: " << metrosAvanzados << "m" << endl;
    cout << "c. La direccion en la que se recorrio el trayecto mas largo: " << direccionLarga << endl;



 system("pause");
 return 0;
}

/*
Una agencia de robótica lo contrata para desarrollar una aplicación que 
permita controlar los movimientos de un robot.
Para esto la aplicación debe permitir ingresar la dirección

('F' - Adelante, 'B' - Atrás, 'L' - Izquierda, 'R' - Derecha) 
y la cantidad de metros a avanzar en dicha dirección.

Si la cantidad de metros es un número par,
la batería se descuenta en (cantidad de metros / 4) unidades

● Si la cantidad de metros es un número impar, 
la batería se descuenta en (cantidad de metros / 3) unidades

El ingreso de datos finaliza cuando el robot agote su batería 
o el usuario ingrese la dirección ‘E’.



a. Cantidad total de metros recorridos.
b. Cantidad total de metros avanzados.
c. La dirección en la que se recorrió el trayecto más largo.


*/