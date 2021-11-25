// Eloa Mello, dia 03/09/2021
/*3. Um n�mero primo � um inteiro positivo que possui
apenas dois divisores tamb�m positivos diferentes.
Escreva uma fun��o para retornar verdadeiro ou falso
para o fato de um n�mero ser primo. Em seguida, chame
este m�dulo a partir de um m�dulo main para testar seu programa.*/

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
