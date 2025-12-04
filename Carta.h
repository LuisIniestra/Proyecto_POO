#ifndef CARTA_H
#define CARTA_H

#include <string>
using namespace std;

struct EstadoCarta {
    string estado;
};

class Carta {
private:
    int valor;
    string palo;
    EstadoCarta vista;

public:
    Carta(int v, string p, string est = "visible");
    int getValor() const;
    string getPalo() const;
    string getEstado() const;
    void voltear();
    int getValorBlackjack() const;
};

#endif
