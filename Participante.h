#ifndef PARTICIPANTE_H
#define PARTICIPANTE_H

#include "Jugador.h"
using namespace std;

class Participante : public Jugador {
public:
    Participante(string n, float saldoInicial);
    int decidirAccion();
};

#endif
