#include <stdio.h>
#include <math.h>

// Elo� Mello, Programa criado no dia 29/07

/*4. Escreva um m�dulo para converter uma temperatura da escala
Celsius para a escala Fahrenheit. A f�rmula de convers�o �
F= 1,8*C+32, onde F � a temperatura em Fahrenheit e C � a temperatura em
Celcius. Seu m�dulo deve retornar o valor da temperatura em
Fahrenheit. Em seguida, chame este m�dulo a partir de um m�dulo
main para testar seu programa.*/

float conversao (float c) {
             float f;
               f = 1.8*c +32;
             return f;
}
int main (void) {
             float c, f;
              printf("Conversor de Celcius em Fahrenheit: ");
                scanf("%f", &c);
              f = conversao (c);
              printf("%.1f�C = %.1f�F", c, f);
             return 0;
}
