#include <stdio.h>
#include <math.h>

// Elo� Mello, Programa criado no dia 29/07

/*1. A convers�o de um �ngulo medido em graus
para um �ngulo medido em radianos obedece � esta
equa��o: R= PI*G / 180  , onde R � o �ngulo em radianos e G
� o �ngulo em graus. Crie um m�dulo para receber
o �ngulo medido em graus e retornar o �ngulo
medido em radianos. Use a constante 3,141592
para o valor de  . Para definir uma constante,
use a seguinte sintaxe:
const tipoDaConstante nomeDaConstante = valorDaConstante;
Em seguida, chame este m�dulo a partir de um m�dulo main
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
			          "D� o angulo em graus: ");
                scanf("%f", &g);
              rad = calcradiano(g);
              printf("\n\nO angulo %.2f� em radianos � de: %.2f", g, rad);
             return 0;
}
