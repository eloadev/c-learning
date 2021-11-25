#include <stdio.h>
#include <math.h>

// Eloá Mello, Programa criado no dia 29/07

/*6.	Dois pontos A e B são definidos como (xa, ya)
e (xb, yb). A distância entre estes pontos é dada por
raiz(xa-xb)²+(ya-yb)². Escreva um módulo para receber dois pontos e retornar
a distância entre eles. Repare que, para cada ponto
, seu módulo deve receber dois dados. Em seguida, chame
este módulo a partir de um módulo main para testar
seu programa.*/

float calcdistancia (float xa, float ya, float xb, float yb) {
             float d;
               d = sqrt( pow((xa-xb), 2) + pow((ya-yb), 2) );
             return d;
}
int main(void) {
             float xa, ya, xb, yb, d;
              printf("De os valores de A e B e descubra a distancia"
            	 	  "\nValor x de A: ");
                scanf("%f", &xa);
              printf("Valor y de A: ");
                scanf("%f", &ya);
              printf("Valor x de B: ");
                scanf("%f", &xb);
              printf("Valor y de B: ");
                scanf("%f", &yb);
              d = calcdistancia(xa, ya, xb, yb);
              printf("\n\nA distancia entre esses pontos e: %.2f", d);
             return 0;
}
