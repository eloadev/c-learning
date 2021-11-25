// Eloa Mello, dia 03/09/2021
/*5. A sequência infinita 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...
é conhecida como a sequência de Fibonacci. Nela, os dois
primeiros números são 0 e 1. Os demais números são obtidos
pala soma dos dois números imediatamente anteriores. Implemente
uma função retornar o n-ésimo termo da sequência de Fibonacci.
Em seguida, chame este módulo a partir de um módulo main para
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
