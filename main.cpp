#include <iostream>
#include <ctime>
#include "JuegoBlackjack.h"
using namespace std;

int main(){
    srand(time(NULL));

    JuegoBlackjack juego;
    juego.agregarJugador(new Participante("Jugador",0));

    int opcion = 0;

    while(opcion != 2){
        cout << "1. Jugar una ronda" << endl;
        cout << "2. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if(opcion == 1){
            juego.jugarRonda();
        }
        else if(opcion == 2){

        }
        else{
            cout << "Opcion no valida. Intenta de nuevo." << endl;
            opcion = 0;
        }
    }

    return 0;
}
