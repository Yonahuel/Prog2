#include "TP0_Repaso.h"
#include <stdio.h>
#include <stdbool.h>


void main(){
    long num;
    short digit;
    bool result;



    printf("Ingrese un digito: ");
    scanf("%i", &digit);

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    result = digitoEnNumero(num, digit);

    if (result){
        printf("El digito %d se encuentra en el numero %d", digit, num);
    } else printf("El digito %d no se encuentra en el numero %d", digit, num);
    

    
}