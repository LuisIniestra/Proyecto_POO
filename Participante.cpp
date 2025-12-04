#include "Participante.h"
#include <iostream>
using namespace std;

Participante::Participante(string n, float saldoInicial)
:Jugador(n, saldoInicial){}

int Participante::decidirAccion(){
    int opcion;
    cout << nombre << ", elige accion (1 = pedir, 2 = quedarse): ";
    cin >> opcion;
    return opcion;
}
