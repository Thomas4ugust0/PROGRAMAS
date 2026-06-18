#include <stdio.h>
int compara(char str[100], char str2[100]){
    int iguais=1, i;
for(i=0; str[i] != '\0' &&str2[i] != '\0'; i++){
    if(str[i]!=str2[i]){
        iguais=0;
    }
}
if(str[i] != str2[i]){
iguais=0;
}

return iguais;
}

int main(){
int a, b, iguais;
scanf("%d", &a);
scanf("%d", &b);
char str1[a][100];//qtd tamanho
char str2[b][100];

for(int i=0; i<a; i++){
scanf("%s", str1[i]);
}

for(int i=0; i<b; i++){
    scanf("%s", str2[i]);
    iguais = 0;
    for(int j=0; j<a; j++){
        if(compara(str2[i], str1[j])){
            iguais = 1;
        }
    }
    if(iguais){
    printf("acertou\n");
    }else{
    printf("errou\n");
    }
}
    return 0;
}