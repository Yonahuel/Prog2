#include "punto1recu.c"
#include "TP1_Recursividad.h"

int main(){
    int numero;
    bool resultado;

    printf("Ingrese un numero: ");
    scanf("%i", &numero);

    resultado = esCapicua(numero);

    if (resultado){
        printf("El numero es capicua");
    } else printf("El numero NO es capicua");


}