#include <stdio.h>
#include <stdlib.h>

// Eloá Mello, Programa criado no dia 29/07

/*1. Você deve escrever um módulo para receber
 um único parâmetro do tipo texto e escrevê-lo
 de volta à tela do computador. Atenção: este
 módulo não retorna resultado; apenas executa o
 processamento referente à escrita de um texto
 na saída do computador. Em seguida, chame este
 módulo a partir de um módulo main para testar
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
