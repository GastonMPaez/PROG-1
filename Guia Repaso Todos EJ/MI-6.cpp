#include <iostream>
using namespace std;

void descompFecha(int fechaC1, int fechaC2) {
 int anio1, mes1, dia1=0;
 int anio2, mes2, dia2=0;
    
 dia1 = fechaC1%100;
 mes1 = ((fechaC1 - dia1) % 10000) / 100;
 anio1 = (fechaC1 - dia1 - (mes1 * 100)) / 10000;
 

 dia2 = fechaC2%100;
 mes2 = ((fechaC2 - dia2) % 10000) / 100;
 anio2 = (fechaC2 - dia2 - (mes2 * 100)) / 10000;


 if (anio1 == anio2)
 {
    if (mes1 == mes2)
    {
        if (dia1 == dia2)
        {
            cout << "Fechas Iguales" << endl;
        } else if (dia1 > dia2)
        {
            cout << "fecha reciente: " << fechaC1 << endl;
        } else{
            cout << "fecha reciente: " << fechaC2 << endl;
        }
    } else if (mes1 > mes2)
    {
        cout << "fecha reciente: " << fechaC1 << endl;
    } else{
        cout << "fecha reciente: " << fechaC2 << endl;
    }
 } else if (anio1 > anio2)
 {
    cout << "fecha reciente: " << fechaC1 << endl;
 } else{
    cout << "fecha reciente: " << fechaC2 << endl;
 }
 
 
}



int main () {
 int fecha1 = 20220306;
 int fecha2 = 20220309;

 descompFecha(fecha1, fecha2);

 system("pause");
 return 0;
}

/*

Dadas dos fechas informar cual es la más reciente.
Determine cuáles serían los datos de entrada y las leyendas
a informar de acuerdo al proceso solicitado.

*/