#include <stdbool.h>
#include <string.h>
#include "TP1_Recursividad.h"

int terminoSerieDeFibonacci(int k){
  int resultado = 0;
    if (k <= 1){
        resultado = k;
    } else resultado = terminoSerieDeFibonacci(k-1) + terminoSerieDeFibonacci(k-2);


    return resultado;
    
    
}