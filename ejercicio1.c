#include <stdio.h>

int multiplica (int num1, int num2);
int main()
{
	int n1, n2;
	printf ("Introduce un número: ");
	scanf ("%d", &n1);
	printf ("Introduce otro número: ");
	scanf ("%d", &n2);
	printf ("El resultado es %d \n", multiplica (n1, n2));
	return 0;
}

int multiplica (int num1, int num2)
{
	int i, resultado=0;
	for (i=1;i<=num2;i++){
		resultado=resultado+num1;
		
	}
	return resultado;
}
