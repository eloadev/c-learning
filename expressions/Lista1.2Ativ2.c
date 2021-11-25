#include <stdio.h>
#include <math.h>

// Elo� Mello, Programa criado no dia 29/07

/*2. Crie um m�dulo para receber as medidas de dois
lados de um tri�ngulo e o �ngulo formado entre eles.
Este m�dulo deve retornar a �rea do tri�ngulo, respeitando
a express�o A= a*b*sen(0)/2 , onde a e b s�o as medidas dos lados,
0 � o �ngulo formado entre estes lados, e A � a �rea do
tri�ngulo. Chame este m�dulo a partir de um m�dulo main
para testar seu programa. Use os valores 3 e 4 para as
medidas dos lados e 90 graus para o �ngulo. Se a sua
programa��o estiver correta, seu programa deve
apresentar o valor 6 como resultado. No entanto, fun��o
sin, da biblioteca math.h, espera receber um �ngulo
em radianos em seu par�metro para retornar o seno deste
�ngulo. Chame o m�dulo que voc� programou no exerc�cio
anterior para realizar a convers�o necess�ria. */

float calcradiano (float g) {
             float r;
             const float pi = 3.141592;
               r = (pi*g) /180;
             return r;
}
float triangulo (float a, float b, float c) {
             float area, rad;
               rad = calcradiano(c);
               area = (a*b*sin(rad)) /2;
             return area;
}
int main (void) {
             float ladoa, ladob, angulo, area;
              printf("Descubra a area do triangulo atraves de 2 lados e angulo"
               		  "\nLado A: ");
                scanf ("%f", &ladoa);
              printf("\nLado B: ");
                scanf ("%f", &ladob);
              printf("\nAngulo: ");
                scanf ("%f", &angulo);
              area = triangulo(ladoa, ladob, angulo);
              printf("\n\nA area do triangulo e: %.2f", area);
             return 0;
}
