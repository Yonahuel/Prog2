#include <stdbool.h>
#include <string.h>
#include "TP1_Recursividad.h"

int productoRecursivo(int m, int n){
    int resultado;
   

    if (n==0){
        resultado = 0;
    } else if(n<0){
        resultado = -m + productoRecursivo(m, n+1);
    } else resultado = m + productoRecursivo(m, n-1);


    return resultado;
}