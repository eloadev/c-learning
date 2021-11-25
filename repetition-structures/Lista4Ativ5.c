// Eloa Mello, dia 03/09/2021
/*5. A sequ�ncia infinita 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...
� conhecida como a sequ�ncia de Fibonacci. Nela, os dois
primeiros n�meros s�o 0 e 1. Os demais n�meros s�o obtidos
pala soma dos dois n�meros imediatamente anteriores. Implemente
uma fun��o retornar o n-�simo termo da sequ�ncia de Fibonacci.
Em seguida, chame este m�dulo a partir de um m�dulo main para
testar seu programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibonacci (int num){
	int controle=3, aux, x=0, y=1;
	if (num==1){
		return 0;
	}
	if (num==2||num==3){
		return 1;
	}
	while (controle<=num){
		aux= x+y;
		x= y;
		y= aux;
		controle++;
	}
	return y;
}
int main(void){
	int num;
	printf ("De a posicao da sequencia de fibonacci e saiba o numero: ");
	scanf("%d", &num);
	printf("\nNa posicao %d, esta o %d", num, fibonacci(num));
	return 0;
}
