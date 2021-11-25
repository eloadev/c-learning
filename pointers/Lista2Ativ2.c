#include <stdio.h>
#include <math.h>

//Eloá Mello, Programa criado no dia 07/08
/*10. Um  número  racional  possui  dois  componentes:  o  numerador
e  o  denominador, representados  matematicamente  por dn(né  o
numerador  e dé  o  denominador). Considere  dois  números  racionais
x e y, x=nx/dx e y=ny/dy, bem  como as expressões  que  refletem  a
adição, a  subtração,  a  multiplicação  e  a  divisão  de números
racionais, dadas abaixo: a)(nx/dx)+(ny/dy)=(nx*dy+ny*dx)/(dx*dy)
b)(nx/dx)-(ny/dy)=(nx*dy-ny*dx)/(dx*dy)
c)(nx/dx)*(ny/dy)=(nx*ny)/(dx*dy)
d)(nx/dx)/(ny/dy)=(nx*dy)/(dx*ny).
Escreva  quatro  módulos independentes.  Um  deve  calcular  a  adição,
outro  a subtração, outro a multiplicação e o último a divisão entre
dois números racionais. Cada módulo   deve   fornecer   sua   resposta
após   receber   o  numerador e  o denominador de cada número racional.
Observe que seu módulo precisa exportar duas informações: o numerador
e o denominador do número racional. Pense em como resolver esta questão.
Em seguida, chame este módulo em um módulo mainpara testar seu programa.*/

void calcsoma(int nx, int dx, int ny, int dy, int *n, int *d){
	*n = (nx*dy)+(ny*dx);
	*d = (dx*dy);
}
void calcsub(int nx, int dx, int ny, int dy, int *n, int *d){
	*n = (nx*dy)-(ny*dx);
	*d = (dx*dy);
}
void calcmult(int nx, int dx, int ny, int dy, int *n, int *d){
	*n = (nx*ny);
	*d = (dx*dy);
}
void calcdivi(int nx, int dx, int ny, int dy, int *n, int *d){
	*n = (nx*dy);
	*d = (dx*ny);
}
int main(void){
	int nx, dx, ny, dy, n, d;
	 printf("De o numerador de x: ");
	   scanf("%d", &nx);
	 printf("\nDe o denominador de x: ");
	   scanf("%d", &dx);
	 printf("\nDe o numerador de y: ");
	   scanf("%d", &ny);
	 printf("\nDe o denominador de y: ");
	   scanf("%d", &dy);

	calcsoma(nx, dx, ny, dy, &n, &d);
	  printf("O resultado da soma de %d/%d e %d/%d e de:  %d/%d", nx, dx, ny, dy, n, d);
	calcsub(nx, dx, ny, dy, &n, &d);
	  printf("\nO resultado da subtracao de %d/%d e %d/%d e de:  %d/%d", nx, dx, ny, dy, n, d);
	calcmult(nx, dx, ny, dy, &n, &d);
	  printf("\nO resultado da multiplicacao de %d/%d e %d/%d e de:  %d/%d", nx, dx, ny, dy, n, d);
	calcdivi(nx, dx, ny, dy, &n, &d);
	  printf("\nO resultado da divisao de %d/%d e %d/%d e de:  %d/%d", nx, dx, ny, dy, n, d);
	 return 0;
}
