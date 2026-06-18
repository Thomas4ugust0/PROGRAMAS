#include <stdio.h>
int main ()
{
int a, b, c;

scanf("%d %d %d", &a, &b, &c);

if (a!=b && a!=c)
printf("A\n");

if (b!=a && b != c)
printf("B\n");

if (c!=a && c!=b)
printf("C\n");


if (a == 0 && b == 0 && c== 0)
printf("empate\n");

if (a == 1 && b == 1 && c== 1)
printf("empate\n");

return 0;
    
}
