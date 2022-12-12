#include <iostream>
using namespace std;

void calcularEdad(int fI, int fU);

int main () {
 
 int fechaActual;
 int fechaUsuario;

 cout << "Ingrese la fecha actual (AAAAMMDD)" << endl;
 cin >> fechaActual;

 cout << "Ingrese la fecha del usuario (AAAAMMDD)" << endl;
 cin >> fechaUsuario;


 calcularEdad (fechaActual, fechaUsuario);

 system ("pause");
 return 0;
}

void calcularEdad(int fI, int fU){

    int diaI, mesI, anioI = 0;
    int diaU, mesU, anioU = 0;

    diaI = fI % 100;
    diaU = fU % 100;

    mesI = ((fI - diaI) % 10000) / 100; 
    mesU = ((fU - diaU) % 10000) / 100;

    anioI = ((fI - diaI) - (mesI * 100)) / 10000;
    anioU = ((fU - diaU) - (mesU * 100)) / 10000;

    if (fU < fI)
    {
        cout << "Edad: " << anioI - anioU << endl;
    } else if (mesU > mesI)
    {
        cout << "Edad: " << anioI - anioU << endl;
    } else if (mesU = mesI)
    {
        if (diaU > diaI)
        {
            cout << "Edad: " << anioI - anioU << endl;
        }
        
    }
    
}