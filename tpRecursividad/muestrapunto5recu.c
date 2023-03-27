#include "punto5recu.c"

int main(){
    float n,m, resultado;

    printf("Ingrese un numero m: \n");
    scanf("%f", &m);
    printf("Ingrese un numero n: \n");
    scanf("%f", &n);

    resultado = Cociente(m,n);

    if (resultado != -1) {printf("El cociente de estos numeros es: %.4f", resultado);}


}