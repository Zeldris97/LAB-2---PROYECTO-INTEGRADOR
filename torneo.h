#ifndef TORNEO_H_INCLUDED
#define TORNEO_H_INCLUDED
#define FILE_TORNEOS "torneos.dat"

class Torneo {
    private:
        int tipo_torneo;///32vos, 16vos, 8vos o 4tos.
        int instancia_torneo;
        int partidos_jugados;
        bool torneo_activo;
   public:
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

#endif // TORNEO_H_INCLUDED