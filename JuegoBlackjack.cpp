#include "JuegoBlackjack.h"
#include <iostream>
using namespace std;

JuegoBlackjack::JuegoBlackjack(){}

void JuegoBlackjack::agregarJugador(Participante* p){
    jugadores.push_back(p);
}

void JuegoBlackjack::jugarRonda(){
    for(int i = 0; i < jugadores.size(); i++){
        jugadores[i]->resetearMano();
    }
    crupier.resetearMano();

    for(int k = 0; k < 2; k++){
        for(int i = 0; i < jugadores.size(); i++){
            jugadores[i]->recibirCarta(baraja.repartir());
        }
        crupier.recibirCarta(baraja.repartir());
    }

    cout << "Carta visible del crupier:" << endl;
    crupier.getMano().mostrarPrimeraCarta();
    cout << "Segunda carta oculta" << endl;

    for(int i = 0; i < jugadores.size(); i++){
        Participante* j = jugadores[i];
        int seguir = 1;

        while(seguir == 1){
            cout << endl;
            cout << "Tus cartas:" << endl;
            j->getMano().mostrar();

            int puntos = j->getMano().calcularPuntaje();
            cout << j->getNombre() << " puntos: " << puntos << endl;

            if(j->getMano().estaEnBust()){
                cout << "Te pasaste de 21." << endl;
                seguir = 0;
            } else {
                int accion = j->decidirAccion();
                if(accion == 1){
                    j->recibirCarta(baraja.repartir());
                } else {
                    seguir = 0;
                }
            }
        }
    }

    cout << endl << "Turno del crupier." << endl;
    crupier.getMano().mostrar();

    int turnoCrupier = 1;

    while(turnoCrupier == 1){
        int puntosC = crupier.getMano().calcularPuntaje();
        cout << "Crupier puntos: " << puntosC << endl;

        if(crupier.getMano().estaEnBust()){
            cout << "El crupier se paso de 21." << endl;
            turnoCrupier = 0;
        } else {
            int accionC = crupier.decidirAccion();
            if(accionC == 1){
                crupier.recibirCarta(baraja.repartir());
                crupier.getMano().mostrar();
            } else {
                turnoCrupier = 0;
            }
        }
    }

    int puntosCrupier = crupier.getMano().calcularPuntaje();

    for(int i = 0; i < jugadores.size(); i++){
        Participante* j = jugadores[i];
        int puntosJ = j->getMano().calcularPuntaje();

        cout << endl << "Resultado final:" << endl;
        cout << "Jugador " << puntosJ << " vs Crupier " << puntosCrupier << " -> ";

        if(j->getMano().estaEnBust()){
            cout << "pierdes" << endl;
        } else if(crupier.getMano().estaEnBust()){
            cout << "ganas" << endl;
        } else {
            if(puntosJ > puntosCrupier) cout << "ganas" << endl;
            else if(puntosJ < puntosCrupier) cout << "pierdes" << endl;
            else cout << "empate" << endl;
        }
    }
}

JuegoBlackjack::~JuegoBlackjack(){
    for(int i = 0; i < jugadores.size(); i++){
        delete jugadores[i];
    }
}
