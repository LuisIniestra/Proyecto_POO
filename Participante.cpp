#include "Participante.h"
#include <iostream>
using namespace std;

Participante::Participante(string n)
:Jugador(n){}

int Participante::decidirAccion(){
    int opcion;
    cout << nombre << ", elige accion (1 = pedir, 2 = quedarse): ";
    cin >> opcion;
    return opcion;
}
