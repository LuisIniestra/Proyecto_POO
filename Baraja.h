#ifndef BARAJA_H
#define BARAJA_H

#include "Carta.h"
using namespace std;

class Baraja {
public:
    Baraja();
    Carta repartir();
    bool quedanCartas() const;
};

#endif
