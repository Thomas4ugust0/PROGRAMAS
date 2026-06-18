#include <stdio.h>
int main(){
int  d, i, t, v, g, j;
char c, b, a;
char str[43];
scanf("%d", &v);
char saida[v];

for(j=1; j<=v; j++){
t=0;
d=0;
g=0;

scanf("%s", str);

for(d=0; str[d] != '\0'; d++){
}
t=d;
d=0;

for(d=0; d<t; d++){
b = str[d];
a = str[d+1];
if(a >= 'A' && a<= 'Z'){
a= a+32;
}
if(b >= 'A' && b<= 'Z'){
b= b+32;
}

for(i=1; i<27; i++)
if(a == b + i)
g++;

if(g==t-1){
saida[v] = 'O';
}else{
saida[v] = 'N';
}
}
printf("%s: %c\n", str, saida[v]);
}
    return 0;
}
