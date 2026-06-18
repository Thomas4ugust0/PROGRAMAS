#include <stdio.h>
#include <limits.h>
int main()

{
int a, b, c, i, l, t;
a=0, l=0;
char str[61], vog[61], inv[61];
char letra;
scanf("%s", str);

for(i=0; str[i] != '\0'; i++){
}
t = i;

for(i=0; i<t; i++){
letra = str[i];
if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || 
   letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){

vog[a] = str[i];
a++;
}
}
vog[a] = '\0';

for(i=a-1, c=0; i>= 0; i--, c++){
inv[c] = vog[i];
}
inv[c]= '\0';
for(b=0; b<a; b++){
if(inv[b] == vog[b]){
l++;
}
}
if(a==0){printf("Valor invalido!");}
else if(l==a){printf("S");}
else{printf("N");}
return 0;
}