#include "TP0_Repaso.h"
#include <stdio.h>
#include <math.h>

struct Jugador *mostrar_jugadores(jugador equipo[]){
    int i;


    printf("Lista de jugadores ordenados por cantidad de partidos jugados: \n\n");


    for (i = 0; i < CANT_JUGADORES; i++)
    {
        printf("Nombre jugador: %s \n", equipo[i].nombre);
        printf("Edad: %i \n", equipo[i].edad);
        printf("Cantidad de partidos jugados: %i \n", equipo[i].partidosJugados);
    }
    
    return equipo;

 
}




struct Jugador *jugadoresOrdenadosPorCantDePartidos(jugador equipo[]){
    int i, ordenado;
    jugador aux[CANT_JUGADORES];


do
{
    ordenado = 1;

    for (i = 0; i < CANT_JUGADORES-1; i++)
    {
        if (equipo[i].partidosJugados < equipo[i+1].partidosJugados){             // algoritrmo de ordenamiento
            aux[i] = equipo[i];
            equipo[i] = equipo[i+1];
            equipo[i+1] = aux[i];
            ordenado = 0;
        }
    }

 } while (ordenado == 0);
    
    return mostrar_jugadores(equipo);
}


struct Jugador *jugadoresOrdenadosPorEdad(jugador equipo[]){
    int i, ordenado;
    jugador aux[CANT_JUGADORES];


    do
    {
        ordenado = 1;

        for (i = 0; i < CANT_JUGADORES-1; i++)
    {
        if (equipo[i].edad > equipo[i+1].edad){             // algoritrmo de ordenamiento
            aux[i] = equipo[i];
            equipo[i] = equipo[i+1];
            equipo[i+1] = aux[i];
            ordenado = 0;
        }
    }


    } while (ordenado == 0);


    return mostrar_jugadores(equipo);
    


}


float promedioDePartidosJugados(jugador equipo[], int edad){
    int i, contador,c;
    float promedio;

    contador = 0;
    promedio = 0;
    c = 0;

    for (i = 0; i < CANT_JUGADORES; i++)
    {
        if (equipo[i].edad == edad){
            contador += equipo[i].partidosJugados;
            c++;
        } 
    }


    if (c > 0){               // si c es mayor a 0 quiere decir que encontro una coincidencia de edad
        promedio = (contador/c);
    } else printf("No se encontraron jugadores de esa edad, por lo tanto su promedio es: \n");

    

    return printf("Promedio de partidos: %10.2f", promedio);
    
}