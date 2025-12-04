#include "Crupier.h"

Crupier::Crupier():Jugador("Crupier",0){}

int Crupier::decidirAccion(){
    int puntos = mano.calcularPuntaje();
    if(puntos < 17) return 1;
    return 2;
}
