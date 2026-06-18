#include <stdio.h>
#include <string.h>
int main(){

int a,b,c,d,k,i;
char f,g;
char str[1002][1000];
d=0, k=0;

scanf("%d", &a);
getchar();
for(i=1; i<=a; i++){
scanf("%[^\n]", str[i]);
getchar();
}
//b linha e c coluna

scanf("%d %d", &b, &c);
getchar();
while(scanf("%c", &f) != EOF){
getchar();
if(f == 'j' && b < a){
b++;
}
if(f== 'k' && b > 1){
b--;

b = (b + d);//*zerar o k e o d e o g no final
}

if(c > strlen(str[b])){
k = strlen(str[b]);
}else{
k=c;
}

g=str[b][k-1]; // linha e caractere
printf("%d %d %c\n", b, k, g);//k é coluna nova

}





return 0;
}