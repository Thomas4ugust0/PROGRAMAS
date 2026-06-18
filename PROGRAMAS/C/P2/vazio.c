#include <stdio.h>
int main()
{
int a, b, c;

scanf("%d", &c);

if (c % 2 != 0)
{
    a=c;
    for(b = 1; b <= a; a--)
    {   
     if(a%2 == 0)
     {
     printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
     }
     if(a%2 != 0)
     {
      printf("THUMS THUMS THUMS\n");
     }
    }
}
if (c % 2 == 0)
{
    a=c;
    for(b = 1; b <= a; a--)
    {   
     if(a%2 == 0)
     {
     printf("THUMS THUMS THUMS\n");
     }
     if(a%2 != 0)
     {
      printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
     }
    }
}

return 0;
}
