#ifndef TORNEO_H_INCLUDED
#define TORNEO_H_INCLUDED
#define FILE_TORNEOS "torneos.dat"

class Torneo {
    private:
        int tipo_torneo;///64 equipos, 32 equipos, 16 equipos o 8 equipos.
        int instancia_torneo;
        int partidos_jugados;
        bool torneo_activo;
        int *Matriz_resultados;
   public:
        Torneo();
        void setTipo_torneo(int);
        void setInstancia_torneo(int);
        void setPartidos_jugados(int);
        void setTorneo_activo(bool);
        int getTipo_torneo();
        int getInstancia_torneo();
        int getPartidos_jugados();
        bool getTorneo_activo();
        void cargar();
		void mostrar();
		bool escribrirEnDisco();
		bool guardarEnDisco();
};

int informar_tipoTorneo();
int seleccionar_torneo();

void registrarResultado(int, int);

#endif // TORNEO_H_INCLUDED
