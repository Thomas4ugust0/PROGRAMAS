#include <stdio.h>
double calculaVelocidadeMedia(int tA, int tB, double distancia){
double a;
a = tB - tA;
double b, res;

b = a/3600;
res = distancia/b;

return res;
}
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
if(calculaVelocidadeMedia(tA, tB, distancia) > velocidadeMaxima){
return 1;
}else{
return 0;
}
}

/*
int main(){
printf("%lf\n", calculaVelocidadeMedia(61200,63000,60.0));
printf("%d\n", levouMulta(61200,63000,60.0,120.0));
printf("%lf\n", calculaVelocidadeMedia(54169,57346,170.0));
printf("%d\n", levouMulta(54169,57346,170.0,120.0));
return 0;
}
*/