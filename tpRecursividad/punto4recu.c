#include <stdbool.h>
#include <string.h>

int fibonacci(int k){
  int resultado = 0;
    if (k <= 1){
        resultado = k;
    } else resultado = fibonacci(k-1) + fibonacci(k-2);


    return resultado;
    
    
}