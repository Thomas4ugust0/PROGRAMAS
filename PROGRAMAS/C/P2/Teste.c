#include <stdio.h>

int main()
{
int a, b, c;

scanf("%d", &a);
scanf("%d", &b);

c = (b-a);

int j, k, l, m, n, o;

j = (c/500);
c=c%500;

k = (c/100);
c=c%100;

l = (c/50);
c=c%50;;

m = (c/10);
c=c%10;

n = (c/5);
c=c%5;

o = c;

printf("%d\n", j);
printf("%d\n", k);
printf("%d\n", l);
printf("%d\n", m);
printf("%d\n", n);
printf("%d\n", o);

return 0;
}
