#include "TP0_Repaso.h"
#include <string.h>

int main(){
    Vivienda departamentos;
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

    printf("El piso con mas habitantes es el %d \n", pisoConMasHabitantes(edificio));

    printf("La cantidad de viviendas vacias es de: %d \n", cantidadDeViviendasVacias(edificio));

    printf("EL promedio de habitantes por vivienda es de %f \n", promedioHabitantesPorVivienda(edificio));

    departamentos = viviendaConMasHabitantes(edificio);

    printf("El departamento con mas habitantes es el %d - %c", departamentos.piso, departamentos.depto);
    

    



    return 0;
}