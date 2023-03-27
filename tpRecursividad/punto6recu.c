#include <stdbool.h>
#include <string.h>
#include <stdio.h>

void agregarSeparadorMiles(char numero[], int largo){
    
    if (largo > 3) {
        agregarSeparadorMiles(numero, largo - 3);   
        printf(".");
    }
    for (int i = largo - 3; i < largo; i++) {
        printf("%c", numero[i]);
    }
}


void