#include <iostream>
using namespace std;

int main () {
 int cantVuelos=0;
 int total=0;
 bool vueloCompleto = false;

 cout << "Ingrese cant vuelos" << endl;
 cin >> cantVuelos;

 for (int i = 0; i < cantVuelos; i++)
 {
     cout << "Nro vuelo: ";
     cin >> nroVuelo;
     cout << "Destino: ";
     cin >> destino;
     cout << "Cant asientos: ";
     cin >> cantAsientos;

     imprimirEncabezadoVuelo();

    int totalImportesVuelo=0;
    int pasajeros=0;

     cout << "pasaporte: " << endl;
     cin >> pasaporte;

    while (pasaporte != 0)
    {
        cout << "Importe: ";
        cin >> importe;

        totalImportesVuelo += importe;
        pasajeros++;

        cout << "pasaporte" << endl;
        cin >> pasaporte;
    }
    
    cout << "Total recaudado del vuelo: " << totalImportesVuelo << endl;
    cout << "Porc. de asientos ocupados: " << pasajeros / cantAsientos * 100 << endl;
    cout << "Porc. de asientos ocupados: " << (1 - pasajeros / cantAsientos) * 100 << endl; 
    
    total += totalImportesVuelo;
 
    if (pasajeros == cantAsientos && vueloCompleto == true)
    {
        completoSeguido++;
    }

    vueloCompleto = pasajeros == cantAsientos;
        
 }

 cout << "Total del mes " << total << endl;

 

 system("pause");
 return 0;
}