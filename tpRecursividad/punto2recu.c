#include <stdbool.h>
#include <string.h>
#include "TP1_Recursividad.h"

bool esPalindromoAux(char *palabra, int inicio, int fin);


bool esPalindromo(char *palabra){
    bool resultado;
    int fin = strlen(palabra)-1;
    int inicio = 0;

    resultado = esPalindromoAux(palabra, inicio, fin);

    return resultado;

    
}

bool esPalindromoAux(char *palabra, int inicio, int fin){
    bool resultado;

    resultado = false;   

    if (inicio >= fin){
        resultado = true;
    } else if (palabra[inicio] == palabra[fin]){
        esPalindromoAux(palabra, inicio+1, fin-1);
        resultado = true;
    } 

    return resultado;

}





