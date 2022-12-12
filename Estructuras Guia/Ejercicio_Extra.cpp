#include <iostream>
using namespace std;

struct ST_CURSO{
    string nombre;
    int cantidadDeHoras;
};

struct ST_ALUMNO {
    int dni;
    string nombre;
    int edad;
    string email;
    string telefono;
    int curso; // 1,2,...M
};

void leer(string msg, int &valor){
    cout << msg << endl;
    cin >> valor;
}

void leer(string msg, string &valor){
    cout << msg << endl;
    cin >> valor;
}

int ordenarXDNI(ST_ALUMNO arr[], int n){
    int i, j, aux;
    i = 0;
    bool ordenado = false;
    while (i < n && !ordenado)
    {
        ordenado = true;

        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j].dni > arr[j+1].dni)
            {
                aux = arr[j].dni;
                arr[j].dni = arr[j+1].dni;
                arr[j+1].dni = aux;
                ordenado = false;
            }
        }
        i++;
    }
}

int buscarDNI(ST_ALUMNO alumnos[], int cantAlumnos, int dato){
 int inferior = 0;
    int superior = cantAlumnos;
    int mitad = 0;
    char band= 'F';
    
    while ((inferior+1) !=superior)
    {
       mitad = (inferior + superior)/2;
       
       if (alumnos[mitad].dni == dato)
       {
           band= 'V';
           break;
       }

       if (alumnos[mitad].dni > dato)
       {
           superior = mitad;
           mitad = (inferior+superior)/2;
       }

       if (alumnos[mitad].dni < dato)
       {
           inferior = mitad;
           mitad = (inferior+superior)/2;
       }
    }
    
    if (band == 'V')
    {
        return mitad;
    }
    else{
        cout << "El alumno no esta registrado.";
    }

return -1;
}

void imprimirAlum(ST_ALUMNO alumnos[], int dato, ST_CURSO cursos[]){
    cout << "DNI: " << alumnos[dato].dni << endl;
    cout << "Nombre: " << alumnos[dato].nombre << endl;
    cout << "Edad: " << alumnos[dato].edad << endl;
    cout << "EMail: " << alumnos[dato].email << endl;
    cout << "Telefono: " << alumnos[dato].telefono << endl;
    cout << endl;
    cout << "Curso: " << endl;
    cout << "Nombre: " << cursos[alumnos[dato].curso-1].nombre;
    cout << "\t"; 
    cout << "Cant Hs: " << cursos[alumnos[dato].curso-1].cantidadDeHoras << endl;

}

void cargarCursosAlumnos(ST_CURSO cursos[], int cantCurso, ST_ALUMNO alumnos[], int cantAlum){
    
    for (int i = 0; i < cantCurso; i++)
    {
        cout << "Curso " << i+1 << ": " << endl;
        leer("Nombre: ", cursos[i].nombre);
        leer("Cantidad de horas: ", cursos[i].cantidadDeHoras);
    }
    cout << endl << endl;


    for (int i = 0; i < cantAlum; i++)
    {
        alumnos[i].curso=0;

        leer("Ingrese el DNI:", alumnos[i].dni);
        leer("Ingrese el nombre:", alumnos[i].nombre);
        leer("Ingrese la edad:", alumnos[i].edad);
        leer("Ingrese el email:", alumnos[i].email);
        leer("Ingrese el telefono:", alumnos[i].telefono);

        if (alumnos[i].curso == 0)
        {
            cout << "Ingrese el codigo de curso" << "(1 - " << cantCurso << ")",
            cin >> alumnos[i].curso;
        }else{
            cout << "El alumno ya esta inscripto a un curso" << endl;
        }
    }
    cout << endl << endl;


 ordenarXDNI(alumnos, cantAlum);

 int datoDNI=0;
 int posicion=0;

 leer("Ingrese el DNI buscado:", datoDNI);
 
 posicion = buscarDNI(alumnos, cantAlum, datoDNI);

 if (posicion >= 0)
 {
    imprimirAlum(alumnos, posicion, cursos);
 }

}

int main () {

 int cantCursos=0;
 int cantAlumnos=0;
 
 leer("Ingrese la cantidad de cursos disponibles", cantCursos);
 leer("Ingrese la cantidad de alumnos", cantAlumnos);

 ST_CURSO cursos[cantCursos];
 ST_ALUMNO alumnos[cantAlumnos];

 cargarCursosAlumnos(cursos, cantCursos, alumnos, cantAlumnos);

 system("pause");
 return 0;
}

/*

Ejercicio Ordenamiento

Un establecimiento educativo que se encuentra lanzando una serie de cursos, 
requiere de una aplicación que le permita inscribir a los participantes.

Para ello cuenta con una cantidad M de cursos a brindar a la comunidad.

Desalumnosollar u.dnina aplicación que permita:
    * Registrar una cantidad M de cursos. El código de curso, deberá asignarse de manera automática y debe ser un número entero en el rango [1, M].
    * Registrar una cantidad de N alumnos/as. Un alumno/a sólo puede inscribirse en un curso.
    * Imprimir los datos de un alumno/a y el curso al que se inscribió. Para obtener los datos, se ingresará el dni de la persona.

Restricciones:
    * El conjunto de cursos no puede ser recorrido secuencialmente.
    * El conjunto de alumnos/as sólo puede ser recorrido secuencialmente 1 vez.

*/