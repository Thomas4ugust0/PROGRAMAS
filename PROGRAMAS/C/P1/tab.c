#include <stdio.h>
int main()
{
int a, b, c, d;

scanf("%d %d", &b, &a);
for(d=1; b >= d; d++){
for(c=1; a >= c; c++){
printf("[%03d,%03d] ",d-1, c-1);
}
printf("\n");
}


return 0;
}