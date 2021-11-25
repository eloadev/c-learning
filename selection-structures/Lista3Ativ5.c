#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Eloá Mello, dia 20/08/2021
/*5.Para que três valores constituam os lados de um triângulo,
é necessário que qualquer um dos lados seja inferior que a soma
dos ladosrestantes. Programe um módulo  para verificar  se  três
valores  são  capazes  de  formar  os  lados  de um  triângulo.
Dando  continuidade,  programe  outra  função.  Esta  segunda
função deve receber três valores, e informar se tais medidas
representam um triângulo  equilátero  (quando os  três  lados
são  iguais), um  triângulo isósceles (quanto dois dos três lados
são iguais), um triângulo escaleno (quando os três lados  são
diferentes),  ou  se  não  constituem  um  triângulo.Esta  segunda
função pode retornar um inteiro entre 0 e 3, de acordo com a tabela abaixo:
Retorno / Tipo de triângulo
0       / Não é triângulo
1       / Escaleno
2       / Isósceles
3       / Equilátero
Em  seguida, a  partir  de um  módulo main,  peça  para  o  usuário
fornecer  três valores  e  faça  seu  programa  responder  a  ele  se
ele  forneceu  valores incapazes de formar um triângulo, ou que tipo de
triângulo é formado com os valores de entrada.
*/

float calculolados (float a, float b, float c){
	if (a<b+c && b<a+c && c<a+b) return 1;
	else return 0;
}

float tipotriangulo (float a, float b, float c){
	if (calculolados(a,b,c) == 0) return 0;
	else
	    if (a==b && b==c) return 3;
	    else
	        if (a==b||a==c||b==c) return 2;
		    else
			    if (a!=b && a!=c && c!=b) return 1;
			    else return 0;
}

int main(void){
	float a, b, c;
	printf("De os 3 valores: ");
	  scanf("%f", &a);
	  scanf("%f", &b);
	  scanf("%f", &c);
	if (tipotriangulo(a,b,c) == 3) printf("\nEsses valores formam um triangulo equilatero.");
	else
	    if (tipotriangulo(a,b,c) == 2) printf("\nEsses valores formam um triangulo isosceles.");
		else
			if (tipotriangulo(a,b,c) == 1) printf("\nEsses valores formam um triangulo escaleno.");
			else printf("\nEsses valores sao incapazes de formar um triangulo.");
	return 0;
}
