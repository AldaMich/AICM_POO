#ifndef VUELO_H
#define VUELO_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Vuelo
{
    public:
        Vuelo();
        Vuelo(string, float, string, string, float, float, map<int, bool>, float);
        virtual ~Vuelo();

        void setIdVuelo(string);
        string getIdVuelo();

        void setNumVuelo(float);
        float getNumVuelo();

        void setAerolinea(string);
        string getAerolinea();

        void setFecha(string);
        string getFecha();

        void setDisponibilidad (bool);
        bool getDisponibilidad();

        void setPrecio(float);
        float getPrecio();

        void setDuracion(float);
        float getDuracion();

        void setAsientos(map<int, bool>);
        map<int, bool> getAsientos();

        void setKilometros(float);
        float getKilometos();

        bool calculaDisponibilidad();

    protected:

    private:

        string id_vuelo;
        float num_vuelo;
        string aerolinea;
        string fecha;
        bool disponibilidad;
        float precio;
        float duracion;
        map<int, bool> asientos;
        float kilometros_recorridos;
};

#endif // VUELO_H
