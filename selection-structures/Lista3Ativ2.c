#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Elo� Mello, dia 20/08/2021
/*2.A  biblioteca math.h oferece  a  fun��o fabs. Suponha  que
ela  n�o  exista  e escreva  um  m�dulo  para  ter  comportamento
id�ntico  a  esta  fun��o. Em seguida, chameeste  m�dulo a
partir  de um  m�dulo mainpara  testar  seu programa.*/

float calculofabs (float x){
	if (x >= 0) return x;
	return -x;
}

int main(void){
	float x;
	printf("Calculadora de valor absoluto, de o valor: ");
	scanf("%f", &x);
	printf("\nO valor absoluto e: %.2f", calculofabs(x));
	return 0;
}
