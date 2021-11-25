#include <stdio.h>
#include <math.h>

//Eloá Mello, Programa criado no dia 07/08
/* 9. No  sistema  de  coordenadas  conhecido  como  R2,  um  ponto  é
constituído  de  dois componentes: a abscissa indica a sua localização no
eixo xe a ordenada indica a sua localização no eixo y. Um segmento de reta
é delimitado por um ponto inicial (xi, yi)  e  um  ponto  final  (xf, yf).
Por  exemplo,  o  segmento  de  reta  abaixo  está delimitado pelos pontos
(2, 1) e (7,6).O  ponto  médio  (xm, ym)  de  um  segmento  de  reta  é
calculado  pelas  seguintes expressões: xm=(xi+xf)/2 e ym=(yi+yf)/2.  Programe  um
módulo  para  receber  em seus parâmetros os pontos que delimitam um segmento
de reta e devolver como resposta  o  seu  ponto  médio.  Observe  que  seu
módulo  precisa  exportar  duas informações:  a  abscissa  e  a  ordenada
do  ponto  médio.  Pense em  como  resolver esta  questão.  Em  seguida,
chame  este  módulo  em  um  módulo mainpara  testar seu programa.*/

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










