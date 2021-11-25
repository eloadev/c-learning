// Eloa Mello, dia 03/09/2021
/*7. Um cálculo aproximado para a raiz quadrada de um número positivo n, segue o seguinte algoritmo:
i) 	Estabelecer um intervalo de atuação entre a=0 e b=n
ii) Calcular o ponto médio c do intervalo
iii)Se c2 > n, reduzir o intervalo de atuação fazendo b = c; caso contrário, reduzir o intervalo de atuação fazendo a = c
iv)	Repetir os passos ii) e iii) até que o tamanho do intervalo de atuação torne-se muito pequeno, por exemplo, menor que 10-6
Escreva uma função para estimar uma aproximação para a raiz quadrada de um número positivo.
Em seguida, chame este módulo a partir de um módulo main para testar seu programa.*/

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
