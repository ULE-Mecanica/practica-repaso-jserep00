#include <stdio.h>

int factorial(int num);
int main(){
    int n,resultado;
    printf("Introduzca el numero:");
    scanf("%d",&n);
    resultado=factorial(n);
    printf("Resultado:%d\n",resultado);
    return 0;
}

int factorial(int num){
    int contador=1,solucion=1;
    while (contador<=num) {
        solucion*=contador;
        contador++;
    }
    return solucion;
}
