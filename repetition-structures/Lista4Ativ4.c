// Eloa Mello, dia 03/09/2021
/*4. Implemente uma função para calcular o fatorial
de um número. O fatorial de 0 é 1, por definição.
Para qualquer outro número inteiro positivo n, o seu
fatorial é dado por n x (n-1) x (n-2) x ... x 3 x 2 x 1.
Em seguida, chame este módulo a partir de um módulo main
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
