#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <locale.h>
using namespace std;
#include "rlutil.h"
#include "interfaz.h"
using namespace rlutil;
#include "equipo.h"
#include "jugador.h"
#include "torneo.h"

void Torneo::setTipo_torneo(int tipo){tipo_torneo=tipo;}
void Torneo::setInstancia_torneo(int inst){instancia_torneo=inst;}
void Torneo::setPartidos_jugados(int par){partidos_jugados=par;}
void Torneo::setTorneo_activo(bool activo){torneo_activo=activo;}
int  Torneo::getTipo_torneo(){return tipo_torneo;}
int  Torneo::getInstancia_torneo(){return instancia_torneo;}
int  Torneo::getPartidos_jugados(){return partidos_jugados;}
bool Torneo::getTorneo_activo(){return torneo_activo;}


bool Torneo::guardarEnDisco(){
    bool guardo;
    FILE *pArchivo;
    pArchivo=fopen(FILE_TORNEOS,"ab");
    if(pArchivo==NULL)return false;
    guardo=fwrite(this,sizeof(Torneo),1,pArchivo);
    fclose(pArchivo);
    return guardo;
}

int informar_tipoTorneo(){
<<<<<<< HEAD


=======
>>>>>>> db647b9985502a9397e05c3e8275b75575778ef2
    FILE* pArchivo;
    pArchivo=fopen(FILE_TORNEOS,"rb");
    if(pArchivo==NULL){
        return 0;
    }
    int cant;
    Torneo tor;
    fread(&tor, sizeof(Torneo), 1, pArchivo);
    fclose(pArchivo);
    cant=tor.getTipo_torneo();
    return cant;
}

void cargar_resultado_partido(){
     int numeroEquipo, numeroCamisetaGol, golesEquipo, golesJugador, asistencias, nroCamisetaAsis,
     CantRojas, CantAmari;
     int opcion1, opcion2;

     cout<<"    INGRESE EL RESULTADO Y LA EL CODIGO DE EL PRIMER EQUIPO";
     cout<<"Goles: "<<endl;
     cin>>golesEquipo<<endl;
     cout<<"Numero de equipo: "<<endl;
     cin>>numeroEquipo<<endl;

     registrarResultado(golesEquipo,numeroEquipo);
     cout<<"    INGRESE EL RESULTADO Y LA EL CODIGO DE EL SEGUNDO EQUIPO";
     cout<<"Goles: "<<endl;
     cin>>golesEquipo<<endl;
     cout<<"Numero de Equipo: "<<endl;
     cin>>numeroEquipo<<endl;
     registrarResultado(golesEquipo,numeroEquipo);

     cls();
     do{
     cout<<"    INGRESE LOS GOLEADORES. PRIMERO DIGITE EL NUMERO DE CAMISETA Y LUEGO LA CANTIDAD DE GOLES QUE EL JUGADOR HIZO";
     cout<<"Numero de camiseta: " <<endl;
     cin>>numeroCamisetaGol<<endl;
     cout<<"Cantidad de goles de el jugador: "<<endl;
     cin>>golesJugador<<endl;

<<<<<<< HEAD
     registrarGoles(numeroCamisetaGol, golesJugador);
     //hacer mensaje con okcolor//

     cout<<" �Hay mas jugadores para ingresar? Ingrese 1 en caso de que si o 0 en caso de que no";<<endl;

     cin<<opcion<<endl;

     while (opcion1!=1 || opcion1!=0){
        cout<<"OPCION INCORRECTA"<<endl;
        cin>>opcion1<<endl;

     }while(opcion1==1);

     cls();


      do{
     cout<<"    INGRESE LAS ASISTENTENCIAS. PRIMERO DIGITE EL NUMERO DE CAMISETA Y LUEGO LA CANTIDAD DE ASISTENCIAS QUE EL JUGADOR HIZO";
     cout<<"Numero de camiseta: " <<endl;
     cin>>nroCamisetaAsis<<endl;
     cout<<"Cantidad de asistencias de el jugador: "<<endl;
     cin>>asistencias<<endl;

     registrarAsistencias(nroCamisetaAsis, asistencias);
     //hacer mensaje con okcolor//

     cout<<" �Hay mas jugadores para ingresar? Ingrese 1 en caso de que si o 0 en caso de que no";<<endl;

     cin<<opcion<<endl;

     while (opcion2!=1 || opcion2!=0){
        cout<<"OPCION INCORRECTA"<<endl;
        cin>>opcion2<<endl;

     }while(opcion2==1);

     cls();


     //Esto esta quedando largo asi que voy a hacer funciones por cada registro



}}


/*Resultado:Nro de equipo, cantidad de goles
  Goles: cantidad y numero de camiseta
  Asistencias: cantidad y numero de camiseta
  Tarjetas rojas: cantidad y numero de camiseta
  Tarjetas amarillas: cantidad y numero de camiseta
  /*

  Deben solicitarse los datos y guardarse en los arhivos que correspondan
  Para guardar los resultados de los partidos usar un struct y crear un archivo con los resultados y el nombre de los equipos
=======
}

int seleccionar_torneo(){
    int torneo, cant_equipos;
    char seguro;
    cout<<"    Seleccionar torneo:"<<endl<<endl;
    cout<<"    1 - 32vos = 64 EQUIPOS "<<endl;
    cout<<"    2 - 16vos = 32 EQUIPOS"<<endl;
    cout<<"    3 - 8vos  = 16 EQUIPOS"<<endl;
    cout<<"    4 - 4tos  = 8 EQUIPOS"<<endl<<endl;

    cout<<"    Opci�n-> ";
    cin>> torneo;

    if(torneo==1) cant_equipos=64;
    if(torneo==2) cant_equipos=32;
    if(torneo==3) cant_equipos=16;
    if(torneo==4) cant_equipos=8;

    cout<< endl<< "    HA SELECCIONADO EL TORNEO PARA "<< cant_equipos << " EQUIPOS"<<endl;
    cout<< endl<< "    �EST� SEGURO DE LA ELECCI�N? (S/N)"; ///FALTARIA AGREGAR VALIDACION POR INGRESOS INCORRECTOS
    cin>>seguro;
    if(seguro=='N' || seguro=='n') {
        cout<<endl << "    VUELVA A SELECCIONAR TORNEO"<<endl;
        return 0;
    }
    cout<<endl << "    TORNEO SELECCIONADO CORRECTAMENTE"<<endl;
    anykey();

    Torneo tor;
    tor.setTipo_torneo(cant_equipos);
    tor.guardarEnDisco();

    return cant_equipos;
}
>>>>>>> db647b9985502a9397e05c3e8275b75575778ef2
