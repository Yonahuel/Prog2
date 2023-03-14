#include "TP0_Repaso.h"
#include <math.h>


enum Referencia dondeEstaElPunto(int xc, int yc, int rc, int xp, int yp){
    float distancia, punto1, punto2;
    enum Referencia estadoDelPunto;



    punto1 = pow(xc-xp,2);
    punto2 = pow(yc-yp,2);

    distancia = sqrt(punto1+punto2);

    if (distancia == rc){
        estadoDelPunto = EN_CIRCUNFERENCIA;
    } 
    else if (distancia < rc) {
        estadoDelPunto = INTERNO;
    } else estadoDelPunto = EXTERNO;

    return estadoDelPunto;

}







