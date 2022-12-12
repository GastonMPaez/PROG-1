#include <iostream>

using namespace std;


//HHMM

int horasYminutos(int hsYmin){

    int minutosTotales=0;

    int horas=hsYmin /100;

    int minutos=hsYmin % 100;

    minutosTotales=(horas*60) + minutos;

    return minutosTotales;



}


void minutosExcedidosYabonoTotalApagar(float costoAbono,int minLibres, float cargoMinutosExcedidos,int minutosUsados,int &minutosExcedidos, float &montoAbonar){

 minutosExcedidos=0;

 float totalParaAbonar=0;

 float iva=0;


//calculo minutos excedentes

  if(minutosUsados > minLibres ){

    minutosExcedidos = minutosUsados - minLibres;

}else{

    cout<<"no hay minutos excedidos, ";

    montoAbonar = costoAbono ;

}


//calculo monto total a abonar


 totalParaAbonar = (minutosExcedidos * cargoMinutosExcedidos) + costoAbono;


iva = ((totalParaAbonar)*21)/100;


montoAbonar = totalParaAbonar + iva;


 return;

}


//me devuleve los precios segun el abono

void tarifaSegunAbono(char abono,int &minLibres, float &cargoMinExcedido,float &costoAbono){

    switch (abono){

    case 'a':

    costoAbono= 70;

    minLibres= 300;

    cargoMinExcedido= 0.09;

    break;


case 'b':

    costoAbono= 55;

    minLibres= 200;

    cargoMinExcedido= 0.15;

    break;


case 'c':

    costoAbono= 40;

    minLibres= 100;

    cargoMinExcedido= 0.21;

    break;


case 'd':

    costoAbono= 28;

    minLibres= 60;

    cargoMinExcedido= 0.29;

    break;


case 'e':

    costoAbono= 19;

    minLibres= 40;

    cargoMinExcedido= 0.37;

    //usar procedimiento b

    break;


default:

cout<<"tipo de abono invalido";

    break;

   

}

}


int main()

{


int celular=0;

int tiempoUtilizado=0;

int tiempoEnMinutos=0;

int minExcedidos=0;

int minLibres=0;

int mayorCantMinutosExcedentes=0;

int celularMayorCantMinutosExdentes=0;

int orden=0;

int ordenDentroDelTurno=0;

float menorCantMinutos=0;

float costoAbono=0;

float cargoMinExcedido=0;

float montoTotal=0;

float montoMasCostoso=0;

float montoFinalDelDia=0;

string nombre=0;

string nombreMontoMasCostoso;

string direccion=0;

string turno;

string turnoMenorMinutos;

char tipoAbono=0;

bool flag=true;


for(int i=0; i < 3; i++){


    if(i==0){

        turno="maniana";

    }

    if(i==1){

        turno="tarde";

    }

    if(i==2){

        turno="noche";

    }


    cout<<"ingrese numero de celular"<<endl;

    cin>>celular;

    while(celular!=0){

        cout<<"ingrese nombre del usuario (20 caracteres)"<<endl;

        cin>>nombre;

        cout<<"ingrese direccion (25 caracteres)"<<endl;

        cin>>direccion;

        cout<<"ingrese tiempo utilizado en formato HHMM (4 digitos)"<<endl;

        cin>>tiempoUtilizado;

        cout<<"ingrese tipo de abono (a,b,c,d,e)"<<endl;

        cin>>tipoAbono;


        orden++;


        tiempoEnMinutos=horasYminutos(tiempoUtilizado);


        tarifaSegunAbono(tipoAbono,minLibres,cargoMinExcedido,costoAbono);


        minutosExcedidosYabonoTotalApagar(costoAbono,minLibres,cargoMinExcedido,tiempoEnMinutos,minExcedidos,montoTotal);



        if(montoMasCostoso==0 || montoTotal > montoMasCostoso){

            montoMasCostoso=montoTotal;

            nombreMontoMasCostoso=nombre;

        }


        if(mayorCantMinutosExcedentes==0 || minExcedidos > mayorCantMinutosExcedentes){

            mayorCantMinutosExcedentes=minExcedidos;

            celularMayorCantMinutosExdentes=celular;

        }






        cout<<"turno: "<<turno;

        cout<<"nombre: "<<nombre<<endl;

        cout<<"direccion: "<<direccion<<endl;

        cout<<"minutos libres: "<<minLibres<<endl;

        cout<<"minutos excedidos: "<<minExcedidos<<endl;

        cout<<"moto total a abonar: $"<<montoTotal<<endl;

        cout<<"la persona con la factura mas costosa es: "<<nombreMontoMasCostoso<<" con una factura de: $"<<montoMasCostoso<<endl;

        cout<<"la mayor cant de minutos excedidos es: "<<mayorCantMinutosExcedentes<<endl;

        cout<<"el celular del usuario es: "<<celularMayorCantMinutosExdentes;




        cout<<"ingrese numero de celular (9 digitos):"<<endl;

        cin>>celular;

    }


    if (flag==true || tiempoEnMinutos < menorCantMinutos ){

        menorCantMinutos=tiempoEnMinutos;

        flag==false;

        ordenDentroDelTurno=orden;

        turnoMenorMinutos=turno;

       

    }

   

    montoFinalDelDia+= montoTotal;


    i++;

}

cout<<"el monto al final del dia es: "<<montoFinalDelDia<<endl;

cout<<"la persona que consumio menos minutos se encuentra en el turno "<<turnoMenorMinutos<<" en el numero de orden "<<ordenDentroDelTurno<<" con un total de minutos: "<<menorCantMinutos;




    return 0;


}