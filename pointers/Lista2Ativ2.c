#include <stdio.h>
#include <math.h>

//Elo� Mello, Programa criado no dia 07/08
/*10. Um  n�mero  racional  possui  dois  componentes:  o  numerador
e  o  denominador, representados  matematicamente  por dn(n�  o
numerador  e d�  o  denominador). Considere  dois  n�meros  racionais
x e y, x=nx/dx e y=ny/dy, bem  como as express�es  que  refletem  a
adi��o, a  subtra��o,  a  multiplica��o  e  a  divis�o  de n�meros
racionais, dadas abaixo: a)(nx/dx)+(ny/dy)=(nx*dy+ny*dx)/(dx*dy)
b)(nx/dx)-(ny/dy)=(nx*dy-ny*dx)/(dx*dy)
c)(nx/dx)*(ny/dy)=(nx*ny)/(dx*dy)
d)(nx/dx)/(ny/dy)=(nx*dy)/(dx*ny).
Escreva  quatro  m�dulos independentes.  Um  deve  calcular  a  adi��o,
outro  a subtra��o, outro a multiplica��o e o �ltimo a divis�o entre
dois n�meros racionais. Cada m�dulo   deve   fornecer   sua   resposta
ap�s   receber   o  numerador e  o denominador de cada n�mero racional.
Observe que seu m�dulo precisa exportar duas informa��es: o numerador
e o denominador do n�mero racional. Pense em como resolver esta quest�o.
Em seguida, chame este m�dulo em um m�dulo mainpara testar seu programa.*/

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
