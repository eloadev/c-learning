#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Elo� Mello, dia 20/08/2021
/*7.Programe  uma  fun��o para  receber  um  caractere  e  retornar
a  posi��o  deste caractere  no  alfabeto,  apenas  se  ele  for
uma  letra. Voc�  pode  chamar  uma das   fun��es   programadas
no   exerc�cio   1   desta   lista   para   facilitar   sua programa��o.
Por�m,  caso  o caractere recebido  no  par�metro  desta  fun��o n�o
seja uma letra, o retorno deste m�dulo deve ser o valor zero. Em seguida,
chamea fun��ocriada a partir de um m�dulo mainpara testar seu programa.*/

int letra (char x){
	if ((x>64 && x<91)||(x>96 && x<123)) return 1;
	return 0;
}

int posicao (char x){
	if (letra(x)&&(x>96 && x<123)) return x-96;
	else
		if (letra(x)&&(x>96 && x<123)) return x-64;
		else return 0;
}

int main(void){
	char x;

	printf("De o caracter e descubra a posicao no alfabeto: ");
	x=getchar();
    if (posicao(x)==0) printf("\nEsse caracter nao tem posicao valida no alfabeto.");
    else printf("\nA posicao desse caracter no alfabeto e: %d.", posicao(x));
	return 0;
}
