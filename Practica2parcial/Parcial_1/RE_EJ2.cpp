#include <iostream>
using namespace std;

struct Estacion
{
    int id;             // dato fijo
    string nombre;     // dato fijo
    int cantMax; //10 // dato fijo
    int disponibles; //10 -> 9   // Se puede modificar -----
};

struct Usuario
{
    int dni;
    string nombre;
    string apellido;
};

struct Prestamo
{
    int dni;
    int idEstacionRetiro;
    int idEstacionDevolucion;
    int tiempoUso;
};

int busquedaBinaria(Usuario usuarios[], int cantUsuarios, int dni) {

    int inicio = 0;
    int fin = cantUsuarios -1;

    while (inicio <= fin)
    {
        int mitad = inicio + (fin - inicio) / 2;
        
        if (usuarios[mitad].dni == dni)
        {
            return mitad;
        }
        
        if (usuarios[mitad].dni > dni)
        {
            fin = mitad - 1; //Cambio el limite superior
        } else {
            inicio = mitad + 1; // Cambio el limite inferior
            }
    }

return -1;
}



void procesarPrestamos(Estacion estaciones[], int cantEstaciones, Usuario usuarios[], int cantUsuarios, Prestamo prestamos[], int cantPrestamos){
    //corte control
    int i=0;
    int dni; // key

    int totalExeso=0;
    int posUsuario=0;
    
    //
    int retiros[cantEstaciones]={0};

    while (i < cantPrestamos) // 1 de 3 prestamos
    {
        dni = prestamos[i].dni; // 111
        totalExeso = 0;

        while (i < cantPrestamos && prestamos[i].dni == dni)
        {
            // B- actualizo estaciones

            // PUP - siempre que puedo uso PUP (para los valores de pup se le resta 1)

            //actualizo cuando se retira un bicicleta
            int posEstacionRetiro = prestamos[i].idEstacionRetiro -1;
            estaciones[posEstacionRetiro].disponibles--;

            //actualizo cuando se devuelve una bicicleta
            int posEstacionDevolucion = prestamos[i].idEstacionDevolucion -1;
            estaciones[posEstacionDevolucion].disponibles++;

            // C- buco usuarios con exeso de tiempo

            //se consiera exeso, a todo el tiempo mayor a los 60 min
            // ej _ Usuario 1 = tiempo uso = 66 min    exceso = 6 minutos

            if (prestamos[i].tiempoUso > 60)
            {
                totalExeso = totalExeso + (prestamos[i].tiempoUso - 60);
            }

            //imprimo punto C
            if (totalExeso > 0)
            {
                posUsuario = busquedaBinaria(usuarios, cantUsuarios, dni);
                cout << dni << "      " << usuarios[posUsuario].nombre << ", " <<
                usuarios[posUsuario].apellido << "  " << totalExeso; 
            }
            cout << endl;

            // punt D-

            retiros[posEstacionRetiro]++;
            retiros[posEstacionDevolucion]--;
    
        }
    
    }
    
    
    //imprimir punto D

    cout << "Estaciones con mas retiros que devoluciones en el dia:" << endl;
    cout << "ID"
         << "    "
         << "NOMBRE" << endl;
    for (int j = 0; j < cantEstaciones; j++)
    {
        if (retiros[j] > 0)
        {
            cout << estaciones[j].id << "    " << estaciones[j].nombre << endl;
        }
    }

}


int main () {
 Estacion estaciones[80];
 Usuario usuarios[10];

 Prestamo prestamos[5];



 system("pause");
 return 0;
}
/*

maximo 1hs - de uso

Usuario - cargado
Estacion - cargado

*/