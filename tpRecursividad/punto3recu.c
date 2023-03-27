#include <stdbool.h>
#include <string.h>

int producto(int m, int n){
    int resultado;
   

    if (n==0){
        resultado = 0;
    } else if(n<0){
        resultado = -m + producto(m, n+1);
    } else resultado = m + producto(m, n-1);


    return resultado;
}