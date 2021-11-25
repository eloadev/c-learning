/*1. Escreva duas funções para inverter um vetor, substituindo
as posições dos seus elementos. O primeiro elemento do vetor
será deslocado para o último índice do vetor, o segundo elemento
do vetor será deslocado para o penúltimo índice do vetor, e assim
por diante. Escreva uma função recebendo um arranjo e outra
recebendo um ponteiro. Em seguida, chame estes módulos a partir
de um módulo main para testar seu programa.*/
//Eloa Mello, dia 23/09/2021

#include <stdio.h>
#include <stdlib.h>

void trocar(int *vetor, int num){
     int i,aux;
     	 for(i=0;i<num/2;i++) {
	        aux=vetor[i];
	        vetor[i]=vetor[num-i];
	        vetor[num-i]=aux;
	    }
}

int main(void){
	int * vetor;
	int i,tam;

	printf("Qual o tamanho do vetor desejado? ");
    scanf("%d",&tam);
	vetor = (int*)malloc(sizeof(int[tam]));

	printf("\nDigite os valores");
	for(i=0;i<10;i++) {
	  printf("\nVetor %d: ", i);
	  scanf("%d",&vetor[i]);
	}
	trocar(vetor, tam);
	printf("\n\nResultado: \n");
	 for(i=0;i<tam;i++){
     printf("Vetor %d = %d\n",i,vetor[i+1]);
}
	return 0;
}
