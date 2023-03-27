#include "punto2recu.c"
#include "TP1_Recursividad.h"




int main(){
    int inicio, fin;
    char palabra[20];
    bool result;

    printf("Ingrese una palabra: \n");
    scanf("%s", palabra);


    result = esPalindromo(palabra);

    if (result){
        printf("Es palindromo");
    } else printf("NO es palindromo");

    


}