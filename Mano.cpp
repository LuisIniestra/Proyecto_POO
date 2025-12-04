#include "Mano.h"
#include <iostream>
using namespace std;

Mano::Mano(){}

void Mano::agregarCarta(const Carta& c){
    cartas.push_back(c);
}

int Mano::calcularPuntaje() const {
    int suma = 0;
    int ases = 0;

    for(int i = 0; i < cartas.size(); i++){
        int v = cartas[i].getValorBlackjack();
        suma += v;
        if(cartas[i].getValor() == 1) ases++;
    }

    while(ases > 0 && suma + 10 <= 21){
        suma += 10;
        ases--;
    }

    return suma;
}

bool Mano::estaEnBlackjack() const {
    return cartas.size() == 2 && calcularPuntaje() == 21;
}

bool Mano::estaEnBust() const {
    return calcularPuntaje() > 21;
}

void Mano::limpiar(){
    cartas.clear();
}

void Mano::mostrar() const {
    for(int i = 0; i < cartas.size(); i++){
        int v = cartas[i].getValor();
        string cara;

        if(v == 1) cara = "A";
        else if(v == 11) cara = "J";
        else if(v == 12) cara = "Q";
        else if(v == 13) cara = "K";
        else cara = to_string(v);

        cout << cara << " " << cartas[i].getPalo() << endl;
    }
}

void Mano::mostrarPrimeraCarta() const {
    if(cartas.size() > 0){
        int v = cartas[0].getValor();
        string cara;

        if(v == 1) cara = "A";
        else if(v == 11) cara = "J";
        else if(v == 12) cara = "Q";
        else if(v == 13) cara = "K";
        else cara = to_string(v);

        cout << cara << " " << cartas[0].getPalo() << endl;
    }
}
