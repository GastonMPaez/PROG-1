#include <iostream>
using namespace std;
#define MAX_CONSOLA 100
#define MAX_JUEGOS 100

struct Juego {
    int codigo;
    int stock;
    string titulo;
    string codigoConsola;
};

struct Consola {
    string codigo;
    int cantidadJuegos;
};

void ordenarPorConsola(Juego juegos[], int cantJuegos) {
    Juego aux;
    bool ordenado = false;
    int i = 0;
    while (i < cantJuegos && !ordenado) {
        ordenado = true;
        for (int j = 0; j < cantJuegos - i - 1; j++) {
            if (juegos[j].codigoConsola > juegos[j + 1].codigoConsola) {
                aux = juegos[j];
                juegos[j] = juegos[j + 1];
                juegos[j + 1] = aux;
                ordenado = false;
            }
        }
        i++;
    }
}

void imprimir(Consola consolas[], int cant) {
    cout << "Consola\t\tCant. Juegos" << endl;
    for (int i = 0; i < cant; i++) {
        cout << consolas[i].codigo << "\t\t" << consolas[i].cantidadJuegos << endl;
    }

}

void generarJuegosXConsola(Juego juegos[], int cantJuegos, Consola consolas[], int &cantConsolas) {
    ordenarPorConsola(juegos, cantJuegos);
    int i = 0, juegosConsola = 0;
    while (i < cantJuegos) {
        string clave = juegos[i].codigoConsola;
        juegosConsola = 0;
        while (i < cantJuegos && clave == juegos[i].codigoConsola) {
            juegosConsola++;
            i++;
        }
        consolas[cantConsolas].codigo = clave;
        consolas[cantConsolas].cantidadJuegos = juegosConsola;
        cantConsolas++;
    }
    return;
}

int main () {
    Juego juegos[MAX_JUEGOS] = {
        {111, 5, "Un juego", "ABC"},
        {112, 2, "Un juego", "DEF"},
        {113, 1, "Un juego", "ZZZ"},
        {114, 0, "Un juego", "GHI"},
        {115, 8, "Un juego", "ABC"},
        {116, 7, "Un juego", "ZZZ"},
        {117, 4, "Un juego", "ABC"},
    };


    Consola consolas[MAX_CONSOLA];

    int cantConsolas = 0;
    generarJuegosXConsola(juegos, 7, consolas, cantConsolas);

    imprimir(consolas, cantConsolas);

    system("pause");
    return 0;
}

/*

Ej. 12: El dueño de un local de venta de juegos para distintas consolas necesita desjuegooll.ar un algoritmo
que genere un vector, JuegosPorConsola, ordenado por consola, con un solo registro por consola según el
siguiente diseño:

a) Consola (cadena)
b) Cantidad de juegos (4 dígitos)

Para obtener la información solicitada se cuenta con el conjunto de datos Juegos, ordenado por código de
juego con un registro por cada juego que se encuentra en el local, con el siguiente diseño:

1) Código del juego (6 digitos)
3) Stock en el local (2 digitos)
2) Titulo del Juego (cadena)
4) Consola (cadena)

*/