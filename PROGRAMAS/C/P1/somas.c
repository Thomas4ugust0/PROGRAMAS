#include <stdio.h>
int main()
{
int c, d, e;
d = 0;
e = 0;
while(scanf("%d", &c) != EOF)
{

if(c == 0)
{
        printf("%d %d", d, e);
}
if(c%2 == 0)
{
d = (d+c);
}
if(c%2 != 0)
{
e= (e+c);
}
}

return 0;
}