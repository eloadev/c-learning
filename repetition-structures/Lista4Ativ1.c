// Eloa Mello, dia 03/09/2021
/*1. A biblioteca math.hoferece   algumas   fun��es   matem�ticas.
Supondo   a inexist�ncia desta biblioteca, implemente uma fun��o
para calcular: a)o piso de um n�mero real, tal como a fun��o floor;
b)o teto de um n�mero real, tal como a fun��o ceil; Em seguida,
chame estes m�dulos a partir de um m�dulo mainpara testar seu programa. */

#include <stdio.h>
#include <stdlib.h>

int piso (float numero) {
	int result;
	result = numero;
	return result;
}
int teto (float numero) {
	int result;
		result = numero + 1;
		return result;
}
int main (void){
	float num;
	printf("De um numero: ");
	scanf("%f", &num);
	printf("\nO piso do numero e: %d \n"
			"O teto do numero e: %d", piso(num), teto(num));
	return 0;
}
