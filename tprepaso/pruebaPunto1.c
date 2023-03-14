#include "TP0_Repaso.h"
#include <stdio.h>

int main(){
    int xc, yc, radio, xp, yp;
    enum Referencia resultado;

    printf("Ingrese la coordenada x del centro: \n");
    scanf("%d", &xc);
    printf("Ingrese la coordenada y del centro: \n");
    scanf("%d", &yc);
    printf("Ingrese el radio del circulo: \n");
    scanf("%d", &radio);
    printf("Ingrese la coordenada x del punto: \n");
    scanf("%d", &xp);
    printf("Ingrese la coordenada y del punto: \n");
    scanf("%d", &yp);

    resultado = dondeEstaElPunto(xc,yc,radio,xp,yp);

    if (resultado == EN_CIRCUNFERENCIA){
        printf("El punto esta en la circunferencia");
    } else if (resultado == INTERNO){
        printf("El punto esta dentro del circulo");
    } else printf("El punto esta fuera del circulo");



    return 0;

}