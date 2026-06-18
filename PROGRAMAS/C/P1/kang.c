#include <math.h>
#include <stdio.h>
int main()
{
int b, c;
unsigned long long int a, f, d;
d = 0;
scanf("%llu %d", &a, &b);

for(c = 1; b >= c; c++){
f=0; 

if(a%2!=0){
f=sqrt(a);
d=((f*2)-1)*((f*2)-1);
}

if(a%2==0){
f=sqrt(a);
d=(f-1)*(f-1);
}
printf("%llu\n", d);
a = d;
}

return 0; 
}
