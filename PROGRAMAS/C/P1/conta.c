#include <stdio.h>
int main()
{
long long int a;
long long int e = 0;
int d = 0;

while((scanf("%lld", &a)) != EOF)
{
    if(e == 0 && d == 0){
        e = a;
        d++;
    }
    if(a > e){

        e = a;
    }
}
printf("%lld\n", e);
return 0;
}