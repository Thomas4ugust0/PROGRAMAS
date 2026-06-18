#include <stdio.h>
int main()
{
int a, b, d;
int e=0, g=0;
long long int c=0, f=0;


while((scanf("%d", &a) != EOF)){
e=-1, f=10000000;
g++;

for(b=0; b<a; b++){

scanf("%lld %d", &c, &d);

if(d>e){
e=d;
f=c;
}
else if(d==e && c<f){
e=d;
f=c;
}
}
printf("Dia %d\n%lld\n\n", g, f);
}
return 0;
}