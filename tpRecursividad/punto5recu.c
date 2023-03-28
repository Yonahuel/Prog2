#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "TP1_Recursividad.h"

int restoRecursivo(int dividendo, int divisor){


    int resultado = 0;
    int signo = 1;

    if (divisor == 0){                                                          // si divisor es 0 tira error
        printf("Error no se puede dividir por cero \n");      
    } else if (dividendo < 0){                                           // si el dividendo es negativo, guarda el signo y despues lo convierte en positivo para hacer la resta
        signo = -signo; 
        resultado = -restoRecursivo(-dividendo, divisor);    
    } else if (divisor < 0){                                             // si el divisor es negativo, guarda el signo y despues lo convierte en positivo para hacer la resta
        signo = -signo;
        resultado = -restoRecursivo(dividendo, -divisor);
    } else if (dividendo < divisor){                                   // caso base, cuando el dividendo sea menor que el divisor para la resta
     resultado = dividendo;
    } else resultado = signo * restoRecursivo(dividendo-divisor, divisor);          // recursion, multiplicando el signo que corresponde 

    return resultado;
           


   
    
}