#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED
#define FILE_EQUIPOS "equipos.dat"

class Equipo{
	private:
		int nro_equipo;
		char nombre_equipo[30];
		int goles_afavor;
		int goles_encontra;
		int partidos_ganados;
		int partidos_perdidos;
		bool activo;
	public:
	    Equipo();
		void cargar();
		void mostrar();
		bool escribrirEnDisco();
		bool guardarEnDisco();
		void setNro_equipo(int);
		void setNombre_equipo(char *);
		void setGoles_afavor(int);
		void setGoles_encontra(int);
		void setPartidos_ganados(int);
		void setPartidos_perdidos(int);
		void setActivo(int);
		int getNro_equipo();
		char *getNombre_equipo();
		int getGoles_afavor();
		int getGoles_encontra();
		int getPartidos_ganados();
		int getPartidos_perdidos();
		bool getActivo();

};

void ingresar_equipos(int);

bool cargar_equipo(int cant_equipos);
bool cargar_jugadores(int cant_jugadores);
int contar_equiposCargados();
<<<<<<< HEAD
Equipo buscarEquipo(Equipo nro_equipo);
=======
void listar_equipos();
>>>>>>> db647b9985502a9397e05c3e8275b75575778ef2

#endif // EQUIPO_H_INCLUDED
