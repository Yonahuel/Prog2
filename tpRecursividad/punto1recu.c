#include <stdbool.h>
#include <string.h>
#include "TP1_Recursividad.h"

bool esCapicuaAux(char *numero, int inicio, int final);


bool esCapicua(int numero){
    char num[10];
    int inicio, final;
    bool resultado;

    sprintf(num, "%i", numero);

    final = strlen(num)-1;
    inicio = 0;

    resultado = esCapicuaAux(num, inicio, final);

    return resultado;




}

bool esCapicuaAux(char *numero, int inicio, int final){
    bool resultado;

    resultado = false;

    if (inicio >= final){
        resultado = true;
    } else if (numero[inicio] == numero[final]){
        esCapicuaAux(numero, inicio+1, final-1);
        resultado = true;
    }

    return resultado;


}