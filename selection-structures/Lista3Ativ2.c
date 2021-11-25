#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Eloá Mello, dia 20/08/2021
/*2.A  biblioteca math.h oferece  a  função fabs. Suponha  que
ela  não  exista  e escreva  um  módulo  para  ter  comportamento
idêntico  a  esta  função. Em seguida, chameeste  módulo a
partir  de um  módulo mainpara  testar  seu programa.*/

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
