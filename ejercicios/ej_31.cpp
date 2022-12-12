#include <iostream>
using namespace std;

void leer(string mensaje, string &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void leer(string mensaje, char &valor){
    cout << mensaje << endl;
    cin >> valor;
}

void leer(string mensaje, int &valor){
    cout << mensaje << endl;
    cin >> valor;
}


int main () {
 
 string domicilio;
 char vivienda;
 int integrantes;

leer("Ingrese la cantidad de integrantes:", integrantes);

 string nombre;
 string apellido;

 int edad;
 
 char sexo;
 char lvlEstudios;
 char indicador;

 int analfabeto=0;
 int totalPersonas=0;
 
 int maxIntegrante=0;
 string maxDomicilio;

 int edadProm=0;
 int masculino=0;
 int femenino=0;


 while (integrantes != 0)
 {
     int familia=0;

  leer("Domicilio: ", domicilio);
  leer("Ingrese tipo de vivienda:", vivienda);
    
    for (int i = 0; i < integrantes; i++)
    {
        leer("Nombre:", nombre);
        leer("Apellido:", apellido);
        leer("Edad:", edad);
        leer("Genero M/F:", sexo);
        leer("Nivel de estudios:", lvlEstudios);
        leer("Indicador de estudios:", indicador);

    // a) los datos de los encuestados que hayan completado los estudios primarios
        if (lvlEstudios != 'N' && indicador == 'C')
        {
            cout << "Nombre: " << nombre << endl;
            cout << "Apellido: " << apellido << endl;
            cout << "Edad: " << edad << endl;
            cout << "Genero: " << sexo << endl;
        }


    // b) el porcentaje de analfabetismo en la ciuda
        if (edad >= 10 && lvlEstudios == 'N')
        {
            analfabeto++;
        }

       edadProm+= edad; 

       if (sexo == 'M')
       {
           masculino++;
       }else {
            femenino++;
       }
       
  
    }
    familia++;

    cout << "Familia " << familia << endl;
    cout << "Edad promedio: " << integrantes / edadProm << endl;

    // c) el domicilio de la familia con mayor cantidad de integrantes que viven en departamento
        if (vivienda == 'D')
        {
            if (integrantes > maxIntegrante)
            {
                maxIntegrante = integrantes;
                maxDomicilio = domicilio;
            }
            
        }


    totalPersonas += integrantes;


    leer("Ingrese la cantidad de integrantes:", integrantes);
 }

 //b) el porcentaje de analfabetismo en la ciuda
 cout << "Porcentaje analfabetismo total: " << totalPersonas / analfabeto << endl;

//d) edad promedio de cada familia y de la ciudad 
 cout << "Porcentaje edad de la ciudad: " << totalPersonas / edadProm << endl; 

// e) cantidad de encuestados en cada tipo de nivel de estudios alcanzados incompletos.


// f) porcentaje de encuestados de sexo femenino y masculino.
 cout << "Porcentaje Masculino encuestado: " << totalPersonas / masculino << endl;
 cout << "Porcentaje Femenino encuestado: " << totalPersonas / femenino << endl;

 system("pause");
 return 0;
}

/*

El gobierno de la Ciudad de Buenos Aires realiza una encuesta en casas de familia. De cada familia conoce:
domicilio, tipo de vivienda (‘C’:casa, ‘D’:departamento), y cantidad de integrantes.

De cada integrante de la familia se conoce:
nombre y apellido,
edad,
sexo (‘F’, ‘M’),
nivel de estudios alcanzados (‘N’: no posee, ‘P’: primario, ‘S’: secundario, ‘T’: terciario, ‘U’: universitario),
y un indicador (‘I’: incompleto, ‘C’: completo) que se refiere al ítem anterior.

Los datos finalizan cuando la cantidad de integrantes sea igual a cero.

Se pide emitir un listado con los resultados:

a) los datos de los encuestados que hayan completado los estudios primarios

b) el porcentaje de analfabetismo en la ciudad (se considera analfabetos a los mayores de 10 años que no posean
estudios)

c) el domicilio de la familia con mayor cantidad de integrantes que viven en departamento

d) edad promedio de cada familia y de la ciudad

e) cantidad de encuestados en cada tipo de nivel de estudios alcanzados incompletos.

f) porcentaje de encuestados de sexo femenino y masculino.

*/