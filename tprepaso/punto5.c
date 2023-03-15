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


int cantidadDeViviendasVacias(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]){
    int contador, i, j;

    contador = 0;

    for (i = 0; i < CANT_PISOS; i++)
    {
        for (j = 0; j < CANT_DEPARTAMENTOS; j++)     // recorro el edificio
        {
            if (edificio[i][j] == 0){       
                contador ++;                // cuento la cantidad de viviendas en 0
            }
        }
        
    }

    return contador;
    
}


float promedioHabitantesPorVivienda(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]){
    int i, j;
    float contador, promedio, cant_viviendas;

    contador, promedio = 0;

    cant_viviendas = (CANT_PISOS*CANT_DEPARTAMENTOS);


    for (i = 0; i < CANT_PISOS; i++)
    {
        for (j = 0; j < CANT_DEPARTAMENTOS; j++)         // recorro el edificio
        {
            contador = contador + edificio[i][j];     //acumulo la cantidad de personas
        }
        
    }

    promedio = (contador/cant_viviendas);   // divido la cantidad de personas por la cantidad de viviendas


    return promedio;
    
}





