#include <stdio.h>
int main(){
int i, j;
char str[101];

scanf("%[^\n]", str);
for(i=0; str[i] != '\0'; i++){
}
i--;

//i é o tamanho efetivo da string inicial
for(j = i; j>=0; j--){
printf("%c - %d\n", str[j], str[j]);
}
    
return 0;
}