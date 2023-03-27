#include "punto4recu.c"

int main(){
    int k, resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &k);

    resultado = fibonacci(k);

    printf("El elemento de la posicion k de la secuencia de Fibonacci es %d", resultado);
}