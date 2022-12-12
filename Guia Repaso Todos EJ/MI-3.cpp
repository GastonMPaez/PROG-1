#include <iostream>
using namespace std;

void descompFecha(int fechaC) {
    int dia=0;
    int mes=0;
    int anio=0;
    
    dia = fechaC%100;
    mes = ((fechaC - dia) % 10000) / 100;
    anio = (fechaC - dia - (mes * 100)) / 10000;
    

    cout << anio << " / " << mes << " / " << dia << endl;

}

int main () {

 int fechaCompleta = 20220703;

 descompFecha(fechaCompleta);

 system("pause");
 return 0;
}

/*

Dada un número entero de la forma (AAAAMMDD),
que representa una fecha valida mostrar el dia, mes y
año que representa.

*/