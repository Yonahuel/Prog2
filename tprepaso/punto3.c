#include "TP0_Repaso.h"
#include <stdio.h>
#include <math.h>


enum Referencia dondeEstaElPuntoBis(punto centroC, int rc, punto p){
    float distancia, punto1, punto2;
    enum Referencia estadoDelPunto;



    punto1 = pow(centroC.x-p.x,2);
    punto2 = pow(centroC.y-p.y,2);

    distancia = sqrt(punto1+punto2);

    if (distancia == rc){
        estadoDelPunto = EN_CIRCUNFERENCIA;
    } 
    else if (distancia < rc) {
        estadoDelPunto = INTERNO;
    } else estadoDelPunto = EXTERNO;

    return estadoDelPunto;


    
    
    
    



}