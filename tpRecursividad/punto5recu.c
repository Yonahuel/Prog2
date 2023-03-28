#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "TP1_Recursividad.h"

float restoRecursivo(float m, float n){

    float resultado = 0;

    if (n == 0){
        printf("Error no se puede dividir por cero \n");    // si n es 0 termina ahi
        resultado = -1;
    } else if (m<n){        // cuando m sea menor que n va a terminar de restar y llamarse a si misma
        resultado = 0; 
    } else resultado = 1 + restoRecursivo(m-n, n);  // si m es mayor, hace la recursividad restando n a m
    

    return resultado;
           


   
    
}