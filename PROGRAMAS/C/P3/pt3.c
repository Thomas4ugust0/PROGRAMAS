#include <stdio.h>
int contapalavras(char str[1002]){
int num = 1;
for(int i=0; str[i]!='\0'; i++){
if(str[i] == ' ' ){
    num++;
}
}
return num;
}


int main(){
int b=0, tem, c;
float d;
char a;
char str1[1002];
scanf("%c", &a);
scanf(" %[^\n]", str1);
int i=0;
c=contapalavras(str1);

while(str1[i] != '\0'){
    tem=0;
    while(str1[i] != ' ' && str1[i] != '\0'){
        if(str1[i] == a){
            tem = 1;
        }
    i++;
    }
if(tem){
b++;
}
if (str1[i] == ' '){
i++;
}

}


d=(b*100.0)/c;
printf("%0.1f\n", d);


    return 0;
}