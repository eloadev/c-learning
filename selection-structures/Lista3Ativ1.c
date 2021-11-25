#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Eloá Mello, dia 20/08/2021
/*1.Usando o comando if sem a cláusula else, programe funções para
receber um caractere  e  retornar  verdadeiro  ou  falso.  Cada
função deve verificar  se  o caractere recebido por parâmetro é:
a)uma vogal;
b)uma letra minúscula;
c)uma letra maiúscula;
d)uma letra;
e)uma consoante;
f)umalgarismo.
Em seguida, já podendo usar o if com else, chame os módulos programados
a partir de um módulo mainpara testar seu programa.*/

int vogal (char x){
	if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
	return 1;
}
	return 0;
}

int letramin (char x){
	if (x>96 && x<123) return 1;
	return 0;
}

int letramai (char x){
	if (x>64 && x<91) return 1;
	return 0;
}

int letra (char x){
	if ((x>64 && x<91)||(x>96 && x<123)) return 1;
	return 0;
}

int alg (char x){
	if (x =='0'||x=='1'||x=='2'||x=='3'||x=='4'||x=='5'||x=='6'||x=='7'||x=='8'||x=='9'){
	  return 1;
}
	return 0;
}

int cons (char x){
	if (!vogal(x)&&!alg(x)) return 1;
	return 0;
}

int main(void) {
	char x;

	printf("De o caractere: ");
	  x=getchar();

    printf("\n\nVogal: ");
      if (vogal(x) == 1) printf ("true");
      else printf("false");

    printf("\nLetra minúscula: ");
      if (letramin(x) == 1) printf ("true");
      else printf("false");

    printf("\nLetra maiúscula: ");
      if (letramai(x) == 1) printf ("true");
      else printf("false");

    printf("\nLetra: ");
      if (letra(x) == 1) printf ("true");
      else printf("false");

    printf("\nConsoante: ");
      if (cons(x) == 1) printf ("true");
      else printf("false");

    printf("\nAlgarism: ");
      if (alg(x) == 1) printf ("true");
      else printf("false");

	return 0;
}
