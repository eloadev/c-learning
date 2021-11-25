// Eloá Mello, dia 20/08/2021
/*8. Programe uma função para receber dois operandos numéricos e um operador.
O  operador  é  um  caractere  que  indica  qual  operação  deve  ser
feita  com  os primeiros parâmetros. Por exemplo, caracteres válidos para
o operador podem ser: ‘+’, ‘-’, ‘*’, ‘x’, ‘X’, ‘/’ou‘:’. Esta função deve
retornar o  resultado  da  operaçãoem  questão.Em  seguida, chamea
função criada  a partir de um módulo mainpara testar seu programa.*/

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
