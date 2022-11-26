#include "Reserva.h"

Reserva::Reserva()
{
    id_reserva = "No definido";
    id_vuelo = "No definido";
    asiento = "No definido";
    precio = 0;
}

Reserva::Reserva(string x, string y, string z){
    id_cliente = x;
    id_vuelo = y;
    asiento = z;
}
Reserva::Reserva(string x, string y, string z, string w){
    id_reserva = x;
    id_cliente = y;
    id_vuelo = z;
    asiento = w;
}

Reserva::~Reserva()
{
    //dtor
}

void Reserva::setIdReserva(string x){
    id_reserva = x;
}

string Reserva::getIdReserva(){
    return id_reserva;
}

void Reserva::setIdCliente(string x){
    id_cliente = x;
}
string Reserva::getIdCliente(){
    return id_cliente;
}

void Reserva::setIdVuelo(string x){
    id_vuelo = x;
}

string Reserva::getIdVuelo(){
    return id_vuelo;
}

void Reserva::setAsiento(string x){
    asiento = x;
}

string Reserva::getAsiento(){
    return asiento;
}

void Reserva::setPrecio(float x){
    precio = x;
}

float Reserva::getPrecio(){
    return precio;
}
/** Métodos en construcción
void Reserva::buscarVuelo(){

}

Vuelo Reserva::elegirVuelo(){

}

void Reserva::reservarVuelo(){

}

void Reserva::cancelarReserva(){

}

void Reserva::descuento(){

}
**/
