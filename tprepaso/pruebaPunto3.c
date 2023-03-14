#include "TP0_Repaso.h"
#include <stdio.h>

void main(){

punto puntoC, puntoP;
int radio;
enum Referencia resultado;


    printf("Ingrese la coordenada x del centro: \n");
    scanf("%d", &(puntoC.x));
    printf("Ingrese la coordenada y del centro: \n");
    scanf("%d", &(puntoC.y));
    printf("Ingrese el radio del circulo: \n");
    scanf("%d", &radio);
    printf("Ingrese la coordenada x del punto: \n");
    scanf("%d", &(puntoP.x));
    printf("Ingrese la coordenada y del punto: \n");
    scanf("%d", &(puntoP.y));


    resultado = dondeEstaElPuntoBis(puntoC, radio, puntoP);

    if (resultado == EN_CIRCUNFERENCIA){
        printf("El punto esta en la circunferencia");
    } else if (resultado == INTERNO){
        printf("El punto esta dentro del circulo");
    } else printf("El punto esta fuera del circulo");


    
    



}