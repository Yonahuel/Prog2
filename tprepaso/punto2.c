#include "TP0_Repaso.h"
#include <math.h>
#include <stdbool.h>

const int tamano = 5;

bool digitoEnNumero(long n, short d){
    bool estaOno;
    int i, residuo;

    estaOno = false;

    i = 0;

    
    while (n > 0 && !estaOno){
        residuo = n % 10;      // obtengo ultimo digito del numero

        if (residuo == d){
            estaOno = true;
        }
        n = n / 10;   // elimina ultimo digito del numero
        i++;
        
        }

    return estaOno;


}