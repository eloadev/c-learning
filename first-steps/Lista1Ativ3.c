#include <stdio.h>
#include <stdlib.h>

// Elo� Mello, Programa criado no dia 29/07

/*3. Escreva um m�dulo para receber o primeiro
nome de uma pessoa em seu primeiro par�metro.
Este m�dulo possui ainda um segundo par�metro
que deve receber o sobrenome desta mesma pessoa.
Como resultado de seu processamento, este m�dulo
deve imprimir um texto no seguinte formato:
sobrenome, seguido de uma v�rgula, seguido do
nome. Em seguida, chame este m�dulo a partir de
um m�dulo main para testar seu programa. Escreva
um coment�rio logo no in�cio do arquivo abordando
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
