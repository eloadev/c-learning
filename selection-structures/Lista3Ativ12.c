// Eloá Mello, dia 20/08/2021
/*12.No Xintoquistão,a moeda corrente é o xinto. Neste país as cédulas
existentes são  as  seguintes:  X$500,00,  X$100,00, X$50,00, X$10,00,
X$5,00 e X$1,00. Escreva  um  programa  que  leia um  inteiro  N,
calcule  e  imprima  a  quantidade mínima  de  cédulas  de  X$  500,
X$  100,  X$  50,  X$  10,  X$  5,  X$  1  que  são necessárias  para
pagar  exatamente  a  importância  dada  pelo  inteiro  N.  Por exemplo,
se a importância a pagar for X$ 309 então o programa deverá imprimir:
3 cédula(s) de X$ 100
1 cédula(s) de X$ 5
4 cédula(s) de X$ 1
Nota: As cédulas com quantidade igual a zero não devem ser listadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
     int valor, x;
     printf("De o valor total em xinto: ");
     scanf("%d", &valor);

     if (valor >=500) {
    	 x = valor/500;
         printf("\n%d cedulas de X$500,00", x);
         valor = valor-(500*x);
}
     if (valor >=100) {
         x = valor/100;
         printf("\n%d cedulas de X$100,00", x);
         valor = valor-(100*x);
}
     if (valor >=50) {
         x = valor/100;
         printf("\n%d cedulas de X$50,00", x);
         valor = valor-(50*x);
}
     if (valor >=10) {
         x = valor/10;
         printf("\n%d cedulas de X$10,00", x);
         valor = valor-(10*x);
}
     if (valor >=5) {
         x = valor/5;
         printf("\n%d cedulas de X$5,00", x);
         valor = valor-(5*x);
}
     if (valor >=1) {
         x = valor/1;
         printf("\n%d cedulas de X$1,00", x);
         valor = valor-(1*x);
}
     return 0;
}
