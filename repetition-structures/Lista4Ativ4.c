// Eloa Mello, dia 03/09/2021
/*4. Implemente uma fun��o para calcular o fatorial
de um n�mero. O fatorial de 0 � 1, por defini��o.
Para qualquer outro n�mero inteiro positivo n, o seu
fatorial � dado por n x (n-1) x (n-2) x ... x 3 x 2 x 1.
Em seguida, chame este m�dulo a partir de um m�dulo main
para testar seu programa.*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int num){
    int controle;
	for (controle=num-1;controle>=1;controle--){
	num = num*controle;
	}
	return num;
}
int main(void){
	int num;
	printf("De um numero inteiro e saiba o fatorial dele: ");
	scanf("%d", &num);
	printf("\nFatorial: %d",fatorial(num));
	return 0;
}
