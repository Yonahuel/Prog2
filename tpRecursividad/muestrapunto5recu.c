#include "punto5recu.c"

int main(){
    int dividendo,divisor, resultado;

    printf("Ingrese un dividendo: \n");
    scanf("%d", &dividendo);
    printf("Ingrese un divisor: \n");
    scanf("%d", &divisor);

    resultado = restoRecursivo(dividendo,divisor);

    printf("El cociente de estos numeros es: %d", resultado);


}