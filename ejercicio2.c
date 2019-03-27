#include <stdio.h>

int division (int num1, int num2);
int main ()
{
	int n1, n2, divi;
	printf ("Introduce el primer numero: ");
	scanf("%d",&n1);
	printf ("Introdice el segundo numero: ");
	scanf ("%d",&n2);
	divi= division (n1, n2);
	printf ("El resultado es: %d \n", divi);
	return 0;
}
int division (int num1, int num2)
{
	int cont=0;
	while (num1-num2>0){
		num1= num1-num2;
                cont++;
	}
	return cont;
}
	
