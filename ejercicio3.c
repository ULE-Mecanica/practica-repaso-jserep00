#include <stdio.h>

int pw(int num1,int num2);
int main(){
    int num1=4567,num2;
    printf("\n Introducir numero:");
    scanf("%d",&num2);
    pw(num1,num2);
    printf("Correcto\n");
    return 0;
}

int pw(int num1,int num2){
	do {
		if (num2>num1) {
                printf("Te as pasado\n");
                printf("Introduce otro numero:\n");
                scanf("%d",&num2);
                
            }else{
                printf("No as llegado a la cifra\n");
                printf("Introduce otro numero:\n");
                scanf("%d",&num2);
            }
        } while (num2!=num1);
    return 1;
}
