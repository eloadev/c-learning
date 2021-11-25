#include <stdio.h>
#include <stdlib.h>

// Eloá Mello, Programa criado no dia 29/07

/*2. Uma empresa necessita cadastrar seus funcionários,
considerando o seguinte: a) o nome do funcionário;
b) sua data de nascimento (divida a data de nascimento em
trás dados individuais: dia, mês e ano); c) seu salário; e
d) uma informação que identifica se o funcionário é chefe
dentro da empresa ('S' para sim; 'N' para não).
 Escreva um módulo exclusivamente para receber estes dados e
 escrever uma frase que contemple estes dados na tela.
 Em seguida, chame este módulo a partir de um módulo main
 para testar seu programa.*/

 void info(char* n, int d, int m, int a, float s, char c) {
             printf("\n\nFuncionario(a) %s, nasceu no dia %d/%d/%d, ganha R$%.2f, chefe: %c", n, d, m, a, s, c);
 }
 int main(void) {
             char* nome;
             int dia, mes, ano;
             float salario;
             char chefe;
               nome=(char*)malloc(sizeof(char)*20);

              printf("Cadastro de funcionario\n\n"
             		  "Nome: ");
                gets(nome);
              printf("\nData de nascimento\nDia: ");
                scanf("%d", &dia);
              printf("\nMes: ");
                scanf("%d", &mes);
              printf("\nAno: ");
                scanf("%d", &ano);
              printf("\nSalario: ");
                scanf("%f", &salario);
              printf("\nO funcionario e chefe dentro da empresa? (S ou N)  ");
                scanf("\n");
                chefe=getchar();
              info(nome, dia, mes, ano, salario, chefe);
               free(nome);
             return 0;
 }
