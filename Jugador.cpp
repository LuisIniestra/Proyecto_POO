#include "Jugador.h"

Jugador::Jugador(string n):nombre(n){}

string Jugador::getNombre() const {
    return nombre;
}

Mano& Jugador::getMano(){
    return mano;
}

void Jugador::recibirCarta(const Carta& c){
    mano.agregarCarta(c);
}

void Jugador::resetearMano(){
    mano.limpiar();
}

int Jugador::decidirAccion(){
    return 0;
}
