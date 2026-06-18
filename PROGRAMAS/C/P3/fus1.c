#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "");


for(int i=1;i<=10;i++){
    printf("%d", i);

if(i<=5){
printf(" que é menor que 5\n");
}

if(i>5){
printf(" que é maior que 5\n");
}
}






return 0;
}