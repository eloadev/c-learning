#include <stdio.h>
#include <math.h>

// Eloá Mello, Programa criado no dia 29/07

/*2. Crie um módulo para receber as medidas de dois
lados de um triângulo e o ângulo formado entre eles.
Este módulo deve retornar a área do triângulo, respeitando
a expressão A= a*b*sen(0)/2 , onde a e b são as medidas dos lados,
0 é o ângulo formado entre estes lados, e A é a área do
triângulo. Chame este módulo a partir de um módulo main
para testar seu programa. Use os valores 3 e 4 para as
medidas dos lados e 90 graus para o ângulo. Se a sua
programação estiver correta, seu programa deve
apresentar o valor 6 como resultado. No entanto, função
sin, da biblioteca math.h, espera receber um ângulo
em radianos em seu parâmetro para retornar o seno deste
ângulo. Chame o módulo que você programou no exercício
anterior para realizar a conversão necessária. */

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
