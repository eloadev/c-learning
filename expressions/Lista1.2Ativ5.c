#include <stdio.h>
#include <math.h>

// Elo� Mello, Programa criado no dia 29/07

/*5. O volume de uma esfera � dado pela seguinte express�o:
V= 4/3pi*R�, onde V � o volume e R � o raio da esfera. Crie
um m�dulo para receber o raio da esfera e retornar o seu
volume. Use a constante 3,141592 para o valor de pi . Em
seguida, chame este m�dulo a partir de um m�dulo main para
testar seu programa. */

float volume (float r) {
             float v;
             const float pi = 3.141592;
               v= (4*pi)*(r*r*r) /3;
             return v;
}
int main (void) {
             float raio, vol;
              printf("De o raio e descubra o volume: ");
                scanf("%f", &raio);
              vol = volume(raio);
              printf("\n\nO volume e de: %.1f", vol);
             return 0;
}
