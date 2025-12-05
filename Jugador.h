#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include "Mano.h"
using namespace std;

class Jugador {
protected:
    string nombre;
    Mano mano;

public:
    Jugador(string n);
    string getNombre() const;
    Mano& getMano();
    void recibirCarta(const Carta& c);
    void resetearMano();
    virtual int decidirAccion();
    virtual ~Jugador(){}
};

#endif
