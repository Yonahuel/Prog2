#include "TP0_Repaso.h"
#include <string.h>

char calcularDepto(int j);

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



Vivienda viviendaConMasHabitantes(int edificio[CANT_PISOS][CANT_DEPARTAMENTOS]){
    int max_habitantes, i, j, pisomayor;
    char depto = ' ';

    

    Vivienda masHabitantes = {0 , ' '};

    max_habitantes = 0;

    for (i = 0; i < CANT_PISOS; i++)
    {
        for (j = 0; j < CANT_DEPARTAMENTOS; j++)
        {
            if (edificio[i][j] > max_habitantes){
                max_habitantes = edificio[i][j];
                masHabitantes.piso = i + 1;
                masHabitantes.depto = calcularDepto(j+1);
            }
        }
    }

    return masHabitantes;


}

char calcularDepto(int j){
    char depto = ' ';

    switch (j)
    {
    case 1:
        depto = 'A';
        break;
    case 2:
        depto = 'B';
        break;
    case 3:
        depto = 'C';
        break;
    case 4:
        depto = 'D';
        break;
    case 5:
        depto = 'E';
        break;
    default:
        depto = ' ';
        break;
    }

    return depto;
}



