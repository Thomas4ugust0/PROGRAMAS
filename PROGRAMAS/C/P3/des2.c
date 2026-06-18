#include <stdio.h>
char* troca(char str[81]){
for(int i=0; str[i] != '\0'; i++){
if(str[i] >= 'A' && str[i] <= 'M'){ 
str[i]= str[i] + 13;
}else if(str[i] > 'Z' || str[i] < 'A'){
str[i] = str[i];
}else{str[i]= str[i] - 13;}
}
return str;
}

int cmp(char str1[], char str2[]){
int iguais = 1, i=0, j=0;
while(str1[i] != '\0'){
i++;
}
while(str2[j] != '\0'){
j++;
}
if(i==j){
for(int i=0; str1[i] != '\0' && str2[i] != '\0'; i++){
    if(str1[i] != str2[i]){
        iguais = 0;
    }
}
}
else{
iguais = 0;
}
return iguais;
}

int main(){
int a, b, c, d, e;
scanf("%d", &a);
char str1[a][81];
    for(int i=0; i<a; i++){
        scanf(" %[^\n]", str1[i]);
}
scanf("%d", &b);
char str2[b][81];
    for(int i=0; i<b; i++){
        scanf(" %[^\n]", str2[i]);
}
for(int i=0; i < a; i++){
troca(str1[i]);
}

scanf("%d", &c);
for(int i=0; i<c; i++){
scanf("%d %d", &d, &e);
if(cmp(str1[d], str2[e]) == 1){
printf("S\n");
}else{printf("N\n");}
}
    
return 0;
}
