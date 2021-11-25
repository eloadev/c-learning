#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Eloá Mello, dia 20/08/2021
/*3.Programe  uma  função  para  receber  em  seus  parâmetros
dois números inteiros.  Sua  função  deve  indicar se  o
primeiro parâmetro  é divisível  pelo segundo. Em  seguida,
chame esta  função a  partir  de um  módulo mainpara testar
seu  programa.  Neste  programa,  informe  se  um  número
fornecido  pelo usuário é par ou ímpar.*/

int parouimpar (int x){
	if ((x % 2) == 0) return 1;
	else return 0;
}

int calculadora (int a, int b){
	if ((a % b) == 0) return 1;
	else return 0;
}

int main(void){
	int a, b;

	printf("De o primeiro numero: ");
	scanf("%d", &a);
	printf("\nDe o segundo numero: ");
	scanf("%d", &b);

	if (calculadora(a,b)==1) printf("\nO primeiro numero e divisivel pelo segundo.");
	else printf ("\nO primeiro numero nao e divisivel pelo segundo.");

	if (parouimpar(a)==1) printf("\nO primeiro numero e par.");
	else printf("\nO primeiro numero nao e par.");

	if (parouimpar(b)==1) printf("\nO segundo numero e par.");
	else printf("\nO segundo numero nao e par.");

	return 0;
}
