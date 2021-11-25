#include <stdio.h>
#include <math.h>

// Eloá Mello, Programa criado no dia 29/07

/*3. Uma equação do segundo grau possui a forma
A² + Bx + C = 0. Crie um módulo para receber os
valores de A, B e C e retornar o valor de delta
(∆ = B² – 4AC). Em seguida, chame este módulo a
partir de um módulo main para testar seu programa. */

float calculadelta (float a, float b, float c) {
             float delta;
               delta = (b*b) - (4*a*c);
             return delta;
}
int main (void) {
             float a, b, c, delta;
              printf("De 3 valores e descubra o delta \nValor 1: ");
                scanf("%f", &a);
              printf("\nValor 2: ");
                scanf("%f", &b);
              printf("\nValor 3: ");
                scanf("%f", &c);
              delta = calculadelta(a, b, c);
              printf("\n\nO valor do delta e de: %.2f", delta);
             return 0;
}
