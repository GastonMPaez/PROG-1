#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void leer(string mensaje, string &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void leer(string mensaje, char &valor){
    cout << mensaje << endl;
    cin >> valor;
}

int calcularEdad (int fechaR, int fechaU) {
    int resultado;

    int diaI, mesI, anioI =0;
    int diaU, mesU, anioU =0;

    diaI = fechaR % 100;
    diaU = fechaU % 100;

    mesI = ((fechaR - diaI) % 10000) / 100;
    mesU = ((fechaU - diaU) % 10000) / 100;

    anioI = (fechaR - diaI) - (mesI * 100) / 10000;
    anioU = (fechaU - diaU) - (mesU * 100) / 10000;

    resultado = anioI - anioU;


 return resultado;
}

int main () {
 int cantVacantes;
 int fechaRef;

 int fechaNac;
 char nivelEstudios;
 string residencia;
 
 leer("Ingrese la cantidad de vacantes disponibles", cantVacantes);

 leer("Ingrese la fecha de referencia (AAAAMMDD)", fechaRef);
 leer("Ingrese la fecha de nacimiento del aspirante: (AAAAMMDD)", fechaNac);


 int edad;
 int cantInscriptos;
 int cantRechazoMayor;
 int cantRechazoEstudio;

 while (fechaNac !=0 || cantVacantes > 0)
 {
    leer("Ingrese nivel de Estudios Completo",nivelEstudios);
    leer("Reside en Argentina (si / no)", residencia);

    edad = calcularEdad(fechaRef, fechaNac);

    if (edad < 18 && nivelEstudios == 'p' || nivelEstudios == 's' && residencia == "si")
    {
        cantInscriptos++;
        cantVacantes--;
    }

    if (edad > 18)
    {
        cantRechazoMayor++;
    }
    
    if (nivelEstudios == 't' || nivelEstudios == 'u' || nivelEstudios == 'n')
    {
        cantRechazoEstudio++;
    }
    



    leer("Ingrese la fecha de nacimiento del aspirante: (AAAAMMDD)", fechaNac);
 }
 
 cout << "Cantidad de inscriptos: " << cantInscriptos << endl;
 cout << "Cantidad de vacantes libres: " << cantVacantes << endl;
 cout << "Cantidad de rechazados por edad: " << cantRechazoMayor << endl;
 cout << "Cantidad de rechazados por estudios: " << cantRechazoEstudio << endl;

 system ("pause");
 return 0;
}


/*

Un curso ha decidido largar una pre-inscripción online, para poder anotarse los aspirantes deben contestar
ciertas preguntas:

● Nivel de estudios completos (Primario, Secundario, Terciario, Universitario, Ninguno)
● Fecha de nacimiento
● Reside en Argentina (Si/No)

Solo se aceptarán aspirantes menores de edad,
que posean como máximo un nivel de estudio completo Secundario
y que sean residentes en Argentina.

Hacer el sistema que le permita al personal administrativo informar:
la cantidad de vacantes y cargar los datos de los aspirantes,

la carga finalizará con una fecha de nacimiento igual a 0 o cuando ya no haya más vacantes.


a. Cantidad de inscriptos
b. Cantidad de vacantes libres
c. Cantidad de rechazados por ser mayores de edad
d. Cantidad de rechazados por tener estudios Terciarios o superiores.


*/