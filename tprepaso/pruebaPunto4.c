#include "TP0_Repaso.h"
#include <stdio.h>
#include <math.h>

void main(){
    int edad;
    jugador equipo[] = {
        {"Messi", 34, 800},
        {"Ronaldo", 37, 900},
        {"Neymar Jr.", 29, 500},
        {"Mbappe", 22, 200},
        {"Lewandowski", 33, 700},
        {"Salah", 29, 400},
        {"De Bruyne", 30, 600},
        {"van Dijk", 30, 400},
        {"Ramos", 35, 650},
        {"Neuer", 35, 800},
        {"Davies", 20, 100}
    };

//jugadoresOrdenadosPorCantDePartidos(equipo);
//jugadoresOrdenadosPorEdad(equipo);

printf("Ingrese una edad: ");
scanf("%i", &edad);

promedioDePartidosJugados(equipo, edad);

}