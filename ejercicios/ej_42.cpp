#include <iostream>
using namespace std;

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}

void leer(string mensaje, char &valor){
    cout << mensaje << endl;
    cin >> valor;
    return;
}

int fechaCompleta(int dia, int mes, int anio) {
 return (anio*10000) + (mes * 100) + dia;
}


bool nacioEnPrimavera1982 (char sexo, int fechaNac) {
    if (sexo =='F' && fechaNac >= 19820921 && fechaNac <= 19821220)
    {
        return true;
    }

    return false;
}

int main () {
 
 int dia, mes, anio=0;
 char sexo, sexoMayorEdad;

 int nacimientosOctubre=0;
 int nacimientos1990=0;
 int nacimientosMujer=0;

 int menorFechaNacimiento=0;

 leer("Ingrese el dia de nacimiento", dia);

 while (dia != 0)
 {
    leer("Ingrese el mes de ncimiento", mes);
    leer("Ingrese el anio de nacimiento", anio);
    leer("Ingrese el Sexo ('M' o 'F')", sexo);


// 1) 
    if (mes == 10)
    {
        nacimientosOctubre++;
    }

// 2)

    int fechaNac = fechaCompleta(dia, mes, anio);

    if (fechaNac < 19900709)
    {
        nacimientos1990++;
    }

// 3)
    
    if (nacioEnPrimavera1982(sexo, fechaNac))
    {
        nacimientosMujer++;
    }
    
// 4)

    if (fechaNac < menorFechaNacimiento)
    {
        menorFechaNacimiento = fechaNac;
        sexoMayorEdad = sexo;
    }
    


    leer("Ingrese el dia de nacimiento", dia);
 }
 
 cout << "Nacimientos en octubre " << nacimientosOctubre << endl;
 cout << "Nacimientos antes de 1990 " << nacimientos1990 << endl;
 cout << "Nacimientos de mujeres antes de 1982 " << nacimientosMujer << endl;
 cout << "Persona mas vieja " << sexoMayorEdad << endl;

 system("pause");
 return 0;
}

/*
De un censo realizado en una población se conocen los siguientes datos:
- Día de nacimiento (2 dig.)
- Mes (2 dig.)
- Año (4 dig.)
- Sexo ('M'=masc. 'F'=fem.)
Con estos datos de cada habitante se forma un lote finalizado con un día cero. Desarrollar el programa que determine e
imprima:
1) Cuántos nacimientos hubo en el mes de octubre de todos los años.
2) Cuántos nacimientos hubo antes del 9 de julio de 1990.
3) Cuántos nacimientos de mujeres hubo en la primavera del 1982.
4) Sexo de la persona más vieja (solo existe una).
*/