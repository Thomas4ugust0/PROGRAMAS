#include <stdio.h>


int main(){

char letra;
char str[101];
int tamanho = 0;
int encontradas = 0;
scanf("%c", &letra);
scanf("%s", str);


while(str[tamanho]!='\0'){
    tamanho++;
};

for(int i=0; i<tamanho; i++){
    if(letra == str[i]){
        encontradas++;
    }
}
if(encontradas != 0){
printf("foram encontradas %d letras equivalentes", encontradas);
}else{
printf("nao houve correspondencia");
}


return 0;
}