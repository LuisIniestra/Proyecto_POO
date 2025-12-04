#include "Baraja.h"
#include <cstdlib>

Baraja::Baraja(){}

Carta Baraja::repartir(){
    int valor = 1 + rand() % 13;

    string palos[4] = {"Corazones","Diamantes","Treboles","Picas"};
    int ip = rand() % 4;

    return Carta(valor, palos[ip], "visible");
}

bool Baraja::quedanCartas() const {
    return true;
}
