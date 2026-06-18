#include <stdio.h>

int validaPeso(double pesoKg){
double a = pesoKg;
if(a >= 0){
return 1;
}else{ return 0;}
}
void fazTonelada ( double pesoKg ){
double a = pesoKg;
a = a/1000;
printf("%.4lf\n", a);
}
void fazGrama ( double pesoKg ){
double a = pesoKg;
a = a*1000;
printf("%.4lf\n", a);
}
/*
int main(){
double pesoKg = 12.345;
fazTonelada(pesoKg);
fazGrama(pesoKg);
printf("%d", validaPeso(pesoKg));
return 0;
}
*/