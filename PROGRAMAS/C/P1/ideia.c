#include <stdio.h>
int main()
{
int cr, dv;
scanf("%d", &cr);
int d6=cr%10;
int d5=(cr%100)/10;
int d4=(cr%1000)/100;
int d3=(cr%10000)/1000;
int d2=(cr%100000)/10000;
int d1= cr/100000;

dv=11-(((d6*2)+(d5*3)+(d4*4)+(d3*5)+(d2*6)+(d1*7))%11);
printf("%d\n", dv);


return 0;

}