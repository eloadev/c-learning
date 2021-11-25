// Eloa Mello, dia 03/09/2021
/*3. Um número primo é um inteiro positivo que possui
apenas dois divisores também positivos diferentes.
Escreva uma função para retornar verdadeiro ou falso
para o fato de um número ser primo. Em seguida, chame
este módulo a partir de um módulo main para testar seu programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo (int numero){
	int inteiro, resultado;
	resultado = 0;
	for (inteiro=2;inteiro<=numero/2;inteiro++){
		if (numero % inteiro == 0){
			resultado++;
			break;
		}
	}
	return resultado;
}
int main(void){
	int numero;
	printf("De o numero: ");
	scanf("%d", &numero);
	if (primo(numero) == 0) printf("\nSeu numero e primo.");
	else printf("\nSeu numero nao e primo.");
	return 0;
}
