#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <locale.h>
#include <ctime>
using namespace std;
#include "rlutil.h"
using namespace rlutil;
#include "interfaz.h"




void menu_principal();
void menu_inicar_torneo();





void menu_principal(){

   int opcion,i;
	do{
	system("cls");
	title("TORNEO DE FUTBOL", APP_TITLEFORECOLOR, APP_TITLEBACKCOLOR);
	//gotoxy(1, 3);

	for (i = 0; i < 24; i++) {
		gotoxy(i + 4, 3); printf("*");
		gotoxy(9, 4); printf("MEN� PRINCIPAL ");
		gotoxy(i + 4, 5); printf("*");
		gotoxy(4, 4); printf("*");
		gotoxy(27, 4); printf("*");
	}

	gotoxy(1,6);
		//cout << "    MEN� PRINCIPAL" << endl<<endl;
		cout << "    1. INICAR TORNEO" << endl;
		cout << "    2. CONTINUAR TORNEO" << endl;
		cout << "    3. CONFIGURACIONES " << endl;
		cout << "    0. SALIR" << endl;
		cout << "    ------------------------------" << endl;

		cout <<"    Opcion-> ";
		cin >> opcion;


			switch (opcion) {
			case 1:

				break;
			case 2:

				break;
			case 3:

				break;
			case 4:
				break;
			case 0:	return;
				break;
			}
	} while (opcion != 0);

}









#endif // FUNCIONES_H_INCLUDED
