#include <stdio.h>
int main()
{
int thomas, ana, coisa;
scanf("%d", &thomas);
ana = 10;


while(thomas>=ana)
{
coisa = thomas + ana;
printf("%d\n",coisa);
thomas = thomas - 1;
}

return 0;
}