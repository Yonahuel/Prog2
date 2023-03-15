#include "TP0_Repaso.h"

int pisoConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]){
    int contador,i,j, maximo, pisoMasHabitantes;

    maximo = 0;

    for (i = 0; i < CANT_PISOS; i++)      //recorre pisos
    {
        contador = 0;
        for (j = 0; j < CANT_DEPARTAMENTOS; j++)    //dentro de los pisos los deptos 
        {
            contador += edificio[i][j];   // va contando los habitantes de cada depto
        }

        if (contador > maximo){        // compara si la cantidad de habitantes del piso actual es mayor al maximo q guardo
            maximo = contador;
            pisoMasHabitantes = i+1;
        }
        
    }

    return pisoMasHabitantes;

}


