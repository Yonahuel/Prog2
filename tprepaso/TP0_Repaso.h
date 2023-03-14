#include <stdbool.h>

#ifndef TP0_Repaso
#define TP0_Repaso

// Ejercicio 1

enum Referencia
{
    INTERNO = -1,
    EN_CIRCUNFERENCIA,
    EXTERNO
};

enum Referencia dondeEstaElPunto(int xc, int yc, int rc, int xp, int yp);

// Ejercicio 2

bool digitoEnNumero(long n, short d);


// Ejercicio 3

typedef struct {
    int x, y;
} punto;

enum Referencia dondeEstaElPuntoBis(punto centroC, int rc,  punto p);

// Ejercicio 4

#define TAMANO_STRING 50
#define CANT_JUGADORES 11

typedef struct {
    char nombre[TAMANO_STRING];
    int edad, partidosJugados;
} jugador;

struct Jugador *jugadoresOrdenadosPorCantDePartidos(jugador equipo[]);
struct Jugador *jugadoresOrdenadosPorEdad(jugador equipo[]);
float promedioDePartidosJugados(jugador equipo[], int edad);

// Ejercicio 5

#define CANT_PISOS 8
#define CANT_DEPARTAMENTOS 5

typedef struct ViviendaRep {
    short piso;
    char depto;
} Vivienda;


int pisoConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);
int cantidadDeViviendasVacias(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);
float promedioHabitantesPorVivienda(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);
Vivienda viviendaConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);

// Viviendas viviendasVacias(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]);


#endif //TP0_Repaso