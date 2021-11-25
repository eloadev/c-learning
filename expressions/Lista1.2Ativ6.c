#include <stdio.h>
#include <math.h>

// Elo� Mello, Programa criado no dia 29/07

/*6.	Dois pontos A e B s�o definidos como (xa, ya)
e (xb, yb). A dist�ncia entre estes pontos � dada por
raiz(xa-xb)�+(ya-yb)�. Escreva um m�dulo para receber dois pontos e retornar
a dist�ncia entre eles. Repare que, para cada ponto
, seu m�dulo deve receber dois dados. Em seguida, chame
este m�dulo a partir de um m�dulo main para testar
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
