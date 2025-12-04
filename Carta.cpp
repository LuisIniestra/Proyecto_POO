#include "Carta.h"

Carta::Carta(int v, string p, string est){
    valor = v;
    palo = p;
    vista.estado = est;
}

int Carta::getValor() const {
    return valor;
}

string Carta::getPalo() const {
    // ahora solo regresa el texto, sin símbolos
    return palo;
}

string Carta::getEstado() const {
    return vista.estado;
}

void Carta::voltear(){
    if(vista.estado == "visible")
        vista.estado = "oculta";
    else
        vista.estado = "visible";
}

int Carta::getValorBlackjack() const {
    if(valor == 1) return 1;
    if(valor >= 10) return 10;
    return valor;
}
