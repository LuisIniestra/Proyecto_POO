#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include "Mano.h"
using namespace std;

class Jugador {
protected:
    string nombre;
    float saldo;
    Mano mano;

public:
    Jugador(string n, float s);
    string getNombre() const;
    float getSaldo() const;
    Mano& getMano();
    void ajustarSaldo(float monto);
    void recibirCarta(const Carta& c);
    void resetearMano();
    virtual int decidirAccion();
    virtual ~Jugador(){}
};

#endif
