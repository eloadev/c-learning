#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Elo� Mello, dia 20/08/2021
/*5.Para que tr�s valores constituam os lados de um tri�ngulo,
� necess�rio que qualquer um dos lados seja inferior que a soma
dos ladosrestantes. Programe um m�dulo  para verificar  se  tr�s
valores  s�o  capazes  de  formar  os  lados  de um  tri�ngulo.
Dando  continuidade,  programe  outra  fun��o.  Esta  segunda
fun��o deve receber tr�s valores, e informar se tais medidas
representam um tri�ngulo  equil�tero  (quando os  tr�s  lados
s�o  iguais), um  tri�ngulo is�sceles (quanto dois dos tr�s lados
s�o iguais), um tri�ngulo escaleno (quando os tr�s lados  s�o
diferentes),  ou  se  n�o  constituem  um  tri�ngulo.Esta  segunda
fun��o pode retornar um inteiro entre 0 e 3, de acordo com a tabela abaixo:
Retorno / Tipo de tri�ngulo
0       / N�o � tri�ngulo
1       / Escaleno
2       / Is�sceles
3       / Equil�tero
Em  seguida, a  partir  de um  m�dulo main,  pe�a  para  o  usu�rio
fornecer  tr�s valores  e  fa�a  seu  programa  responder  a  ele  se
ele  forneceu  valores incapazes de formar um tri�ngulo, ou que tipo de
tri�ngulo � formado com os valores de entrada.
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
