// Eloa Mello, dia 03/09/2021
/*7. Um c�lculo aproximado para a raiz quadrada de um n�mero positivo n, segue o seguinte algoritmo:
i) 	Estabelecer um intervalo de atua��o entre a=0 e b=n
ii) Calcular o ponto m�dio c do intervalo
iii)Se c2 > n, reduzir o intervalo de atua��o fazendo b = c; caso contr�rio, reduzir o intervalo de atua��o fazendo a = c
iv)	Repetir os passos ii) e iii) at� que o tamanho do intervalo de atua��o torne-se muito pequeno, por exemplo, menor que 10-6
Escreva uma fun��o para estimar uma aproxima��o para a raiz quadrada de um n�mero positivo.
Em seguida, chame este m�dulo a partir de um m�dulo main para testar seu programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float raiz (float num){
	int controle;
	float aux=num;
	for (controle=0;controle<=num;controle++){
		aux = aux/2 + num/(2*aux);
	}
	return aux;
}

int main(void){
	float num;
	printf("De o numero e saiba a raiz quadrada: ");
	scanf("%f", &num);
	printf("A raiz quadrada de %.2f e: %.5f",num,raiz(num));
	return 0;
}
