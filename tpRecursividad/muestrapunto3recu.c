#include "punto3recu.c"

int main(){
    int m, n, resultado;

    printf("Ingrese un numero m: \n");
    scanf("%d", &m);
    printf("Ingrese un numero n: \n");
    scanf("%d", &n);

    resultado = producto(m,n);

    printf("El producto de esos numeros es: %d", resultado);
    
}