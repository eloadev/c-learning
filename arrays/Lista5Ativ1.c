/*1. Escreva duas fun��es para inverter um vetor, substituindo
as posi��es dos seus elementos. O primeiro elemento do vetor
ser� deslocado para o �ltimo �ndice do vetor, o segundo elemento
do vetor ser� deslocado para o pen�ltimo �ndice do vetor, e assim
por diante. Escreva uma fun��o recebendo um arranjo e outra
recebendo um ponteiro. Em seguida, chame estes m�dulos a partir
de um m�dulo main para testar seu programa.*/
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
