#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Eloá Mello, dia 20/08/2021
/*6.O Índice  de  Massa  Corpórea  (IMC)indica  o grau  de
obesidade de  um paciente.  A  tabela  a  seguir  ilustra
os  diferentes  níveis  de  obesidade  em  que uma pessoa
pode se encontrar:
IMC (kg/m2) / Tipo de obesidade
< 25        / Ausente
≥25 e < 30  / Sobrepeso
≥30 e < 35  / Obesidade Grau I
≥35 e < 40  / Obesidade Grau II
≥40         / Obesidade Mórbida
O  Índice  de  Massa  Corpórea  é  calculado  pela  expressão
IMC=peso/altura². Programe um módulo para receber em seus
parâmetros o o peso e a altura de uma pessoa para retornar:
▪0, para ausente de obesidade;
▪1, para sobrepeso;
▪2, para obesidade grau 1;
▪3, para obesidade grau 2;
▪4, para obesidade mórbida.
Em  seguida, a  partir  de um  módulo main,  peça  para  o
usuário  fornecer  seu peso e sua altura para, em seguida,
conhecer seu tipo de obesidade.*/

int gordinha (float p, float a){
	float imc;
	imc = p/pow(a,2);
	if (imc<25) return 0;
	else
	    if (imc>=25 && imc<30) return 1;
	    else
	        if (imc>=30 && imc<35) return 2;
	        else
	            if (imc>=35 && imc<40) return 3;
	            else return 4;
}

int main(void){
	float p, a;
	printf("De seu peso: ");
	  scanf ("%f", &p);
	printf("\nDe sua altura: ");
	  scanf ("%f", &a);
	if (gordinha(p, a) == 0) printf("\nVoce esta ausente de obesidade.");
	else
		if (gordinha(p, a) == 1) printf("\nVoce esta sobrepeso.");
		else
			if (gordinha(p, a) == 2) printf("\nVoce tem obesidade grau I.");
			else
				if (gordinha(p, a) == 3) printf("\nVoce tem obesidade grau II.");
				else
					if (gordinha(p, a) == 4) printf("\nVoce tem obesidade morbida.");
	return 0;
}
