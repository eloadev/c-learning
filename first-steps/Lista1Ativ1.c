#include <stdio.h>
#include <stdlib.h>

// Elo� Mello, Programa criado no dia 29/07

/*1. Voc� deve escrever um m�dulo para receber
 um �nico par�metro do tipo texto e escrev�-lo
 de volta � tela do computador. Aten��o: este
 m�dulo n�o retorna resultado; apenas executa o
 processamento referente � escrita de um texto
 na sa�da do computador. Em seguida, chame este
 m�dulo a partir de um m�dulo main para testar
 seu programa.*/

void pessoa (char* n) {
	         printf("\nSeu nome e %s\n", n);
}
int main(void) {
             char* nome;
               nome=(char*)malloc(sizeof(char)*20);
              printf("Digite seu nome: \n");
                gets(nome);
              pessoa(nome);
                free(nome);
             return 0;
}
