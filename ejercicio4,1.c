#include <stdio.h>

int factorial(int num);
int main(){
    int n,resultado;
    printf("Introduzca el numero:");
    scanf("%d",&n);
    resultado = factorial(n);
    printf("Resultado:%d\n",resultado);
    return 0;
}

int factorial(int n){
    int contador=1,solucion=1;
    do {
        solucion=solucion*contador;
        contador++;
    } while (contador<=n);
    return solucion;
}


