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

int factorial(int num){
    int i,solucion = 1;
    for (i=1; i<=num; i++) {
        solucion*=i;
    }
    return (solucion);
}

