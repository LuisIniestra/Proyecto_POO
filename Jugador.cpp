#include "Jugador.h"

Jugador::Jugador(string n, float s):nombre(n),saldo(s){}

string Jugador::getNombre() const {
    return nombre;
}

float Jugador::getSaldo() const {
    return saldo;
}

Mano& Jugador::getMano(){
    return mano;
}

void Jugador::ajustarSaldo(float monto){
    saldo += monto;
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
