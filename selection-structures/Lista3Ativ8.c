// Elo� Mello, dia 20/08/2021
/*8. Programe uma fun��o para receber dois operandos num�ricos e um operador.
O  operador  �  um  caractere  que  indica  qual  opera��o  deve  ser
feita  com  os primeiros par�metros. Por exemplo, caracteres v�lidos para
o operador podem ser: �+�, �-�, �*�, �x�, �X�, �/�ou�:�. Esta fun��o deve
retornar o  resultado  da  opera��oem  quest�o.Em  seguida, chamea
fun��o criada  a partir de um m�dulo mainpara testar seu programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculadora (float a, float b, char x){
	switch (x){
	case '+' :
	        return a+b;
	case '-' :
		    return a-b;
	case '*' :
	case 'x' :
	case 'X' :
			return a*b;
	case '/' :
	case ':' :
			return a/b;

	default: return 0;
	}
}

int main(void){
	float a,b;
	char x;
    printf("Digite os dois operandos: ");
	  scanf("%f", &a);
	  scanf("%f", &b);
	printf("\nDigite o caracter operador: ");
	  scanf("\n"); x=getchar();
	if (calculadora(a,b,x)!=0) printf("\n%.1f %c %.1f: %.1f", a, x, b, calculadora(a,b,x));
	else printf("Operador invalido.");
	return 0;
}
