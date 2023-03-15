#include "TP0_Repaso.h"

int main(){
    int edificio[CANT_PISOS][CANT_DEPARTAMENTOS] = {
        {3, 5, 2, 1, 0},
        {2, 4, 3, 0, 2},
        {1, 0, 1, 2, 1},
        {0, 1, 0, 0, 0},
        {1, 3, 2, 1, 1},
        {2, 2, 0, 1, 3},
        {1, 0, 0, 2, 1},
        {0, 0, 1, 1, 1}
    };

    printf("El piso con mas habitantes es el %d", pisoConMasHabitantes(edificio));


    return 0;
}