#ifndef MANO_H
#define MANO_H

#include <vector>
#include "Carta.h"
using namespace std;

class Mano {
private:
    vector<Carta> cartas;

public:
    Mano();
    void agregarCarta(const Carta& c);
    int calcularPuntaje() const;
    bool estaEnBlackjack() const;
    bool estaEnBust() const;
    void limpiar();
    void mostrar() const;
    void mostrarPrimeraCarta() const;
};

#endif
