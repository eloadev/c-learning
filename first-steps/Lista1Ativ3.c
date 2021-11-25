#include <stdio.h>
#include <stdlib.h>

// Eloá Mello, Programa criado no dia 29/07

/*3. Escreva um módulo para receber o primeiro
nome de uma pessoa em seu primeiro parâmetro.
Este módulo possui ainda um segundo parâmetro
que deve receber o sobrenome desta mesma pessoa.
Como resultado de seu processamento, este módulo
deve imprimir um texto no seguinte formato:
sobrenome, seguido de uma vírgula, seguido do
nome. Em seguida, chame este módulo a partir de
um módulo main para testar seu programa. Escreva
um comentário logo no início do arquivo abordando
o seu nome e a data de quando o programa foi criado.*/

void citacao(char* s, char* n) {
             printf("\n%s, %s", s, n);
}
int main(void) {
             char* nome;
             char* sobrenome;
              nome=(char*)malloc(sizeof(char)*20);
              sobrenome=(char*)malloc(sizeof(char)*20);

             printf("Nome: ");
               gets(nome);
             printf("\nSobrenome: ");
               gets(sobrenome);
             citacao(sobrenome, nome);
             free(nome);
             free(sobrenome);
}
