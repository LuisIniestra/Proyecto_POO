#ifndef JUEGOBLACKJACK_H
#define JUEGOBLACKJACK_H

#include <vector>
#include "Baraja.h"
#include "Crupier.h"
#include "Participante.h"
using namespace std;

class JuegoBlackjack {
private:
    Baraja baraja;
    Crupier crupier;
    vector<Participante*> jugadores;

public:
    JuegoBlackjack();
    void agregarJugador(Participante* p);
    void jugarRonda();
    ~JuegoBlackjack();
};

#endif
