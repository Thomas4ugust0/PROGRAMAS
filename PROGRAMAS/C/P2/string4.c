#include <stdio.h>

int main() {
int k, l;
int i = 0, j= 0, n = 0, m = 0;
char tudo[101];


scanf("%[^\n]", tudo);

for(l =0; tudo[l] != '\0'; l++){
}


while(tudo[i] != ' ' && tudo[i] != '\0'){
i++;
}

//i é o valor do primeiro espaço/nome (colocar <= i quando imprimir)
for(k=0; k<=101; k++)
{
char c = tudo[k];
if(c >= 'A' && c <= 'Z'){
tudo[k] = c + 32;
}
}

while(tudo[n] != '\0'){
if(tudo[n] == ' '){
m = n;
}
n++;
}
for(j = 0; j < i; j++){
printf("%c", tudo[j]);
}
printf(".");
for(j = m+1; j < l; j++){
printf("%c", tudo[j]);
}
printf("@unb.br");

    return 0;
}
