// Eloa Mello, dia 03/09/2021
/*1. A biblioteca math.hoferece   algumas   funções   matemáticas.
Supondo   a inexistência desta biblioteca, implemente uma função
para calcular: a)o piso de um número real, tal como a função floor;
b)o teto de um número real, tal como a função ceil; Em seguida,
chame estes módulos a partir de um módulo mainpara testar seu programa. */

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
