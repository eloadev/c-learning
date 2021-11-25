#include <stdio.h>
#include <math.h>

// Eloá Mello, Programa criado no dia 29/07

/*4. Escreva um módulo para converter uma temperatura da escala
Celsius para a escala Fahrenheit. A fórmula de conversão é
F= 1,8*C+32, onde F é a temperatura em Fahrenheit e C é a temperatura em
Celcius. Seu módulo deve retornar o valor da temperatura em
Fahrenheit. Em seguida, chame este módulo a partir de um módulo
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
              printf("%.1f°C = %.1f°F", c, f);
             return 0;
}
