#include <stdio.h>
#include <math.h>

//Elo� Mello, Programa criado no dia 07/08
/* 9. No  sistema  de  coordenadas  conhecido  como  R2,  um  ponto  �
constitu�do  de  dois componentes: a abscissa indica a sua localiza��o no
eixo xe a ordenada indica a sua localiza��o no eixo y. Um segmento de reta
� delimitado por um ponto inicial (xi, yi)  e  um  ponto  final  (xf, yf).
Por  exemplo,  o  segmento  de  reta  abaixo  est� delimitado pelos pontos
(2, 1) e (7,6).O  ponto  m�dio  (xm, ym)  de  um  segmento  de  reta  �
calculado  pelas  seguintes express�es: xm=(xi+xf)/2 e ym=(yi+yf)/2.  Programe  um
m�dulo  para  receber  em seus par�metros os pontos que delimitam um segmento
de reta e devolver como resposta  o  seu  ponto  m�dio.  Observe  que  seu
m�dulo  precisa  exportar  duas informa��es:  a  abscissa  e  a  ordenada
do  ponto  m�dio.  Pense em  como  resolver esta  quest�o.  Em  seguida,
chame  este  m�dulo  em  um  m�dulo mainpara  testar seu programa.*/

void calcpontomedio (int xi, int yi, int xf, int yf, float *xm, float *ym){
             *xm = (xi+xf)/2;
             *ym = (yi,yf)/2;
}
int main(void){
             int xi, yi, xf, yf;
             float xm, ym;
               xi = 2;
               yi = 1;
               xf = 7;
               yf = 6;
             calcpontomedio (xi, yi, xf, yf, &xm, &ym);
              printf("O ponto medio e: (%.1f, %.1f"), xm, ym);
             return 0;
}










