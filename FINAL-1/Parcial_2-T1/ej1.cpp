#include <iostream>
using namespace std;

struct FICHADA
{
    int legajo;
    int fecha;
    int horaEntrada;
    int horaSalida;
};//orden legajo

struct REGISTRO
{
    int fecha;
    int legajo;
    int hora;
    char evento;
};// ordenada por hora 2x c/empleado

void ordenarXLegajo(REGISTRO fichada[], int cant){
    int i=0;
    REGISTRO aux;
    bool ordenado=false;

    while (i < cant && !ordenado)
    {
        ordenado=true;
        for (int i = 0; i < cant; i++)
        {
            if (fichada[i].legajo > fichada[i+1].legajo)
            {
                aux = fichada[i];
                fichada[i] = fichada[i+1];
                fichada[i+1] = aux;
                ordenado=false;
            }  
        }
        i++;
    }
    return;
}

FICHADA obtenerFichada(REGISTRO fichadaEmpleado, REGISTRO fichadaEmpleado2){
    FICHADA fichada;
    fichada.fecha = fichadaEmpleado.fecha;
    fichada.legajo = fichadaEmpleado.legajo;
    if (fichadaEmpleado.evento == 'E' || fichadaEmpleado.evento == 'e')
    {
        fichada.horaEntrada = fichadaEmpleado.hora;
        fichada.horaSalida = fichadaEmpleado2.hora;
    } else {
        fichada.horaEntrada = fichadaEmpleado2.hora;
        fichada.horaSalida = fichadaEmpleado.hora;
    }
    return fichada;    
}

void actualizarFichada(FICHADA mes[], int cantMes, REGISTRO dia[], int cantDia, FICHADA act[], int &cantAct){
    int actualizadas=0;

    ordenarXLegajo(dia, cantDia);

    int i=0, j=0;

    while (i < cantMes && j < (cantDia-1))
    {
        if (mes[i].legajo < dia[j].legajo)
        {
            act[cantAct] = mes[i];
            i++;
        } else {
            act[cantAct] = obtenerFichada(dia[j], dia[j+1]);
            j= j+2;
        }
        cantAct++;
    }
    
    while (i < cantMes)
    {
        act[cantAct] = mes[i];
        cantAct++;
        i++;
    }
    
    while (j < (cantDia-1))
    {
        act[cantAct] = obtenerFichada(dia[j], dia[j+1]);
        cantAct++;
        j = j+2;
    }
    return;
}
void imprimirFecha(int fecha){
    cout << fecha % 100 << "/" << (fecha % 10000) / 100 << "/" << fecha / 1000;
    return;
}

float calcularHoras(int salida, int entrada){
    int minutosSalida = (salida / 100) * 60 + salida % 100;
    int minutosEntrada = (entrada / 100) * 60 + entrada % 100;
    return (salida - entrada) / 60.0;
}

void imprimirListado(FICHADA fichada[], int cantidad, float valorHora){

    int i =0;
    int cantEmpleados=0;
    float remuneracionTotal=0;

    while (i < cantidad)
    {
        int legajo = fichada[i].legajo;
        cout << "Legajo: " << legajo << endl;
        cout << "FECHA\t\tHORAS TRABAJADAS\t\tJORNAL" << endl;
        
        float remuneracion=0;
        while (i < cantidad && legajo == fichada[i].legajo)
        {
            float horas = calcularHoras(fichada[i].horaSalida, fichada[i].horaEntrada);
            imprimirFecha(fichada[i].fecha);
            cout << "\t\t";
            cout << horas << "\t\t\t";
            cout << horas * valorHora << endl;
            remuneracion = remuneracion + horas * valorHora;
            i++;
        }
        cantEmpleados++;
        remuneracionTotal = remuneracionTotal + remuneracion;
        cout << "REMUNERACION: " << remuneracion << endl << endl;
    }
    cout << "Cant empleados: " << cantEmpleados << endl;
    cout << "total remuneracion: $" << remuneracionTotal << endl;
    cout << "remuneracion promedio: $" << remuneracionTotal / cantEmpleados << endl;
    return;    
}

int main () {
 FICHADA fichadaMes[] = {
    {1,20220706,800,1800}, 
    {1,20220705,815,1800},
    {1,20220704,800,1800}, 
    {2,20220705,815,1800},
    {3,20220706,800,1800}, 
    {3,20220705,815,1800},
    {6,20220703,900,1800},
 };

 REGISTRO fichadaDiaria[] = {
    {20220707,1,730,'E'},
    {20220707,2,740,'E'},
    {20220707,3,810,'E'},
    {20220707,4,930,'E'},
    {20220707,3,1601,'S'},
    {20220707,2,1740,'S'},
    {20220707,1,1810,'S'},
    {20220707,5,1900,'E'},
    {20220707,4,2000,'S'},
    {20220707,5,2330,'S'},

 };

 FICHADA fichaAct[100];

 int cantFichadasAct=0;

 actualizarFichada(fichadaMes, 7, fichadaDiaria, 10, fichaAct, cantFichadasAct);

 float valorHora = 300;
 cout << "FICHADA MES: " << endl;

 imprimirListado(fichadaMes, 7, valorHora); 
 
 cout << "ACTUALIZADO: " << endl;
 
 imprimirListado(fichaAct, cantFichadasAct, valorHora);

 system("pause");
 return 0;
}