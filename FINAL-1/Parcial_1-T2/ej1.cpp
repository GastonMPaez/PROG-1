#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}

void leer(string mensaje, float &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}

int duracionViaje(int horaInicio, int horaFin){
    return horaFin - horaInicio;
}

int main () {
    
int duracion, fecha, horaInicio,horaMayorMonto, horaFin, mayorDuracion = -1;
    float monto, menorMonto = 999999, mayorMonto = -1,mayorMontoDiario = -1, montoDiario = 0, montoMayorDuracion = 0;

    int fechaMayorMonto;
    int fechaActual=0;

    leer("Fecha (AAAAMMDD)", fecha);
    while (fecha != 0)
    {
        fechaActual = fecha;
        montoDiario=0;

        while (fecha != 0 && fechaActual == fecha)
        {
            leer("Hora Inicio (HHMM)", horaInicio);
            leer("Hora Fin (HHMM)", horaFin);
            leer("Monto", monto);

            montoDiario += monto;

            int duracion = duracionViaje(horaInicio, horaFin);
            if (duracion > mayorDuracion)
            {
                mayorDuracion = duracion;
                horaMayorMonto = horaInicio;
            }
            
            if (monto > mayorMonto)
            {
                mayorMonto = monto;
                horaMayorMonto = horaInicio;
            }
            
            leer("Fecha (AAAAMMDD): ", fecha);
        }

        if (montoDiario > mayorMontoDiario)
        {
            mayorMontoDiario = montoDiario;
            fechaMayorMonto = fechaActual;
        }
    }
    
    cout << fechaMayorMonto;
    cout << horaMayorMonto;
    cout << mayorDuracion << montoMayorDuracion;
 
 system("pause");
 return 0;
}