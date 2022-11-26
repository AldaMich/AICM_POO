#include "Vuelo.h"

Vuelo::Vuelo()
{
    id_vuelo = "Sin Id";
    num_vuelo = 0.0;
    aerolinea = "No definida";
    disponibilidad = true;
    fecha = "No definida";
    precio = 0.0;
    duracion = 0.0;
    asientos[0] = true;
    kilometros_recorridos = 0.0;
}

// Vuelo::Vuelo(string, float, string, string, float, float, map<int, bool>, float);

Vuelo::~Vuelo()
{
    //dtor
}

void Vuelo::setIdVuelo(string x){
    id_vuelo = x;
}

string Vuelo::getIdVuelo(){
    return id_vuelo;
}

void Vuelo::setNumVuelo(float x){
    num_vuelo = x;
}

float Vuelo::getNumVuelo(){
    return num_vuelo;
}

void Vuelo::setAerolinea(string x){
    aerolinea = x;
}

string Vuelo::getAerolinea(){
    return aerolinea;
}

void Vuelo::setFecha(string x){
    fecha = x;
}

string Vuelo::getFecha(){
    return fecha;
}

void Vuelo::setDisponibilidad (bool x){
    disponibilidad = x;
}

bool Vuelo::getDisponibilidad(){
    return disponibilidad;
}

void Vuelo::setPrecio(float x){
    precio = x;
}

float Vuelo::getPrecio(){
    return precio;
}

void Vuelo::setDuracion(float x){
    duracion = x;
}

float Vuelo::getDuracion(){
    return duracion;
}

void Vuelo::setAsientos(map<int, bool> x){
    asientos = x;
}

map<int, bool> Vuelo::getAsientos(){
    return asientos;
}

void Vuelo::setKilometros(float x){
    kilometros_recorridos = x;
}

float Vuelo::getKilometos(){
    return kilometros_recorridos;
}

/** Calcula la disponibilidad evaluando el value del mapa de asientos
bool Vuelo::calculaDisponibilidad(){

}
**/
