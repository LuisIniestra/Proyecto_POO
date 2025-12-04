#ifndef CRUPIER_H
#define CRUPIER_H

#include "Jugador.h"
using namespace std;

class Crupier : public Jugador {
public:
    Crupier();
    int decidirAccion();
};

#endif
