#include <stdio.h>


int func(int vet[100]){
int repetido, num=0;
for(int i=0; i<100; i++){
{
    repetido = 0;
    for(int j=0; j<i; j++){
        if(vet[i]==vet[j]){
            repetido = 1;
            break;
        }
    }
if(!repetido){
num++;
}

}
}

return num;
}

int main(){
int vet[100];
int i=5;

vet[0]=1;
vet[1]=2;
vet[2]=3;
vet[3]=4;
vet[4]=5;

while(i<100){
vet[i]=1;
i++;
}

printf("%d", func(vet));



return 0;

}