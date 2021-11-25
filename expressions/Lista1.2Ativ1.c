#include <stdio.h>
#include <math.h>

// Eloá Mello, Programa criado no dia 29/07

/*1. A conversão de um ângulo medido em graus
para um ângulo medido em radianos obedece à esta
equação: R= PI*G / 180  , onde R é o ângulo em radianos e G
é o ângulo em graus. Crie um módulo para receber
o ângulo medido em graus e retornar o ângulo
medido em radianos. Use a constante 3,141592
para o valor de  . Para definir uma constante,
use a seguinte sintaxe:
const tipoDaConstante nomeDaConstante = valorDaConstante;
Em seguida, chame este módulo a partir de um módulo main
para testar seu programa. */

float calcradiano (float g) {
             float r;
             const float pi = 3.141592;
               r = (pi*g) /180;
             return r;
}
int main(void) {
             float g, rad;
              printf("Conversor angular de grau em radiano\n"
			          "Dê o angulo em graus: ");
                scanf("%f", &g);
              rad = calcradiano(g);
              printf("\n\nO angulo %.2f° em radianos é de: %.2f", g, rad);
             return 0;
}
